#include<stdio.h> //PASSED
int main(){
    int z;
    scanf("%d",&z);
    int x=z%365;//400%365=35
    int p = z/365;//400/365=1
    int a=x/30;//35/30=1
    int n=x%30;
    printf("%d years\n%d months\n%d days",p,a,n);
    return 0;
}
