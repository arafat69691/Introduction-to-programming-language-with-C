#include<stdio.h>
int main(){
    int a ;
    scanf("%d",&a);
    int ar[a];
   
    for(int i = 0; i<a ; i++){
        scanf("%d",&ar[i]);
    }
    int b,c;
    scanf ("%d %d",&b,&c);
   for(int i = a-1; i>=0 ; i--){
       ar[b]=c;
       printf("%d ",ar[i]);
   }
    return 0;
}