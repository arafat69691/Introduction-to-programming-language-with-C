#include<stdio.h>
int main(){
    int n ;
     scanf("%d",&n);
   
          int s=n-1,k=1;
     for(int i = 1 ; i<=n ; i++){
        for(int j = 1 ;j<=s ;j++){
            printf(" ");
        }
        for(int j = 1 ; j<=k ; j++){
            printf("*");
        }
        printf("\n");
        s--;
        k +=2;
     }
     //Upper Star Print
     for(int i = 1 ; i<=n ; i++){
          int a=0,p=n+3;
        for(int j = 1 ;j<=a ;j++){
            printf(" ");
        }
        for(int j = 1 ; j<=p ; j++){
            printf("*");
        }
        printf("\n");
        s++;
        k -=2;
     }

    return 0;
}