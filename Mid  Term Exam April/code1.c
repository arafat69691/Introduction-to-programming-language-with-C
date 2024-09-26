#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    while(T--) {
        int N, X, i, flag = 0;
        scanf("%d", &N);
        int A[N];
        for(i = 0; i < N; i++) {
            scanf("%d", &A[i]);
        }
        scanf("%d", &X);
        for(i = 0; i < N; i++) {
            if(A[i] == X) {
                flag = 1;
                break;
            }
        }
        if(flag == 1) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}
