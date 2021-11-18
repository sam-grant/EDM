list=(scp gm2gpvm01:/gm2/app/users/sgrant/analysis/EDM/RadialField/RadialFieldEstimation/Images/EstimateRadialField/AvgCaloYvsRun_Run5_Nearline_45581_45586.C
scp gm2gpvm01:/gm2/app/users/sgrant/analysis/EDM/RadialField/RadialFieldEstimation/Images/EstimateRadialField/AvgCaloYvsRun_Run5_Nearline_45581_45586.pdf
scp gm2gpvm01:/gm2/app/users/sgrant/analysis/EDM/RadialField/RadialFieldEstimation/Images/EstimateRadialField/AvgCaloYvsRun_Run5_Nearline_45581_45586.png
scp gm2gpvm01:/gm2/app/users/sgrant/analysis/EDM/RadialField/RadialFieldEstimation/Images/EstimateRadialField/AvgCaloYvsRun_Run5_Nearline_46235_46249.C
scp gm2gpvm01:/gm2/app/users/sgrant/analysis/EDM/RadialField/RadialFieldEstimation/Images/EstimateRadialField/AvgCaloYvsRun_Run5_Nearline_46235_46249.pdf
scp gm2gpvm01:/gm2/app/users/sgrant/analysis/EDM/RadialField/RadialFieldEstimation/Images/EstimateRadialField/AvgCaloYvsRun_Run5_Nearline_46235_46249.png
scp gm2gpvm01:/gm2/app/users/sgrant/analysis/EDM/RadialField/RadialFieldEstimation/Images/EstimateRadialField/BrVsRun_Run5_Nearline_45581_45586.C
scp gm2gpvm01:/gm2/app/users/sgrant/analysis/EDM/RadialField/RadialFieldEstimation/Images/EstimateRadialField/BrVsRun_Run5_Nearline_45581_45586.pdf
scp gm2gpvm01:/gm2/app/users/sgrant/analysis/EDM/RadialField/RadialFieldEstimation/Images/EstimateRadialField/BrVsRun_Run5_Nearline_45581_45586.png
scp gm2gpvm01:/gm2/app/users/sgrant/analysis/EDM/RadialField/RadialFieldEstimation/Images/EstimateRadialField/BrVsRun_Run5_Nearline_46235_46249.C
scp gm2gpvm01:/gm2/app/users/sgrant/analysis/EDM/RadialField/RadialFieldEstimation/Images/EstimateRadialField/BrVsRun_Run5_Nearline_46235_46249.pdf
scp gm2gpvm01:/gm2/app/users/sgrant/analysis/EDM/RadialField/RadialFieldEstimation/Images/EstimateRadialField/BrVsRun_Run5_Nearline_46235_46249.png
scp gm2gpvm01:/gm2/app/users/sgrant/analysis/EDM/RadialField/RadialFieldEstimation/Images/EstimateRadialField/deltaY_Run5_Nearline_45581_45586.C
scp gm2gpvm01:/gm2/app/users/sgrant/analysis/EDM/RadialField/RadialFieldEstimation/Images/EstimateRadialField/deltaY_Run5_Nearline_45581_45586.pdf
scp gm2gpvm01:/gm2/app/users/sgrant/analysis/EDM/RadialField/RadialFieldEstimation/Images/EstimateRadialField/deltaY_Run5_Nearline_45581_45586.png
scp gm2gpvm01:/gm2/app/users/sgrant/analysis/EDM/RadialField/RadialFieldEstimation/Images/EstimateRadialField/deltaY_Run5_Nearline_46235_46249.C
scp gm2gpvm01:/gm2/app/users/sgrant/analysis/EDM/RadialField/RadialFieldEstimation/Images/EstimateRadialField/deltaY_Run5_Nearline_46235_46249.pdf
scp gm2gpvm01:/gm2/app/users/sgrant/analysis/EDM/RadialField/RadialFieldEstimation/Images/EstimateRadialField/deltaY_Run5_Nearline_46235_46249.png
scp gm2gpvm01:/gm2/app/users/sgrant/analysis/EDM/RadialField/RadialFieldEstimation/Images/EstimateRadialField/h_deltaY_Run5_Nearline_45581_45586.C
scp gm2gpvm01:/gm2/app/users/sgrant/analysis/EDM/RadialField/RadialFieldEstimation/Images/EstimateRadialField/h_deltaY_Run5_Nearline_45581_45586.pdf
scp gm2gpvm01:/gm2/app/users/sgrant/analysis/EDM/RadialField/RadialFieldEstimation/Images/EstimateRadialField/h_deltaY_Run5_Nearline_45581_45586.png
scp gm2gpvm01:/gm2/app/users/sgrant/analysis/EDM/RadialField/RadialFieldEstimation/Images/EstimateRadialField/h_deltaY_Run5_Nearline_46235_46249.C
scp gm2gpvm01:/gm2/app/users/sgrant/analysis/EDM/RadialField/RadialFieldEstimation/Images/EstimateRadialField/h_deltaY_Run5_Nearline_46235_46249.pdf
scp gm2gpvm01:/gm2/app/users/sgrant/analysis/EDM/RadialField/RadialFieldEstimation/Images/EstimateRadialField/h_deltaY_Run5_Nearline_46235_46249.png
scp gm2gpvm01:/gm2/app/users/sgrant/analysis/EDM/RadialField/RadialFieldEstimation/Images/EstimateRadialField/TotAvgCaloY_Run5_Nearline_45581_45586.C
scp gm2gpvm01:/gm2/app/users/sgrant/analysis/EDM/RadialField/RadialFieldEstimation/Images/EstimateRadialField/TotAvgCaloY_Run5_Nearline_45581_45586.pdf
scp gm2gpvm01:/gm2/app/users/sgrant/analysis/EDM/RadialField/RadialFieldEstimation/Images/EstimateRadialField/TotAvgCaloY_Run5_Nearline_45581_45586.png
scp gm2gpvm01:/gm2/app/users/sgrant/analysis/EDM/RadialField/RadialFieldEstimation/Images/EstimateRadialField/TotAvgCaloY_Run5_Nearline_46235_46249.C
scp gm2gpvm01:/gm2/app/users/sgrant/analysis/EDM/RadialField/RadialFieldEstimation/Images/EstimateRadialField/TotAvgCaloY_Run5_Nearline_46235_46249.pdf
scp gm2gpvm01:/gm2/app/users/sgrant/analysis/EDM/RadialField/RadialFieldEstimation/Images/EstimateRadialField/TotAvgCaloY_Run5_Nearline_46235_46249.png)

for com in $list; do
	foo=`$com .`
	$foo
done