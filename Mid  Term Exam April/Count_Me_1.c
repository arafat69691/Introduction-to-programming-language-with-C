#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int ar [n];
    int cnt =0, pnt = 0 ;
    for(int i = 0; i<n ; i++){
        scanf("%d",&ar[i]);
    }
    for(int i = 0 ; i<n ; i++){
        if (ar[i]%2 == 0){
            cnt++;
        }
        else if(ar[i]%3==0){
            pnt++;
        }

    }
    printf("%d %d",cnt , pnt);
    return 0;
}