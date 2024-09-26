#include<stdio.h>
void fun(int *ar){
    for(int i= 0 ; i<=4 ; i++){
        printf("%d ",ar[i]);
    }
}
int main(){
    int ar[5]={10,20,30,40,50};
    fun(ar);
    return 0;
}