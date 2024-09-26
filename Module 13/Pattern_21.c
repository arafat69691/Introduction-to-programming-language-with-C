#include<stdio.h>
int main(){
    int n,s,k=1;
    scanf("%d",&n);
    s=n-1;
    for(int i = 1 ; i<=n ; i++){
        for(int a = 1 ; a<=s ; a++){
            printf(" ");

        }
        for(int j = 1 ; j<=k ;j++){
            printf("*");
        }
        s--;
        k+=2;   
         printf("\n");
    }
    return 0;
}