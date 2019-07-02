read n
if [ $(($n%2)) == 1 ]
  then echo $(($n*2))
  else echo $n
fi