#include<stdio.h>
int main(){
    int n ,k;
    scanf("%d",&n);
    k=n;
    for(int i = 1 ; i<=n ; i++){
        for(int j = 1 ; i<=k ; k++){
            printf("*");
        }
        printf("\n");
        k--;
    }
    return 0;
}