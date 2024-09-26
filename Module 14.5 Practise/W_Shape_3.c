#include <stdio.h>
int main()
{
    int n, s, w;
    scanf("%d", &n);
    s = n - 1, w = 1;
    for (int i = 1; i <= (n * 2); i++)
    {
        for (int j = 1; j <= s; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= w; k++)
        {
            printf("*");
        }
        printf("\n");
        if (i < n)
        {
            s--;
            w += 2;
        }
        else if(i>n)
        {

            s++;
            w -= 2;
        }
    }
    return 0;
}