echo "Running bQ"
./bQ 
wait
mv plots.root ../../../Plots/MC/BzSim/1700ppm/BzSim_bQ_2.root
wait
echo "Running eQ"
./eQ 
wait
mv plots.root ../../../Plots/MC/BzSim/1700ppm/BzSim_eQ_2.root
wait
echo "Running vertCorr_eQ_eQ"
./vertCorr_eQ_eQ 
wait
mv plots.root ../../../Plots/MC/BzSim/1700ppm/BzSim_vertCorr_eQ_eQ_2.root
wait
echo "Running vertCorr_eQ_bQ"
./vertCorr_eQ_bQ 
wait
mv plots.root ../../../Plots/MC/BzSim/1700ppm/BzSim_vertCorr_eQ_bQ_2.root