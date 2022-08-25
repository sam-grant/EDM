outfile=$1
shift
files=$*

maxFiles=20
nFiles=$(echo $files | tr ' ' '\n' | wc -l)
subFiles=""

if [[ $nFiles -le $maxFiles ]]
then
    #echo "command is ..."
    hadd -f $outfile $files
else
    nSteps=$(python -c "from math import ceil; print int(ceil(float($nFiles)/$maxFiles))")
    echo "Merging $nFiles in $nSteps steps ..."

    for (( i=1; i<=$nSteps; i++)) 
    do
      lines=$(($i*$maxFiles))
      linesfromend=$maxFiles

      if [[ $lines -ge $nFiles ]]
	  then 
	  linesfromend=$(($maxFiles + $nFiles - $lines)) 
      fi
      
      partFiles=$(echo $files | tr ' ' '\n' | head -n $lines | tail -n $linesfromend)
      #partFiles=$(echo $files | tr ' ' '\n' | head -n $lines | tail -n $maxFiles)
      partOut=$outfile.part.$i
      
      #partFiles is a list of intermediate root files
      #echo "partFiles" $partFiles
      
      #partOut is the name of the intermediate hist
      #echo "partOut" $partOut

      hadd -f $partOut $(echo $partFiles | tr '\n' ' ')
      subFiles=$subFiles" "$partOut
      echo " "
    done

    numInterFiles=$(echo $subFiles | wc -w)
    echo "numInterFiles" $numInterFiles
    if [[ $numInterFiles -ge $maxFiles ]]
	then
	echo "one more merging step required..."
	nInterSteps=$(python -c "from math import ceil; print int(ceil(float($numInterFiles)/$maxFiles))")
	for (( j=1; j<=$nInterSteps; j++)) 
	  do
	  interLines=$(($j*$maxFiles))
	  interLinesfromend=$maxFiles
	  
	  if [[ $interLines -ge $numInterFiles ]]
	      then 
	      interLinesfromend=$(($maxFiles + $numInterFiles - $interLines)) 
	  fi
      
	  interPartFiles=$(echo $subFiles | tr ' ' '\n' | head -n $interLines | tail -n $interLinesfromend)
	  interPartOut=$outfile.subpart.$j
	  
	  hadd -f $interPartOut $(echo $interPartFiles | tr '\n' ' ')
	  interSubFiles=$interSubFiles" "$interPartOut

	  echo " "

	done

	echo "Mering intermediate files after second loop"
	hadd -f $outfile $interSubFiles
    else
	echo "Mering intermediate files"
	hadd -f $outfile $subFiles
      
    fi

fi

# Remove the intermediate files
rm -f *part*
