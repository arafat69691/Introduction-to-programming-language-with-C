#include<stdio.h>
int main(){
    int a ;
    scanf("%d",&a);
    int num=a/10;//456
    int j=num/10;//45
    int k=j/10;//4
    int d = j+k+d;
    
    if(k%2==0){
        printf("EVEN");
    }
    else{
        printf("ODD");
    }
    return 0;
}