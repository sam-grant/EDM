#!/bin/bash

for file in `ls /gm2/data/g2be/Production/TrackQualityTrees/run2C/*.root`; do
	id=${file##*_}
    id=${id%*.root}

    if [ ! -f plots_run2C_${id}.root ]; then 
    	echo plots_run2C_${id}.root
    	./Plotter $file
    fi

done

