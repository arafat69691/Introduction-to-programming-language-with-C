#include <stdio.h>
#include<string.h>
int main() {
    char ar[10001];
    scanf("%s", ar);

    int cnt[26] = {0};
    for(int i = 0; i<strlen(ar); i++) {
        cnt[ar[i] - 'a']++;
    }

    for(int i = 0; i < 26; i++) {
        if(cnt[i] > 0) {
            printf("%c - %d\n", i + 'a', cnt[i]);
        }
    }

    return 0;
}
