#include <stdio.h>
int main()
{
    long long int a;
    scanf("%lld", &a);
   long long int ar[a];
    // array Input
    for (int i = 0; i < a; i++)
    {
        scanf("%lld", &ar[i]);
    }
   long long int sum = 0;
    // Array Print
    for (int i = 0; i < a; i++)
    {

        sum += ar[i];
    }

    if (sum < 0)
    {
        sum = sum * -1;
        printf("%lld", sum);
    }
    else
    {
        printf("%lld", sum);
    }
    return 0;
}