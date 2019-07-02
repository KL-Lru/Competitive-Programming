read a b c
if [ $((a+b)) -eq $c -o $((b+c)) -eq $a -o $((c+a)) -eq $b ]
  then echo Yes
  else echo No
fi
