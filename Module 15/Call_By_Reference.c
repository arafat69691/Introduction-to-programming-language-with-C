#include<stdio.h>
void func(int *p){
*p=2000;
   printf("FUnc Adress of p :%d\n",*p);
}
int main(){
    int x = 10 ;
    func(&x);
    printf("Main Adress of x :%d\n",x);
    return 0;
}