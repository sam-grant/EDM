pathToFileLists=/gm2/app/users/sgrant/analysis/EDM/RadialField/txt/CaloFileLists/
#rm -f RunNumbers_Run1.txt && touch RunNumbers_Run1.txt

for dir in `ls $pathToFileLists | sort -V`; do
    
    rm -f tmp.txt && touch tmp.txt
    rm -f ../txt/CaloRunNumbers/${dir}.txt && touch ../txt/CaloRunNumbers/${dir}.txt

    for list in `ls $pathToFileLists$dir | sort -V`; do
	
	# Strip run number
	run=${list%%.txt*}

	echo $run >> tmp.txt

    done

    cat tmp.txt | sort -V >> ../txt/CaloRunNumbers/${dir}.txt

done




    
