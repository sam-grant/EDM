Run=run4
for file in `ls /pnfs/GM2/daq/${Run}/nearline/nearlineHists_merged/ | sort -V`; do
    run=${file##*_run}
    run=${run%%.root*}
    echo $run >> NearlineRunNumbers_${Run}.txt
done
