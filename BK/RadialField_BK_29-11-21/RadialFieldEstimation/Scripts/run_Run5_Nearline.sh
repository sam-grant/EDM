cd ../CMacros

for run in `cat ../txt/Run5_Nearline.txt | sort -r`; do

	echo $run

	#id=`echo $run | cut -c -2`

	file="/pnfs/GM2/daq/run5/nearline/nearlineHists_merged/runs_46000/gm2nearline_hists_run${run}.root"
	echo $file

	if [ -f /pnfs/GM2/persistent/EDM/Data/Br/CaloBeamPos/Run5_Nearline/caloBeamPositionPlots_${run}.root ]; then 
	    echo "File for run ${run} exists, skipping"
	    continue
	fi

	./ReadNearlineTrees.exe ${run} ${file}
	
done

cd ../Scripts
