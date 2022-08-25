tMinArray=(0 24000 30000)
eMinArray=(0 500 1000 1500 2000 2500 3000 3500 4000 4500 5000 5500)

testFile="/pnfs/GM2/daq/run1/offline/gm2_5039A/runs_15000/15921/gm2offline_full_18878380_15921.00368.root"

cd ../yPos_vs_E

for tMin in ${tMinArray[@]}; do

	for eMin in ${eMinArray[@]}; do

		eMax=$((eMin+500))

		config="${eMin}MeV_${eMax}Mev_${tMin}ns"

		echo "Running $fclFile on $testFile"

		run=${testFile##*_}
		run=${run%%.root*}

		mv caloBeamPositionPlots_${eMin}MeV_${eMax}Mev_${tMin}ns_${run}.root caloBeamPositionPlots.${run}_${eMin}MeV_${eMax}Mev_${tMin}ns.root 

		wait

	done

done


cd ../Scripts