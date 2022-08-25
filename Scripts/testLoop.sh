# configs_=(MainNtuple AllDecaysNtuple Plus1mmNtuple Minus1mmNtuple Plus0.1degNtuple Minus0.1deg)
# fclFiles_=(RunTrackingSimAndTrees_EDM.fcl RunPhaseAnalyzer.fcl RunTrackingSimExtAlignOffset_plus1mm.fcl RunTrackingSimExtAlignOffset_minus1mm.fcl RunTrackingSimExtAlignOffset_plus0.1deg.fcl RunTrackingSimExtAlignOffset_minus0.1deg.fcl)

# for i in ${!configs_[*]}; do
#     echo "${configs_[$i]}  with goes ${fclFiles_[$i]}"
# done

# names_=(dvasilkova ghesketh jprice lbailey) 
# configs_=(MainNtuple AllDecaysNtuple Plus1mmNtuple Minus1mmNtuple Plus0.1degNtuple Minus0.1deg)
# dir=/pnfs/GM2/persistent/EDM/MC/dMu/Trees/Summer2022Campaign
# for i in ${!configs_[*]}; do
# 	mkdir ${dir}/${names_[$i]}
# 	for j in ${!names_[*]}; do
# 		mkdir ${dir}/${names_[$i]}/${configs_[$i]}
# 	done
# done

dir=/pnfs/GM2/persistent/EDM/MC/dMu/Trees/Summer2022Campaign
names_=(dvasilkova ghesketh jprice lbailey)
for i in ${!names_[*]}; do
    echo "rm -rf ${dir}/${names_[$i]}"
done
configs_=(MainNtuple AllDecaysNtuple Plus1mmNtuple Minus1mmNtuple Plus0.1degNtuple Minus0.1deg)
for i in ${!names_[*]}; do
    echo "mkdir ${dir}/${names_[$i]}"
    for j in ${!configs_[*]}; do
        echo "mkdir ${dir}/${names_[$i]}/${configs_[$i]}"
    done
done