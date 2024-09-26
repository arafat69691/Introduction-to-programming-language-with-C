#include<stdio.h>
int main(){
    int n ;
    scanf("%d",&n);
    int ar[n];
    for(int i = 0; i<n ; i++){
        scanf("%d",&ar[i]);
    }
    int a ;
    int flag = 1 ;
    scanf("%d",&a);
    for(int i = 0 ; i<n ; i++){
        if(ar[i]==a){
            printf("%d",i);
            flag=0;
            break;
        }
       
    }
    if(flag==1){
        printf("-1");
    }
    return 0;
}