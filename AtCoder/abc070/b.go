package main
import "fmt"

func Max(x,y int) int{
  if x >= y{
    return x
  }
  return y
}

func Min(x,y int) int{
  if x <= y{
    return x
  }
  return y
}

func main(){
  var a,b,c,d int
  fmt.Scan(&a, &b, &c, &d);
  fmt.Println(Max(Min(b,d) - Max(a,c), 0))
}