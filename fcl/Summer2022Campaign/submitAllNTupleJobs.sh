# Set N jobs per submission (1 for test, 100 for production)
nJobs=1

input_dir=$1

# Check for input
if [ "$#" -ne 1 ]; then
  echo "ERROR: input path required as argument, e.g. /pnfs/GM2/scratch/users/sgrant/EDMSim/30xBNL/GasGun/2022-07-18-08-33-37" 
  return
fi

# Get input datetime ($NOW parameter in the grid script)
datetime=${input_dir#*GasGun/}

read -p "Submitting $nJobs job per Ntuple configuration (1 is OK for a test, 100 is OK for production). Proceed? <Y/n>" prompt
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

# Arrays for configs and fcl files
configs_=(MainNtuple AllDecaysNtuple Plus1mmNtuple Minus1mmNtuple Plus0.1degNtuple Minus0.1deg)
fclFiles_=(RunTrackingSimAndTrees_EDM.fcl RunPhaseAnalyzer.fcl RunTrackingSimExtAlignOffset_plus1mm.fcl RunTrackingSimExtAlignOffset_minus1mm.fcl RunTrackingSimExtAlignOffset_plus0.1deg.fcl RunTrackingSimExtAlignOffset_minus0.1deg.fcl)

# Loop thro' configs and run submissions
for i in ${!configs_[*]}; do

  printf "\n---> Submitting ${nJobs} jobs for ${configs_[$i]} with ${fclFiles_[$i]}"

  # Run submission
  ./gridSetupAndSubmitGM2Data.sh --mc --full --fcl ${fclFiles_[$i]} --input-dir /pnfs/GM2/scratch/users/${USER}/EDMSim/30xBNL/GasGun/${datetime} --output-dir /pnfs/GM2/scratch/users/${USER}/EDMSim/30xBNL/${configs_[$i]} --njobs=$nJobs --grace >> $printouts   

  # Get the output path.
  output_dir=`tail -n 10 $printouts`
  output_dir=${output_dir#*Copied submission.log to}
  output_dir=${output_dir% and linked to it*}

  printf "\nDone. Output directory is ${output_dir}\n"

done

printf "\nAll submissions done, see ${printouts}. Please record the output paths in the spreadsheet. Ty.\n"