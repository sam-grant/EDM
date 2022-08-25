cd ../CMacros

for run in `cat ../txt/Run4_Jan.txt`; do

	echo $run

	id=`echo $run | cut -c -2`

	file="	gm2nearline_hists_run${run}.root"
	ls $file
	
	./ReadNearlineTrees.exe $run $file
	break
done

cd ../Scripts
