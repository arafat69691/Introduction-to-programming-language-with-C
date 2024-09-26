#include<stdio.h>
int main(){
       int row, col;
    scanf("%d %d", &row,&col);
    int ar[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &ar[i][j]);
        }
    }
    int flag = 1,flag2=1;
    for(int i = 0 ; i<row ; i++){
        for (int j = 0 ;j<col ; j++){
            if(i==j || i+j==row-1){
                if(ar[i][j]!=1){
                    flag=0;
                }
            }
             else {
                if(ar[i][j]!=0){
                flag=0;
             }
             

        }
    }
    if(flag==1){
        printf("YES");

    }
    else{
        printf("NO");
    }
    return 0;
}