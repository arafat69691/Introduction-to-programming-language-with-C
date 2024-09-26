
#include <stdio.h>

int main()
{
    int test;
    scanf("%d", &test);
    int no = ((test + 9) / 2) + 1;
    int l = 1;
    int sp = no - 1;
    for (int i = 0; i < no + 5; i++)
    {
        for (int j = 0; j < sp; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < l; j++)
        {
            printf("*");
        }
        if (i < no - 1)
        {

            sp--;
            l += 2;

        }
        else if (i >= test)
        {

            sp = 5;
            l = test;

        }

        printf("\n");
    }


    return 0;
}