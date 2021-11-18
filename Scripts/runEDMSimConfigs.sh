dataset_=(5.4e-18 1.8e-18 1.8e-19 1700ppm)
reco_=(allDecays acceptedDecays acceptedDecaysControl trackReco trackRecoControl trackTruth)
# frame_=(WORLD AAR MRF)
frame_=(WORLD AAR) # MRF)
qual_=(AQ BQ)
unblind_=("true" "false")

cd ../CMacros

for unblind in ${unblind_}; do 

for dataset in ${dataset_}; do

	dir="../Plots/MC/dMu/${dataset}/Plots"

	if [[ "$dataset" == "1700ppm" ]]; then
		dir="../Plots/MC/Bz/${dataset}/Plots"
	fi

	for reco in ${reco_}; do

		for frame in ${frame_}; do

			for qual in ${qual_}; do

				file="${dir}/edmPlots_${reco}_${frame}_250MeV_${qual}.root"

				config="${reco}_${frame}_250MeV_${qual}"

				if [[ -f $file ]]; then

					echo "Running command ./BlindedEDMSimFitter.exe $config $dataset $unblind"

					if [[ "$reco" == "allDecays" || "$reco" == "acceptedDecays" || "$reco" == "acceptedDecaysControl" ]]; then 
						# ./BlindedEDMSimFitter.exe $config $dataset $unblind | tail -n 3 | tee ../Sheets/edmSim/SimultaneousFitResults_${config}.csv
						./BlindedEDMSimFitter.exe $config $dataset $unblind | tail -n 4 >> ../Sheets/edmSim/SimultaneousFitResults_${config}.csv
					else 
						if [[ "$dataset" == "1700ppm" ]]; then
							# ./BlindedEDMSimFitter.exe $config $dataset $unblind | tail -n 7 | tee ../Sheets/BzSim/SimultaneousFitResults_${config}.csv
							./BlindedEDMSimFitter.exe $config $dataset $unblind | tail -n 8 >> ../Sheets/edmSim/SimultaneousFitResults_${config}.csv
						else 
							# ./BlindedEDMSimFitter.exe $config $dataset $unblind | tail -n 7 | tee ../Sheets/edmSim/SimultaneousFitResults_${config}.csv
							./BlindedEDMSimFitter.exe $config $dataset $unblind | tail -n 8 >> ../Sheets/edmSim/SimultaneousFitResults_${config}.csv
						fi
					fi

					
				fi

			done # qual
		done #frame
	done #reco
done # dataset

done # unblinding

cd ../Scripts