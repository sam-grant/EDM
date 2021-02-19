rm -f CurrentRunNumbers_Master.txt && touch CurrentRunNumbers_Master.txt
for list in CurrentRunNumbers_Run1.txt CurrentRunNumbers_Run3NW.txt CurrentRunNumbers_Run4_Jan.txt; do
	for run in `cat $list`; do
		echo $run >> CurrentRunNumbers_Master.txt
	done
done