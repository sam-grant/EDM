# main 

printf "\n---> Renaming main nutple files\n"

COUNTER=0

dir=Trees5/TrackRecoAndTruth/5.4e-18

# for file in `ls -ltr $dir | awk '{ print $9 }' | tail -n +2`; do
for file in `ls $dir`; do

    file=$dir/$file

    # new_file=$dir/trackSimTrees_${COUNTER}.root
    new_file=$dir/trees_${COUNTER}.root

    echo "---> Renaming $file to $new_file"

    mv -vn $file $new_file

    COUNTER=$[$COUNTER +1]

done

sleep 1

# all decays 

printf "\n---> Renaming all decays ntuple files\n"

COUNTER=0

dir=Trees5/AllDecays/5.4e-18

# for file in `ls -ltr $dir | awk '{ print $9 }' | tail -n +2`; do
for file in `ls $dir`; do

    file=$dir/$file

    new_file=$dir/decaySimTrees_${COUNTER}.root
    # new_file=$dir/trees_${COUNTER}.root

    echo "---> Renaming $file to $new_file"

    mv -vn $file $new_file

    COUNTER=$[$COUNTER +1]

done

sleep 1

# alignment

printf "\n---> Renaming alignment nutple files\n"

for config in Plus1mm Minus1mm Plus0.1deg Minus0.1deg; do 

	COUNTER=0

	printf "\n---> $config\n"

	dir=Trees5/Alignment/$config

	# for file in `ls -ltr $dir | awk '{ print $9 }' | tail -n +2`; do
	for file in `ls $dir`; do

	    file=$dir/$file

	    # new_file=$dir/trackSimTrees_${COUNTER}.root
	    new_file=$dir/trees_${COUNTER}.root

	    echo "---> Renaming $file to $new_file"

	    mv -vn $file $new_file

	    COUNTER=$[$COUNTER +1]

	done

done

printf "\n---> Renaming complete"
