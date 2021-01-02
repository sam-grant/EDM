#Sam grant
#Copy all files from nearline according to run num
i=$1

echo $i

scp g2gateway01:/home/G2Muon/sgrant/radialFieldScan/FileLists_2/master_${i}.txt FileLists

# mkdir $i
mkdir /Volumes/BACKUP/gm2/EDM/Trees/Data/RadialFieldScan_2/${i}
# mkdir ../Plots/Data/RadialFieldScan_2/${i}

echo "Run num ${i}"

for file in `cat FileLists/master_${i}.txt`; do
	# echo $file
	file=${file##*/} # Retain part after the last slash
	if [[ -f /Volumes/BACKUP/gm2/EDM/Trees/Data/RadialFieldScan_2/${i}/${file} ]]; then
		echo "${file} already exists on external, skipping..."
		continue
		echo $file
	fi
	echo "Copying ${file}..."

	scp g2gateway01:/home/G2Muon/sgrant/radialFieldScan/${i}/${file} /Volumes/BACKUP/gm2/EDM/Trees/Data/RadialFieldScan_2/${i}/ #../../Trees/Data/RadialFieldScan_2/${i}/
done
