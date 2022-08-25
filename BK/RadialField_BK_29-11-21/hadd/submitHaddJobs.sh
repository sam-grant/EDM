for i in {1..6}; do

	echo $i

#done

done | xargs -i --max-procs=2 bash -c ". haddFileList.sh {}"