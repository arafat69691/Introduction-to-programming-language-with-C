#include<stdio.h>
void fun(int i){
    // if(i==6)return;
    printf("i er value :%d\n",i);
    fun(i+1);
    if(i%5==0){
        printf("5 module kore :%d",i);
    }
}
int main(){
    fun(1);
    return 0;
}
