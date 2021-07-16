for list in `ls txt/runNumbers/ | sort -V`; do
    . getQHV.sh $list
done
