read r
if [ $r -lt 1200 ]
	then echo "ABC"
    else if [ $r -lt 2800 ]
    	then echo "ARC"
        else echo "AGC"
    fi
fi