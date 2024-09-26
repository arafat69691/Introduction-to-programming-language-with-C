#include<stdio.h>
#include<string.h>
int main(){
    int a,len;
    scanf("%d",&a);
    char n [200];
    for(int i = 0 ; i<a ; i++){
        scanf("%s",n);
        len =strlen(n);
    printf("output :%d\n",len);
    if(len>10){
        printf("%s",n[0]);
        printf("%d",len);

        printf("%d",n[len]-1);
    }

    }
    return 0;
}