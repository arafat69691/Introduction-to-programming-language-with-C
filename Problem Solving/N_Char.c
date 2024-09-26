#include<stdio.h>
int main(){
    char a;
    scanf("%c",&a);
    if(a>='a' && a<='z'){
        int sum= a-32;
        printf("%c",sum);
    }
    else{
        int n= a+32;
        printf("%c",n);
    }
    return 0;
}