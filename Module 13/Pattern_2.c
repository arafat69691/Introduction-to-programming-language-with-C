
#include<stdio.h>
int main(){
    int n ;
    scanf("%d",&n);
    int s = n-1;
    int k= 1;
    for(int i = 1 ; i<=n; i++ ){
        for (int k = 1 ; k<=s; k++){
            printf(" ");
        }
        for(int a = 1 ; a<=k ; a++){
            printf("*");
        }
       k= k+2;
       s--;
       printf("\n");
    }
    return 0;
}
//    *
//   **
//  ****
// ******
// ********