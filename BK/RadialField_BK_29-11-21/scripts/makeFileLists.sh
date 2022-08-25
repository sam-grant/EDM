for run in `cat AllRunNumbers.txt`; do
    rm -f ${run}.txt && touch ${run}.txt
    cat reprocFiles.txt | grep $run >> $run.txt
done
