read a
read b
read n
while [ ! $((n%a)) -eq 0 -o ! $((n%b)) -eq 0 ]
do 
  n=$((n+1))
done
echo $n
