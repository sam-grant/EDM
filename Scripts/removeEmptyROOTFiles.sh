path=path
for file in `ls y-pos*.root`; do
	size=`du -b $file | cut -f -1`;
	if [[ $size -eq 427 ]]; then
		echo $size 
		echo $file
	fi
done