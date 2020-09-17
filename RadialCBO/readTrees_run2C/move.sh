for tree in `cat sam`; do

	if [ ! -f /gm2/data/g2be/Production/TrackQualityTrees/run2C/${tree} ]; then
    	echo $tree
	fi

done
