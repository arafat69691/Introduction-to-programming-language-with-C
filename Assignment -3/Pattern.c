#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int sp = n - 1, has = 1, a = 2 * n - 1;
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= sp; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= has; k++)
        {
            if (i % 2 == 1)
            {
                printf("#");
            }
            else
            {
                printf("-");
            }
        }
        printf("\n");
        if (i < n)
        {
            sp--;
            has += 2;
        }
        else
        {
            sp++;
            has -= 2;
        }
    }
    return 0;
}