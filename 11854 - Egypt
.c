#include <stdio.h>

int main(void) {
  while(1) {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    
    if(a==0&&b==0&&c==0) break;
    
    a = a*a;
    b = b*b;
    c = c*c;
    if((a+b==c) || (a+c==b) || (b+c==a))
      printf("right\n");
    else
      printf("wrong\n");
  }
}