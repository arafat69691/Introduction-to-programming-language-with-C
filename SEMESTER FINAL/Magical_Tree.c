#include <stdio.h>
int main()
{
    int testcase;
    scanf("%d", &testcase);

//TRAINGLE
    int upper = 5 + ((testcase + 1) / 2);
   
    int s = upper - 1;
    int k = 1;

    for (int i = 0; i < upper; i++)
    {
        for (int j = 0; j < s; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < k; j++)
        {
            printf("*");
        }
        printf("\n");
        s--;
        k += 2;
    }

//LINE

    for (int i = 0; i < 5; i++)
    {

        for (int p = 0; p < 5; p++)
        {
            printf(" ");
        }
        for (int o = 0; o < testcase; o++)
        {
            printf("*");
        }
        printf("\n");
    }



    return 0;
}