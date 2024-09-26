#include<stdio.h>
int main(){
    int row,col;
    scanf("%d %d",&row,&col);
    int ar[row][col];
    for(int i = 0; i<row; i++){
        for(int j =0 ; j<col ; j++){
            scanf("%d",&ar[i][j]);
        }
    }
   int flag= 1;
    if(row!=col){
        printf("NOT DIAGONAL MATRIX");
    }
    for(int i = 0; i<row; i++){
        for(int j =0 ; j<col ; j++){
            if(i==j){
               if(ar[0][0]!=ar[i][j]){
               
                flag=0;
               }
            //    continue;
            }
            // printf("%d ",ar[i][j]);
           else if(ar[i][j]!=0){
                flag=0;
            }
        }
    
    }
    if(flag==1){
        printf("SCALER_MATRIX");
    }
    else{
        printf("NOT DIAGONAL");
    }



    return 0;
}