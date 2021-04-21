
eMin=1700
eMax=6000
tMin=30000 

cd ../CMacros 

outDir1=/Users/samuelgrant/Documents/gm2/EDM/Plots/Data/RadialFieldScan_2/raw/cutsTesting/${eMin}MeV_${eMax}MeV_${tMin}ns
if [ ! -d $outDir1 ]; then
	mkdir $outDir1
fi

outDir2=/Users/samuelgrant/Documents/gm2/EDM/Images/Data/RadialFieldScan_2/raw/cutsTesting/${eMin}MeV_${eMax}MeV_${tMin}ns
if [ ! -d $outDir2 ]; then
	mkdir $outDir2
fi
#mkdir /Users/samuelgrant/Documents/gm2/EDM/Plots/Data/RadialFieldScan_2/raw/cutsTesting/${eMin}MeV_${eMax}MeV_${tMin}

for run in `cat ../txt/RadialFieldScanRunNumbers_2.txt | sort -V`; do

	./ReadNearlineTrees.exe $run $eMin $eMax $tMin

done

./AnalyseBr_nearline.exe raw/cutsTesting/${eMin}MeV_${eMax}MeV_${tMin}ns

cd ../Scripts