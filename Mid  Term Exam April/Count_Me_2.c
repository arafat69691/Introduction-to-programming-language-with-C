#include<stdio.h>
#include<string.h>
int main(){
    char x [1000001];
    scanf("%s",&x);
    // printf("%s",x);
    int cnt=0;
    for(int i = 0 ; i<=strlen(x)-1 ; i++){
        if(x[i] != 'a' && x[i] != 'e' &&x[i] != 'i' &&x[i] != 'o' &&x[i] != 'u' ){
           cnt++;
        }
    }
    printf("%d",cnt);
    return 0;
}