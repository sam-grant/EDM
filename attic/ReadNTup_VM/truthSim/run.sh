config="dMu" #"Bz"
if [ ! -d ${config} ]; then
    mkdir ${config}
fi

dir="/pnfs/GM2/persistent/EDM/MC/${config}/TruthNTup/" #1700ppm"
for tree in `ls $dir | sort -V`; do
    id=${tree##*truthTrees.}
    id=${id%%.root*}
    ./Plotter.exe ${dir}/${tree} ${config}/plots_${id}.root
done

hadd -f plots_${config}.root ${config}/plots_*.root

rm -f ${config}/plots_*.root
