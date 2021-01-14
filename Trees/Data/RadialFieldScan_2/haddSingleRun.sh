

	i=$1

	echo $i

	# if [[ -f merged_noDQC/gm2nearline_hists_run${i}.root ]]; then

	# 	echo "Output already exists, stopping..."
	# 	return
		
	# fi

    if [[ ! -d ${i} ]]; then

		echo "Directory does not exist on local, checking external..."

		if [[ ! -d /Volumes/BACKUP/gm2/EDM/Trees/Data/RadialFieldScan_2/$i ]]; then

			echo "Directory does not exist on external, stopping..."

			return

		fi 

		echo "Directory found on external, hadding..."

		hadd -f merged_noDQC/gm2nearline_hists_run${i}.root /Volumes/BACKUP/gm2/EDM/Trees/Data/RadialFieldScan_2/${i}/*.root 

		wait 

		return

	fi

	echo "Directory found on local, hadding..."

	hadd -f merged_noDQC/gm2nearline_hists_run${i}.root ${i}/*.root

	return



       
