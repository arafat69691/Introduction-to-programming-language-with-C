#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for (int i =1 ; i <= 4; i++)
    {
       int c=a/10 ;
    //    int d=c%10;
    int d =c;
    printf("%d\n",d);
    }
    

    return 0;
}