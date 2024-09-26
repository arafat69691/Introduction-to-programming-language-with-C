#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    for(int a = 0 ; a<t a++) {
        char S[10001];
        scanf("%s", S);

        int upper = 0, lower = 0, digit = 0;
        for(int i = 0; S[i] != '\0'; i++) {
            if(S[i] >= 'A' && S[i] <= 'Z'){
                upper++;
            }
                
            else if(S[i] >= 'a' && S[i] <= 'z'){
                 lower++;
            }
            else if(S[i] >= '0' && S[i] <= '9') {
                digit++;
            }
        }

        printf("%d %d %d\n", upper, lower, digit);
    }
    return 0;
}
