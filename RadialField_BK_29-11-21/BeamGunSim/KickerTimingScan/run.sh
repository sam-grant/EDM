declare -a configs=(-505 -555 -605 -655 -705)

for config in ${configs[@]}; do
	echo $config
	# mkdir tmp${config}
	cd tmp${config}
	rm -f tmp${config}.fcl && cp ../main.fcl tmp${config}.fcl
	echo "services.gm2FieldManager.kTpeak : [${config}, ${config}, ${config}]" >> tmp${config}.fcl
	
	
	gm2 -c 

	cd ../
done

declare -a configs=(-505 -555 -605 -655 -705)

for config in ${configs[@]}; do
	echo $config
	# mkdir tmp${config}
	cd tmp${config}
	rm -f tmp${config}.fcl && cp ../main.fcl tmp${config}.fcl
	echo "services.gm2FieldManager.kTpeak : [${config}, ${config}, ${config}]" >> tmp${config}.fcl
	
	
	gm2 -c 

	cd ../
done