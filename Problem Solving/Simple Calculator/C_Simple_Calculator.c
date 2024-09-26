#include<stdio.h>
int main(){
    long long x1,y1;
    long long  m1,a1,b1 ;
    scanf("%lld %lld",&x1,&y1);
    m1 = x1*y1;
    a1 = x1+y1;
    b1 = x1-y1;
    printf("%lld + %lld = %lld\n", x1,y1,a1);
    printf("%lld * %lld = %lld\n", x1,y1,m1);
    printf("%lld - %lld = %lld\n",x1,y1,b1);
    return 0;
}