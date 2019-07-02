read a b c
if [ $a -eq $b -a $b -eq $c -a $a -eq $c ]
  then echo 1
  else if [ $a -eq $b -o $b -eq $c -o $a -eq $c ]
    then echo 2
    else echo 3
  fi
fi