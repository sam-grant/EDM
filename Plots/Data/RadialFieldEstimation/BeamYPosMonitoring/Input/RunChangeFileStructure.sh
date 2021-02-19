for file in `ls Run4_Jan`; do 

	echo ""

	run=${file##*_}
	run=${run%%.*}

	echo "Correcting $file with run number $run"

	./ChangeFileStructure.exe $run

	echo "Done"

	if [[ -f Run4_Jan/y-pos_${run}_corrected.root ]]; then
		echo "Corrected tree found, overwriting old one"
		# cp Run4_Jan/y-pos_${run}_corrected.root Run4_Jan/y-pos_${run}.root && rm -f Run4_Jan/y-pos_${run}_corrected.root
	else
		echo "Corrected tree not found, breaking"
		break
	fi
	

done