#Sam grant
#Copy all files from nearline according to run num

i=$1

echo $i

extPath=/Volumes/BACKUP/gm2/EDM/Trees/Data/RadialFieldScanReprocessed
# pnfsPath=/pnfs/GM2/scratch/users/labounty/gridoutput/2021-01-12-16-56-50/data
pnfsPath=/pnfs/GM2/scratch/users/sgrant/RadialFieldReproc

# Make a file list 
rm -f ../txt/FileLists/${i}.txt && touch ../txt/FileLists/${i}.txt
ssh gm2gpvm04 ls ${pnfsPath}/${i}/*/data/gm2offline_hadd_*.root >> ../txt/FileLists/${i}.txt

# Delete this line after first run
#rm -rf ${extPath}/${i} && 
if [[ ! -d ${extPath}/${i} ]]; then
	echo "${extPath}/${i} does not exists, creating directory"
	mkdir ${extPath}/${i}
fi

echo "Run num ${i}"

for file in `cat ../txt/FileLists/${i}.txt`; do

	file=${file##*/} # Retain part after the last slash
	# echo $file

	if [[ -f ${extPath}/${i}/gm2offline_hadd_${i}.root ]]; then
		echo "gm2offline_hadd_${i}.root already exists on external, skipping..."
		continue
	fi

	echo "Copying ${file} to ${extPath}/${i}/gm2offline_hadd_${i}.root"

	scp gm2gpvm04:${pnfsPath}/${i}/*/data/${file} ${extPath}/${i}/gm2offline_hadd_${i}.root #../../Trees/Data/RadialFieldScan_2/${i}/

done