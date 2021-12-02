# could never really get this to work
# could never really get this to work

pnfsPath=/pnfs/GM2/scratch/users/sgrant/RadialFieldReproc

for run in `cat ../txt/AllRunNumbers.txt`; do

	# path=$(ls -A '${pnfsPath}/${run}/*')

	if [[ -d ${pnfsPath}/${run} ]]; then # && [[ ! -z "$path" ]]; then #${pnfsPath}/${run}/*/data/ -maxdepth 0 ! -empty ]]; then

		ls ${pnfsPath}/${run}/*/data/

		echo "Run number ${run} has a directory, but no output file"

	else 

		echo "Run number ${run} has no directory"

	fi

done

# all work and no play makes jack a dull boy.
# all work and no play makes jack a dull boy.
# all work and no play makes jack a dull boy.
# all work and no play makes jack a dull boy.
# all work and no play makes jack a dull boy.