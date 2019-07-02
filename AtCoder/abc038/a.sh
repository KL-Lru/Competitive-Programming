read s
if [ ${s:$((${#s} -1)):1} == 'T' ]
  then echo YES
  else echo NO
fi