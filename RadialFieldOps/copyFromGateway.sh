#Sam grant
#Copy all files from nearline according to run num
i=$1
mkdir $i
mkdir ../Trees/Data/RadialFieldScan_1/${i}
cd $i
echo "Copying run num ${i}"
scp g2gateway01:/home/G2Muon/radialFieldScan/${i}/gm2nearline_hists_run${i}_*.root ../../Trees/Data/RadialFieldScan_1/${i}/
cd ../