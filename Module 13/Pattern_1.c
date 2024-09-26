#include<stdio.h>
int main(){
    int n ,s=5;
    scanf("%d",&n);
    long long int w;
    for(int i = 0 ; i<n ; i++){
        for (int k = s ; k>=1; k--){
            printf("*");
        }
        s--;
        printf("\n");
    }
    return 0;
}
// *****
// ****
// ***
// **
// *