fclFile=/gm2/app/users/sgrant/offline/gm2Dev_v9_59_00/srcs/gm2analyses/EDM/fcl/RunCaloBeamPositionPlots.fcl
Run=run1
#pathToFileLists=/gm2/app/users/sgrant/analysis/EDM/RadialField/txt/CaloFileLists/gm2pro_daq_full_run1_60h_5039A_GLdocDB16021-v2
pathToFileLists=/gm2/app/users/sgrant/analysis/EDM/RadialField/txt/MissingFiles/${Run}

for list in `ls $pathToFileLists`; do

    list=${pathToFileLists}/${list}

    echo "Using file list ${list}"

    numberOfFiles=`cat $list | wc -l`

    echo $numberOfFiles
    
    # 5 seconds per file, we want to get this done in one hour
    # 60/5 = 12

    numberOfJobs=`echo $(($numberOfFiles / 12))`

    filesPerJob=`echo $(($numberOfFiles / $numberOfJobs))`

    # Strip run number
    run=${list%%.txt*}

    # Make an output directory if it doesn't already exists
    outputDirectory=/pnfs/gm2/scratch/users/sgrant/BrAna/CaloYPosition/MissingRuns_${Run}

    if [[ ! -d $outputDirectory ]]; then
	mkdir $outputDirectory
	echo "Created output directory $outputDirectory"
    fi

    
    echo "Submitting ${numberOfJobs} jobs for ${numberOfFiles} files $filesPerJob files per job for run ${run}"

    ./gridSetupAndSubmitGM2Data.sh --daq --ana --fhiclFile=${fclFile} --localArea --output-dir=${outputDirectory}/${run} --input-filelist=${pathToFileLists}/${list} --njobs=${numberOfJobs} --noifdh_art --lifetime=1h

done
