for i in 1 2; do
    comm -23 <(sort ../CaloRunNumbers/run${i}.txt) <(sort ../CurrentRunNumbers/run${i}.txt) | tee run${i}.txt
done
