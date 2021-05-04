eMax=2750
eMinArray=(0 250 500 750 1000 1250 1500)
tMinArray=(0 23 30)
tMaxArray=(300) # 600000)

for tMin in ${tMinArray}; do
	for tMax in ${tMaxArray}; do
		for eMin in ${eMinArray}; do

			# eMax=$((eMin+500))
			#echo $eMax 
			# continue

			cd ../CMacros 

			outDir1=/Users/samuelgrant/Documents/gm2/EDM/Plots/Data/RadialFieldScan_2/raw/cutsTesting/${eMin}MeV_${eMax}MeV_${tMin}us_${tMax}us
			if [ ! -d $outDir1 ]; then
				mkdir $outDir1
			fi

			outDir2=/Users/samuelgrant/Documents/gm2/EDM/Images/Data/RadialFieldScan_2/raw/cutsTesting/${eMin}MeV_${eMax}MeV_${tMin}us_${tMax}us
			if [ ! -d $outDir2 ]; then
				mkdir $outDir2
			fi

			for run in `cat ../txt/RadialFieldScanRunNumbers_2.txt | sort -V`; do
				./ReadNearlineTrees.exe $run $eMin $eMax $tMin $tMax
			done

			./AnalyseBr_nearline.exe raw/cutsTesting/${eMin}MeV_${eMax}MeV_${tMin}us_${tMax}us

			cd ../Scripts

		done
	done
done