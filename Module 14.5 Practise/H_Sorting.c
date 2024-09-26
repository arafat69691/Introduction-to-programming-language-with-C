#include<stdio.h>
int main(){
    int n ;
    scanf("%d",&n);
    int ar[n];
    for(int i = 0 ; i<n ; i++){
      scanf("%d",&ar[i]);
    }
    for(int i = 0 ; i<n-1 ; i++){
        for(int k =i +1 ; k<n ; k++){
           if(ar[i]>ar[k]){
             int temp = ar[i];
             ar[i]=ar[k];
             ar[k]=temp;
           }

        }

    }
    for(int i = 0 ; i<n ; i++){
        printf("%d ",ar[i]);
    }
    return 0;
}