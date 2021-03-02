rm -f MissingRuns_Run1.txt && touch MissingRuns_Run1.txt
comm -13 <(sort AllRunNumbers_Run1.txt) <(sort CurrentRunNumbers_Run1.txt) >> MissingRuns_Run1.txt
