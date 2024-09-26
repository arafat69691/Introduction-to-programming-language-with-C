#include <stdio.h>
#include <string.h>

int is_palindrome(char *ar)
{
    int len = strlen(ar);
    for (int i = 0; i < len/2 ; i++)
    {
        if (ar[i] != ar[len - i - 1])
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    char ar[100001];

    scanf("%s", ar);

    if (is_palindrome(ar))
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not Palindrome\n");
    }

    return 0;
}
