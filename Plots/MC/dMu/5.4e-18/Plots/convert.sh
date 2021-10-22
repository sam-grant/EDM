for file in `ls edmPlots_dMuSim_*.root`; do
	echo $file

	newFile=${file##*edmPlots_dMuSim_}
	newFile="edmPlots_"${newFile}

	echo $newFile
	mv $file $newFile

done
