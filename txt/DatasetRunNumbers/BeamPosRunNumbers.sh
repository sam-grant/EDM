for i in a b c d; do
	for file in `ls ../../Plots/Data/BeamYPosMonitoring/Run1/${i}`; do
		run=${file##*_}
		run=${run%%.*}
		echo $run >> BeamPosRunNumbers_Run1.txt
	done
done