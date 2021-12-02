declare -a i_=(-255 -305 -355 -405 -455 -505 -555 -605 -655 -705)
for i in ${i_[@]}; do
    echo "Running ${i} ns"
    cd tmp${i}
    pwd
    gm2 -c ../../../fcl/RunBeamGunTuningPlots.fcl -s gm2ringsim_particle_gun.root
    wait
    cd ../
done
