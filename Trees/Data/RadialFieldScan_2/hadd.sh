


for i in {37857..37882}; do

	echo $i

	if [[ -f merged_noDQC/gm2nearline_hists_run${i}.root ]]; then

		echo "Hadd output already exists, skipping..."
		continue
		
	fi

    if [[ ! -d ${i} ]]; then

		echo "Directory does not exist on local, checking external..."

		if [[ ! -d /Volumes/BACKUP/gm2/EDM/Trees/Data/RadialFieldScan_2/$i ]]; then

			echo "Directory does not exist on external, skipping..."

			continue

		fi 

		echo "Directory found on external, hadding..."

		hadd -f merged_noDQC/gm2nearline_hists_run${i}.root /Volumes/BACKUP/gm2/EDM/Trees/Data/RadialFieldScan_2/${i}/*.root 

		continue

	fi

	echo "Directory found on local, hadding..."

	hadd -f merged_noDQC/gm2nearline_hists_run${i}.root ${i}/*.root

	wait

done

       
