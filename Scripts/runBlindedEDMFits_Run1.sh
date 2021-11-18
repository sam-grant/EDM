config=125MeV_BQ
dataset_=(Run-1a Run-1b Run-1c Run-1d)

cd ../CMacros 

for dataset in ${dataset_}; do

	input=${dataset}_${config}

	./BlindedEDMFitter.exe ${input} #| tail -n 6 | tee ../Sheets/${dataset}/SimultaneousFitResults_${config}.csv
	# ./OrthogonalFitter.exe ${input} 
	
done

cd ../Scripts