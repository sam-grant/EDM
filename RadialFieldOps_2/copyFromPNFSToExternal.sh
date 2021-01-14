#Sam grant
#Copy all files from nearline according to run num
i=$1


#ssh gm2gpvm01 ls /pnfs/GM2/daq/run4/nearline/nearlineHists/runs_37000/${i}/gm2nearline_hists_run${i}*.root

#scp g2gpvm01:/gm2/app/users/sgrant/tmp/master_${i}.txt FileLists
ssh gm2gpvm01 ls /pnfs/GM2/daq/run4/nearline/nearlineHists/runs_37000/${i}/gm2nearline_hists_run${i}*.root >> FileLists/master_${i}.txt
#
## mkdir $i
mkdir /Volumes/BACKUP/gm2/EDM/Trees/Data/RadialFieldScan_2/${i}
## mkdir ../Plots/Data/RadialFieldScan_2/${i}
#
echo "Run num ${i}"
#
for file in `cat FileLists/master_${i}.txt`; do
	#echo $file
	file=${file##*/} # Retain part after the last slash
	# echo $file
	if [[ -f /Volumes/BACKUP/gm2/EDM/Trees/Data/RadialFieldScan_2/${i}/${file} ]]; then
		echo "${file} already exists on external, skipping..."
		continue
	fi
	echo "Copying ${file}..."
#
	scp gm2gpvm01:/pnfs/GM2/daq/run4/nearline/nearlineHists/runs_37000/${i}/${file} /Volumes/BACKUP/gm2/EDM/Trees/Data/RadialFieldScan_2/${i}/ #../../Trees/Data/RadialFieldScan_2/${i}/
done
