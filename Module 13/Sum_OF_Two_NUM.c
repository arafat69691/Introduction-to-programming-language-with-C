#include<stdio.h>
int main(){
    int n ,q;
    int flag=0;
    scanf("%d",&n);
    int ar[n];
    for(int i= 0 ; i<n ; i++){
        scanf("%d",&ar[i]);
    }
    //2 ta value summation
    int a ;
    scanf("%d",&a);
    for(int i =0 ; i<n-1 ; i++){
        for(int j = i+1 ; j<n ; j++){
            int x = ar[i]+ar[j];
            if(x==a){
                //flag++;
             flag=1;
             q=j;
            }
        }
    }
    if(flag==1){
        printf("YES %d",q);
    }
    else{
        printf("NO");
    }
    return 0;
}