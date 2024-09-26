#include<stdio.h>
#include<string.h>
int main(){
    char a [10001];
    scanf("%s",a);
      char b [10001];
    scanf("%s",b);
    int a1 =strlen(a);
    int b1=strlen(b);
    printf("%d %d\n",a1,b1);
    printf("%s %s",a,b);

    return 0;
}