read n
a=0
for i in {0..2}
do
  if [ ! ${n:$i:1} -eq ${n:$((i+1)):1} ]
    then a=1
  fi
done
if [ $a == 0 ]
  then echo SAME
  else echo DIFFERENT
fi