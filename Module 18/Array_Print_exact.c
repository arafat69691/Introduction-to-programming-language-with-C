#include<stdio.h>
int main(){
    int row,col;
    scanf("%d",&row);
    scanf("%d",&col);
    int ar[row][col];
    for(int i = 0 ; i<row; i++){
        for(int j =0; j<col; j++){
            scanf("%d",&ar[i][j]);
        }
    }
    int e =col-1;
   
   for(int i = 0 ; i<row;i++){
    printf("ar[%d] ",ar[i][e]);
   }
    return 0;
}