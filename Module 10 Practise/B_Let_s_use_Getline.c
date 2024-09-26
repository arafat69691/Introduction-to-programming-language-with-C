#include<stdio.h>
#include<string.h>
int main(){
    char s [100001];
    
    fgets(s,100001, stdin);
    
    // printf("%s %d",s,a);
    for(int i = 0 ; s[i]!='\\' ; i++){
        printf("%c",s[i]);
    }

    return 0;
}
