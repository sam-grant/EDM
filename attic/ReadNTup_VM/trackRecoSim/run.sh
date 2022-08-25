# config="dMu"
config="Bz"

file="/pnfs/GM2/persistent/EDM/MC/${config}/TrackerNTup/simTree.${config}*.root"

./Plotter.exe $file plots_${config}.root
