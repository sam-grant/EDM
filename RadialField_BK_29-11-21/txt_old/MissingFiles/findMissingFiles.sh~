dataset=run2
for run in `cat ../MissingRunNumbers/${dataset}.txt`; do
    echo $run
    rm -f ${dataset}/${run}.txt && touch ${dataset}/${run}.txt
    cp ../CaloFileLists/run1/${run}.txt $dataset
done
