#include<stdio.h>
int main(){
    float n,a;
    scanf("%f %f",&n,&a);//20 80
   float x=a/(1-(n/100));
   printf("%.2f",x);
    return 0;
}