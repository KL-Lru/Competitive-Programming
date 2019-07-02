read w h
if [ $((w%16)) == 0 -a $((h%9)) == 0 ]
  then echo "16:9"
  else echo "4:3"
fi