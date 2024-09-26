#include<stdio.h>
int n=12;
int main(){
    int n =60;
    int *p = &n;
    int *p1=p;
    *p1=400;

    printf("Adress of N :%p\n",&n);
    printf("N value %d\n",n);
    printf("Adress of Pointer :%d\n",*p);
    printf("%d",*p1);
    return 0;
}