#include<stdio.h>
int fun(int *ar,int n){
    for(int i=0; i<n ;i++){
        scanf("%d",&ar[i]);
    }
     for(int i=0; i<n ;i++){
        printf("%d",ar[i]);
    }
   

}
int main(){
    int n;
    scanf("%d",&n);
    int ar [n];
    fun(ar,n);
    return 0;
}