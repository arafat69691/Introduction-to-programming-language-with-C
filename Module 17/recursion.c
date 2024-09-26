#include<stdio.h>
void fun(){
    printf("ARAFAT");
    fun();
}

int main(){
    fun();
    return 0;
}