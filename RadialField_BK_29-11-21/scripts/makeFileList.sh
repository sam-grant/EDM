list="caloTrees_15921.txt"
path="/pnfs/GM2/scratch/users/sgrant/CaloTrees15921/2020-10-01-08-09-59/data/"

rm -f $list && touch $list

for i in `ls ${path}`; do
    echo ${path}${i} >> $list
done