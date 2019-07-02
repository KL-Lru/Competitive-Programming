#include<bits/stdc++.h>
using namespace std;
#define p 48

int main(){
  char a,b,c,d;
  scanf("%c%c%c%c",&a,&b,&c,&d);
  a-=p;b-=p;c-=p;d-=p;
  if(a+b+c+d==7) printf("%c+%c+%c+%c=7\n",a+p,b+p,c+p,d+p);
  else if(a+b+c-d==7) printf("%c+%c+%c-%c=7\n",a+p,b+p,c+p,d+p);
  else if(a+b-c+d==7) printf("%c+%c-%c+%c=7\n",a+p,b+p,c+p,d+p);
  else if(a+b-c-d==7) printf("%c+%c-%c-%c=7\n",a+p,b+p,c+p,d+p);
  else if(a-b+c+d==7) printf("%c-%c+%c+%c=7\n",a+p,b+p,c+p,d+p);
  else if(a-b+c-d==7) printf("%c-%c+%c-%c=7\n",a+p,b+p,c+p,d+p);
  else if(a-b-c+d==7) printf("%c-%c-%c+%c=7\n",a+p,b+p,c+p,d+p);
  else if(a-b-c-d==7) printf("%c-%c-%c-%c=7\n",a+p,b+p,c+p,d+p);
  return 0;
}