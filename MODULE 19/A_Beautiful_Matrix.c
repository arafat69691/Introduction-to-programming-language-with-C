#include<stdio.h>
int main(){
    int ar[5][5];
    for(int i = 0 ; i<5; i++){
        for(int j =0 ; j<5 ;j++){
            scanf("%d",&ar[i][j]);
        }
    }
    int k;
    for(int i = 0 ; i<5; i++){
        for(int j =0 ; j<5 ;j++){
            if(ar[i][j]==1){
                k =abs(i-2) + abs(j-2);
            }
        }
      
    }
    printf("%d",k);
    return 0;
}