# scratchDir=/pnfs/GM2/scratch/users/sgrant/EDMSim/30xBNL/MainNTuple/2022-07-18-09-00-37

# firstFile=`ls ${scratchDir}/data | head -n 1`

firstFile=gm2ringsim_muon_gasgun_truth_58257731_1658151221.1.root

# unique ID 
id=${firstFile#*truth_}
echo $id

id=${id%.*.root}
id=${id#*_}.${id%_*}
# echo $id
# id1=${id#*_}
# echo $id1
# id2=${id%_*}
# echo $id2
# id=${id1}.${id2}

echo $id

# # Tape directory
# tapeDir=/pnfs/GM2/EDM/MC/dMu/GasGun/5.4e-18/${id}

# if [ ! -d $tapeDir ]; then
# 	# mkdir $tapeDir
# 	echo "ifdh cp ${scratchDir}/data/*.root $tapeDir"
# else
# 	echo "Tape directory already exists!"
# fi
