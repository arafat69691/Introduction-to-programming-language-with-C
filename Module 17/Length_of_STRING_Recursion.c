#include<stdio.h>
int fun(char ar[],int i){
 if (ar[i]=='\0')return 0;
int len=fun(ar,i+1);
 return len+1;
}

int main(){
    char ar[5555]="arafatYEASIN ";
    int k = fun(ar,0);
    printf("%d",k);
    return 0;
}