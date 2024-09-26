#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);

    if (a > 0)
    {
        for (int b = 1; b <= a; b++)
        {
            printf("%d ", b);
            
        }
    }
    else if (a <0 )
    {
        for (int b = a; b <= 0; b++)
        {
            printf("%d ", b);
        }
    }
    else{
        printf("0");
            
    }

    return 0;
}