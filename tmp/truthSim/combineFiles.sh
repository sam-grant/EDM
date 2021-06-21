# ids=()
# Make array of file ids 

config="Bz"

for file in `ls /pnfs/GM2/persistent/EDM/MC/${config}/TruthNTup/ | sort -V`; do
	id=${file##*truthTrees.}
	id=${id%%.root*}
	ids+=($id)
done

# Get pairs of ids and hadd those files 

for (( i = 0; i<${#ids[@]} ; i+=2)) ; do 
	
	echo "${ids[i]}" "${ids[i+1]}"

	file1="/pnfs/GM2/persistent/EDM/MC/${config}/TruthNTup/truthTrees.${ids[i]}.root"
	file2="/pnfs/GM2/persistent/EDM/MC/${config}/TruthNTup/truthTrees.${ids[i+1]}.root"

	hadd -f /pnfs/GM2/persistent/EDM/MC/${config}/TruthNTup/truthTrees.${ids[i]}.${ids[i+1]}.root $file1 $file2

done

wait

# rm -f /pnfs/GM2/persistent/EDM/MC/dMu/TruthNTup/truthTrees.???.root