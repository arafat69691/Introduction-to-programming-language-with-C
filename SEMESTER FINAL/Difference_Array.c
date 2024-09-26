#include <stdio.h>
#include <stdlib.h>
int main()
{
    int test;
    scanf("%d", &test);
    for (int l = 0; l < test; l++)
    {

        int n;
        scanf("%d", &n);
        int ar[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &ar[i]);
        }
        int br[n];
        for (int i = 0; i < n; i++)
        {
            br[i] = ar[i];
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (br[i] > br[j])
                {
                    int temp = br[i];
                    br[i] = br[j];
                    br[j] = temp;
                }
            }
        }
        int cr[n];
        for (int i = 0; i < n; i++)
        {

            cr[i] = abs(ar[i] - br[i]);
           
            printf("%d ", cr[i]);
        }
        printf("\n");

       
    }
    return 0;
}