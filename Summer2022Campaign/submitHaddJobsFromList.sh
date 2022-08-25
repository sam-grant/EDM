# Set N jobs per submission (1 for all except all decays, where it should be 5)
nJobs=5

input_path_list=$1

# Check for input
if [ "$#" -ne 1 ]; then
  echo "ERROR: input list required as argument, e.g. submitHaddJobsFromList.sh path_list.txt"
  return
fi

read -p "Submitting $nJobs hadd job per input directory (1 is OK for all Ntuple configurations except AllDecaysNtuple, where you should use 5). Proceed? <Y/n>" prompt
if [[ $prompt =~ ^[Y]$ ]]; then
    echo ""
else
    printf "\nBye.\n"
    return;
fi

# Set up log file. These get stored in the submission.log as well.
printouts="printouts.log"
if [ -f $printouts ]; then
  rm $printouts
else
  touch $printouts
fi

# Loop thro' fileinput file and run submissions
for input_path in `cat $input_path_list`; do 

    printf "\n---> Submitting hadd jobs for input path $input_path"

    # Get config (MainNtuple ect.)
    config=${input_path#*30xBNL/}
    config=${config%/2022*}

    ./gridSetupAndSubmitGM2Data.sh --hadd --tag tracker --schemas None --input-dir $input_path --output-dir /pnfs/GM2/scratch/users/${USER}/EDMSim/30xBNL/${config}Hadd --njobs $nJobs >> $printouts

    # Get the output path.
    output_dir=`tail -n 10 $printouts`
    output_dir=${output_dir#*Copied submission.log to}
    output_dir=${output_dir% and linked to it*}

    printf "\nDone. Output directory is ${output_dir}\n"

done

printf "\nAll submissions done, see ${printouts}. Please record the output paths in the spreadsheet. Ty.\n"
