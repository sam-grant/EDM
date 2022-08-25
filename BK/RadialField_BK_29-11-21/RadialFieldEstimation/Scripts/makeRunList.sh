dir="/pnfs/GM2/persistent/EDM/Data/Br/CaloBeamPos_NewCuts"

for dataset in `ls ${dir} | sort -V`; do

    output="../txt/${dataset}.txt"
    rm -f $output && touch $output

    for file in `ls ${dir}/${dataset}`; do

	echo $file
	run=${file##*_}
	run=${run%%.*}
	echo $run >> $output
    
    done


done
