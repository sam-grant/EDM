command -v samweb >/dev/null 2>&1 || { echo >&2 "samweb not found. You want:"; echo "source /grid/fermiapp/products/common/etc/setups.sh"; echo "setup fife_utils"; return; }

# Get SAM file list
dataset=$1

echo "Getting master calo file list."
samweb -e gm2 list-definition-files $dataset > tmp.txt
sort -t_ -k4 tmp.txt > SAMFileListCalo_${dataset}.txt
rm -f tmp.txt

if [[ ! -d ../txt/CaloFileLists/${dataset} ]] ; then
    mkdir ../txt/CaloFileLists/${dataset}
    echo "Created directory for dataset ${dataset}"
fi

echo "Looping over files"

lastRun=0

for file in `cat SAMFileListCalo_${dataset}.txt`; do
    
    path=`samweb -e gm2 locate-file ${file}`
    path=/pnfs${path##*/pnfs}
    path=${path%%(*}
    
    # Get run number and set up directory
    run=${path##*/}
    
    if [[ $run -ne $lastRun ]]; then
	rm -f ../txt/CaloFileLists/${dataset}/${run}.txt && touch ../txt/CaloFileLists/${dataset}/${run}.txt
	echo "Sub-run ${run}"
    fi

    echo $path"/"$file >> ../txt/CaloFileLists/${dataset}/${run}.txt

    lastRun=$run

done
    
