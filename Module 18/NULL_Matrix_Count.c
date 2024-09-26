#include<stdio.h>
int main(){
    int n ,a;
    scanf("%d %d",&n,&a);
    int ar[n][a];
    for(int i = 0 ; i<n ; i++){
        for(int j = 0 ; j<a ; j++){
            scanf("%d",&ar[i][j]);
        }
    }
    int cnt=0;
    for(int i = 0 ; i<n ; i++){
        for(int j = 0 ; j<a ; j++){
           if(ar[i][j]>=0){
             cnt++;
           }
        }
    }
    printf("%d",cnt);

    return 0;
}