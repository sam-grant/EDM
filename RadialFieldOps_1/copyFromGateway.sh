#Sam grant
#Copy all files from nearline according to run num
i=$1
mkdir $i
mkdir ../Trees/Data/RadialFieldScan_1/${i}
mkdir ../Plots/Data/RadialFieldScan_1/${i}
cd $i
echo "Run num ${i}"

for file in `cat ../FileLists/master_${i}.txt`; do
	# echo $file
	file=${file##*/} # Retain part after the last slash
	if [[ -f ../../Trees/Data/RadialFieldScan_1/${i}/${file} ]]; then
		echo "${file} already exists, skipping..."
		continue
		echo $file
	fi
	echo "Copying ${file}..."
	scp g2gateway01:/home/G2Muon/radialFieldScan/${i}/${file} ../../Trees/Data/RadialFieldScan_1/${i}/
done

cd ../