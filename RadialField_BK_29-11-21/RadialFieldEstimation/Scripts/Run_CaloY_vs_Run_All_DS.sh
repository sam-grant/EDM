for list in `ls ../txt/gm2*txt`; do

	dataset=${list##*/}
	dataset=${dataset%%.*}

	echo $dataset

	cd ../CMacros

	./Plot_CaloY_vs_Run.exe $dataset

done