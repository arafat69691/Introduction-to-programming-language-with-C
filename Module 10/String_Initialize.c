#include<stdio.h>
int main(){
    char a []="ARAFAT\0";
    int z=sizeof(a)/sizeof(char);
    printf("%d\n",z);
    printf("%s",a);
    return 0;
}