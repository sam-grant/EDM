dataset=Run1
rm -f CurrentRunNumbers_${dataset}.txt && touch CurrentRunNumbers_${dataset}.txt
for file in `ls ../../Plots/Data/RadialFieldEstimation/BeamYPosMonitoring/Input/${dataset}`; do
	run=${file##*_}
	run=${run%%.*}
	echo $run >> CurrentRunNumbers_${dataset}.txt
done
