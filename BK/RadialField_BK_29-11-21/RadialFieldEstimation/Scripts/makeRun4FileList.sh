cd ../txt

for file in `ls /pnfs/GM2/daq/run4/nearline/nearlineHists_merged/gm2nearline_hists_run*.root | sort -V`; do
	
	run=${file##*_run}
	run=${run%%.*}

	if [ $run -lt 37970 ]; then 
	    continue
	fi

	echo $run >> Run4_2021.txt
done

cd ../Scripts
