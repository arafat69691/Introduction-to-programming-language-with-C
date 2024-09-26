/*
1 0 0
0 3 0
0 0 4
PRIMARY DIAGONAL
*/
// #include<stdio.h>

// int main(){
//     int row,col;
//     scanf("%d %d",&row,&col);
//     int ar[row][col];
//     for(int i = 0; i<row; i++){
//         for(int j =0 ; j<col ; j++){
//             scanf("%d",&ar[i][j]);
//         }
//     }
//    int flag= 1;
//     if(row!=col){
//         printf("NOT DIAGONAL MATRIX");
//     }
//     for(int i = 0; i<row; i++){
//         for(int j =0 ; j<col ; j++){
//             if(i==j){
//                 continue;
//             }
//             // printf("%d ",ar[i][j]);
//             if(ar[i][j]!=0){
//                 flag=0;
//             }
//         }
    
//     }
//     if(flag==1){
//         printf("PRIMARY MATRIX");
//     }
//     else{
//         printf("NOT DIAGONAL");
//     }



//     return 0;
// }


/*
0 0 8
0 1 0
6 0 0
SECONDARY DIAGONAL*/

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
            if(i+j==col-1){
                continue;
            }
            // printf("%d ",ar[i][j]);
            if(ar[i][j]!=0){
                flag=0;
            }
        }
    
    }
    if(flag==1){
        printf("SECONDARY MATRIX");
    }
    else{
        printf("NOT DIAGONAL");
    }



    return 0;
}