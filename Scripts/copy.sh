# copy Summer2022 files 

for user in sgrant lbailey ghesketh; do

	# start with main  

	input_dir=Trees5/Summer2022Campaign/${user}/MainNtuple
	output_dir=Trees5/TrackRecoAndTruth/5.4e-18

	# for ntuple in MainNtuple AllDecaysNtuple Plus1mmNtuple Plus0.1degNtuple Minus0.1degNtuple; do

	printf "\n---> Copying files from $input_dir to $output_dir\n"

	cp -i $input_dir/*.root $output_dir 

	sleep 1 

	# All decays

	input_dir=Trees5/Summer2022Campaign/${user}/AllDecaysNtuple
	output_dir=Trees5/AllDecays/5.4e-18

	printf "\n---> Copying files from $input_dir to $output_dir\n"

	cp -i $input_dir/*.root $output_dir 

	sleep 1 

	# Plus 1 mm 

	input_dir=Trees5/Summer2022Campaign/${user}/Plus1mmNtuple
	output_dir=Trees5/Alignment/Plus1mm

	printf "\n---> Copying files from $input_dir to $output_dir\n"

	cp -i $input_dir/*.root $output_dir 

	sleep 1 

	# Minus 1 mm 

	input_dir=Trees5/Summer2022Campaign/${user}/Minus1mmNtuple
	output_dir=Trees5/Alignment/Minus1mm

	printf "\n---> Copying files from $input_dir to $output_dir\n"

	cp -i $input_dir/*.root $output_dir 

	sleep 1 

	# Plus 0.1 deg

	input_dir=Trees5/Summer2022Campaign/${user}/Plus0.1degNtuple
	output_dir=Trees5/Alignment/Plus0.1deg

	printf "\n---> Copying files from $input_dir to $output_dir\n"

	cp -i $input_dir/*.root $output_dir 

	sleep 1 

	# Minus 0.1 deg

	input_dir=Trees5/Summer2022Campaign/${user}/Minus0.1degNtuple
	output_dir=Trees5/Alignment/Minus0.1deg

	printf "\n---> Copying files from $input_dir to $output_dir\n"

	cp -i $input_dir/*.root $output_dir 

	sleep 1 

	# done

done