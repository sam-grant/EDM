#Sam grant
#Copy all files from nearline according to run num
i=$1

id=`echo $i | cut -c -2`

study="BeamYPosMonitoring" #"RadialFieldScanReprocessed" #"BeamYPosMonitoring"

rm -f ../txt/FileLists/${i}.txt && touch ../txt/FileLists/${i}.txt

ssh gm2gpvm01 ls /pnfs/GM2/daq/run4/nearline/nearlineHists/runs_${id}000/${i} >> ../txt/FileLists/${i}.txt

if [[ ! -d /Volumes/BACKUP/gm2/EDM/Trees/Data/${study}/${i} ]]; then 
	mkdir /Volumes/BACKUP/gm2/EDM/Trees/Data/${study}/${i}
fi

echo "Run num ${i}"

for file in `cat ../txt/FileLists/${i}.txt`; do

	#echo $file
	file=${file##*/} # Retain part after the last slash

	# echo $file
	if [[ -f /Volumes/BACKUP/gm2/EDM/Trees/Data/${study}/${i}/${file} ]]; then
		echo "${file} already exists on external, skipping..."
		continue
	fi

	echo "Copying ${file}..."

	scp gm2gpvm01:/pnfs/GM2/daq/run4/nearline/nearlineHists/runs_${id}000/${i}/${file} /Volumes/BACKUP/gm2/EDM/Trees/Data/${study}/${i}/ #../../Trees/Data/RadialFieldScan_2/${i}/

done
