for list in `ls ../txt/gm2*txt`; do

	dataset=${list##*/}
	dataset=${dataset%%.*}

	echo $dataset

	cd ../CMacros

	./CheckCaloAlignment.exe $dataset

done