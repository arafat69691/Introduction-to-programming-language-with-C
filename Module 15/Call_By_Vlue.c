#include<stdio.h>
void fun(int x ){
    x=20;
    printf("Fun x Value :%d\n",x);
    printf("Fun X adress: %p\n",&x);
}
int main(){
    int x = 10;
    fun(x);
    printf("Main X adress: %p\n",&x);
    printf("Main X value: %d\n",x);

    return 0;
}