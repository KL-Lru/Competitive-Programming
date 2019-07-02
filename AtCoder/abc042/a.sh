read a b c
g=0
n=0
if [ $a -eq 5 ]
  then g=$((g+1))
  else if [ $a -eq 7 ]
    then n=$((n+1))
  fi
fi
if [ $b -eq 5 ]
  then g=$((g+1))
  else if [ $b -eq 7 ]
    then n=$((n+1))
  fi
fi
if [ $c -eq 5 ]
  then g=$((g+1))
  else if [ $c -eq 7 ]
    then n=$((n+1))
  fi
fi
if [ $g -eq 2 -a $n -eq 1 ]
  then echo YES
  else echo NO
fi