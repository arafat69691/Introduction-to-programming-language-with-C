#include<stdio.h>
int main(){
    int x =  10 ;
    int *p = &x; 
    printf("%d\n",*p);
    *p = 400;
    //Dereference
    printf("%d",x);
    return 0;
}