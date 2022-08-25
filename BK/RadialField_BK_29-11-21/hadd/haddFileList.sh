# Hadd files in FileList_12345.txt (made by haddSubRunsSAMList.sh)
#piped input file

#num="../txt/caloTrees_15921.txt" #$1
#echo "Hadding list "$num

config=caloTrees_15921


# Check that output dir doesn't exist
if [ -d $config ]; then
 echo "Output directory $config already exists."
fi

# Change to directory for this run
echo "Processing run $config..."
mkdir $config
cd $config

# Get all files in FileList_12345.txt
cp ../../txt/${config}.txt .
files=""
for line in `cat ${config}.txt`; do
  	files=$files" "${line} # gm2tracker_muon_beamgun_full_36469793_1599532472.${id}.root
done

# Hadd these files (using Joe's script that does a few at a time)
../hadd.sh caloTree_15921.root $files

cd ../
