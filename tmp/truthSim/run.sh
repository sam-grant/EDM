config="dMu" #Bz" #"Bz"
if [ ! -d ${config} ]; then
    mkdir ${config}
fi

# dir="/pnfs/GM2/persistent/EDM/MC/${config}/TruthNTup_allDecays" #1700ppm"
dir="/pnfs/GM2/persistent/EDM/MC/${config}/TruthNTup" #1700ppm"
for tree in `ls $dir | sort -V`; do
    id=${tree##*truthTrees.}
    id=${id%%.root*}
    # ./Plotter_Mu.exe ${dir}/${tree} ${config}/plots_${id}.root
    ./Plotter.exe ${dir}/${tree} ${config}/plots_${id}.root
    # break
done

hadd -f plots_${config}.root ${config}/plots_*.root
rm -f ${config}/plots_*.root
