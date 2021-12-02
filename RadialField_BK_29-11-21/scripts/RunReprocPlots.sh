for run in `cat ../txt/RadialFieldRunNumbers.txt`; do

	file=`ls /pnfs/GM2/scratch/users/sgrant/RadialFieldReproc/${run}/*/data`
	path=`echo /pnfs/GM2/scratch/users/sgrant/RadialFieldReproc/${run}/*/data`

	echo "Run ${run}"
	echo "Path ${path}"
	echo "File ${file}"

	./ReadNearlineTrees.exe ${run} ${path} ${file} 

done