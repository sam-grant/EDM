cd ../CMacros

for run in `cat ../txt/Run4_2021.txt | sort -r`; do

	echo $run

	#id=`echo $run | cut -c -2`

	file="/pnfs/GM2/daq/run4/nearline/nearlineHists_merged/gm2nearline_hists_run${run}.root"

	echo $file

	if [ -f /pnfs/GM2/persistent/EDM/Data/Br/CaloBeamPos_NewCuts/Run4_Nearline_2021_2/caloBeamPositionPlots_${run}.root ]; then 
	    echo "File for run ${run} exists, skipping"
	    continue
	fi

	if [ $run -eq 39170 ]; then
	    continue
	fi

	if [ $run -eq 39171 ]; then
	    continue
	fi

	if [ $run -eq 39172 ]; then
	    continue
	fi

	if [ $run -eq 39173 ]; then
	    continue
	fi

	if [ $run -eq 39174 ]; then
	    continue
	fi

	if [ $run -eq 39185 ]; then
	    continue
	fi

	if [ $run -eq 39187 ]; then
	    continue
	fi

	if [ $run -eq 39190 ]; then
	    continue
	fi

	if [ $run -eq 39191 ]; then
	    continue
	fi

	if [ $run -eq 42133 ]; then
	    continue
	fi

	#42133

	./ReadNearlineTrees.exe ${run} ${file}
	
done

cd ../Scripts
