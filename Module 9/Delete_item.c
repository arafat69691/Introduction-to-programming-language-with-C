#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int ar [n];
    for(int i = 0 ; i <n ; i++){
        scanf("%d",&ar[i]);
    }
    int ind;
    scanf("%d",&ind);
    for(int i =ind ; i<n-1; i++){
        ar[i]=ar[i+1];
   }
   for(int i = 0; i<n ; i++){
    printf("%d",ar[i]);
   }
    return 0;
}