#Sam grant
#Copy all files from nearline according to run num
i=$1

echo $i

# scp g2gateway01:/home/G2Muon/sgrant/radialFieldScan/FileLists_2/master_${i}.txt FileLists
scp g2gateway01:/home/G2Muon/sgrant/monitorMeanYPos/FileLists/${i}.txt ../txt/FileLists

# mkdir $i
mkdir /Volumes/BACKUP/gm2/EDM/Trees/Data/monitorMeanYPos
mkdir /Volumes/BACKUP/gm2/EDM/Trees/Data/monitorMeanYPos/${i}
# mkdir ../Plots/Data/RadialFieldScan_2/${i}

echo "Run num ${i}"

for file in `cat ../txt/FileLists/${i}.txt`; do
	# echo $file
	file=${file##*/} # Retain part after the last slash
	if [[ -f /Volumes/BACKUP/gm2/EDM/Trees/Data/monitorMeanYPos/${i}/${file} ]]; then
		echo "${file} already exists on external, skipping..."
		continue
		echo $file
	fi
	echo "Copying ${file}..."

	scp g2gateway01:/home/G2Muon/sgrant/monitorMeanYPos/${i}/${file} /Volumes/BACKUP/gm2/EDM/Trees/Data/monitorMeanYPos/${i}/ #../../Trees/Data/RadialFieldScan_2/${i}/
done
