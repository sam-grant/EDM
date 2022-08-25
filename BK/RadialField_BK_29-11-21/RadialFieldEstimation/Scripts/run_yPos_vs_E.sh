# tMinArray=(0 24000 30000)
tMinArray=(0) #24000 30000)

eMaxArray=(6000) #500 1000 1500 2000 2500 3000 3500 4000 4500 5000 5500 6000)
eMin=0


# eMinArray=(0 500 1000 1500 2000 2500 3000 3500 4000 4500 5000 5500)

# eMax=6000

#testFile="/pnfs/GM2/daq/run1/offline/gm2_5039A/runs_15000/15921/gm2offline_full_18878380_15921.00368.root"
# testFile="/pnfs/GM2/scratch/users/gm2pro/daq/run4/offline/run4_9000/runs_37000/37067/gm2offline_final_14914847_37067.00203.root"
# testFile="/pnfs/GM2/scratch/users/gm2pro/daq/run4/offline/run4_9000/runs_37000/37067/gm2offline_final_14914940_37067.00205.root"
testFile="/pnfs/GM2/daq/run3/offline/gm2_5207A/runs_34000/34735/gm2offline_final_15346510_34735.00309.root"

cd ../yPos_vs_E

for tMin in ${tMinArray[@]}; do

	# for eMin in ${eMinArray[@]}; do
	for eMax in ${eMaxArray[@]}; do

		# eMax=$((eMin+500))

		fclFile="${eMin}MeV_${eMax}Mev_${tMin}ns.fcl"

		rm -f $fclFile && touch $fclFile

		cp ../../fcl/RunCaloBeamPositionPlots.fcl $fclFile

		echo "physics.analyzers.caloBeamPositionPlots.eMin : ${eMin}" >> $fclFile
		echo "physics.analyzers.caloBeamPositionPlots.eMax : ${eMax}" >> $fclFile
		echo "physics.analyzers.caloBeamPositionPlots.tMin : ${tMin}" >> $fclFile

		echo "Running $fclFile on $testFile"

		run=${testFile##*_}
		run=${run%%.root*}

		gm2 -c $fclFile -s $testFile -T caloBeamPositionPlots.${run}_${eMin}MeV_${eMax}Mev_${tMin}ns.root 

		echo "Output: ../yPos_vs_E/caloBeamPositionPlots.${run}_${eMin}MeV_${eMax}Mev_${tMin}ns.root"

		wait

		# break

	done

	# break

done


cd ../Scripts

