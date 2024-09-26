#include<stdio.h>
#include<string.h>
int main(){
    char a[10],b[10];
    scanf("%s %s",a,b);
    printf("%s %s",a,b);
    int c= strlen(b);
    for(int i = 0; i<=strlen(b); i++){
        a[i]=b[i];
    }
    printf("\n%s %d",a,c);
    return 0;
}