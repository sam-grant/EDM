declare -a i_=(-255 -305 -355 -405 -455 -505 -555 -605 -655 -705)
for i in ${i_[@]}; do
	scp gm2gpvm01:/gm2/app/users/sgrant/analysis/EDM/RadialField/BeamGunSim/KickerTimingScan/tmp${i}/beamGunTuningPlots.root beamGunTuningPlots_${i}.root
done