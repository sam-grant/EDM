config=14_30
#path=/pnfs/GM2/scratch/users/sgrant/radialField_14_-30/2020-12-15-17-01-20/data/
path=/pnfs/GM2/scratch/users/sgrant/radialField_14_30/2020-12-15-16-59-53/data/
#path=/pnfs/GM2/scratch/users/sgrant/radialField_${config}/2020-12-08-16-01-17/data/
for file in `ls ${path}`; do
    echo "${path}${file}" >> radialField_${config}.txt
done
