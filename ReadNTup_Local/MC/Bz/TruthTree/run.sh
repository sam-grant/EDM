dir="../../../../Trees/MC/Bz/TruthTrees/1700ppm"
for tree in `ls $dir`; do
    id=${tree##*truthTrees.}
    id=${id%%.root*}
    ./MainPlotter ${dir}/${tree}
    mv plots.root ../../../../Plots/MC/BzSim/1700ppm/Truth/BzSimTruth_gQ_${id}.root
done

    #wait
    #mv plots ../../../../Plots/MC/BzSim/1700ppm/Truth/
    