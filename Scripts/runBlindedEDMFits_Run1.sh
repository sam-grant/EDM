config=250MeV_BQ
dataset_=(Run-1a Run-1b Run-1c Run-1d)

cd ../CMacros 
for dataset in ${dataset_}; do

	input=edmPlots_${dataset}_${config}

	./BlindedEDMFitter.exe ${input} | tail -n 6 | tee ../Sheets/${dataset}/SimultaneousFitResults_${config}.csv

done
cd ../Scripts