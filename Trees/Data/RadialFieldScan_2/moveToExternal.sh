for i in {37857..37882}; do

	echo $i

	if [[ ! -d $i ]]; then
		echo "Directory does not exist on local, skipping..."
		continue
	fi

	if [[ -d /Volumes/BACKUP/gm2/EDM/Trees/Data/RadialFieldScan_2/$i ]]; then
		echo "Directory exists on external, deleting local and skipping transfer..."
		rm -rf $i
		continue
	fi
	
	mv $i /Volumes/BACKUP/gm2/EDM/Trees/Data/RadialFieldScan_2/
done
