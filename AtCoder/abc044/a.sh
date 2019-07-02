read n
read k
read x
read y
echo $(( (n<k?n:k)*x+(n<k?0:n-k)*y ))