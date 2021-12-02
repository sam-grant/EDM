rm -f ../txt/BeamPosRuns2.txt && touch ../txt/BeamPosRuns2.txt

for i in `cat ../txt/BeamPosFiles2.txt`; do
    i=${i##*run}
    i=${i%%.*}
    
    echo $i >> ../txt/BeamPosRuns2.txt
 done
