#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int ar[n+2];
    //Input Array
    for(int i = 0; i<n; i++){
        scanf("%d",&ar[i]);
    }
     // Insert value  right to Left..
    int ind , value;
    scanf("%d %d",&ind,&value);
   
    for(int i =n; i>=ind+1; i--){
        ar[i]=ar[i-1];
     
    }
    
    ar[ind]=value;
    for(int i = 0; i<=n ; i++){
        printf("%d ",ar[i]);
    }

    return 0;
}