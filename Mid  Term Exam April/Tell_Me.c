#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    for (int j = 0 ; j<a ; j++) {
        int i;
        int c;
        int b;
        int cnt = 0;
        scanf("%d", &b);
        int r[b];
        for(i = 0; i < b; i++) {
            scanf("%d", &r[i]);
        }
        scanf("%d", &c);
        for(i = 0; i < b; i++) {
            if(r[i] == c) {
                cnt ++;
            
            }
        }
        if(cnt == 1) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}
