#include<stdio.h>
int main(){
    int a ;
    long long int b;
    char f;
    float d;
    double e;
    scanf("%c",f);
    scanf("%a %lld  %f %lf "&a,&b,&d,&e);

    printf("%a\n %b\n %f\n %d\n %e\n",a,b,f,d,e);
    return 0;
}