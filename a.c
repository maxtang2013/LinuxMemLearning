#include "stdio.h"

void printSomething()
{
    printf("That's it\n");
}

#define MAX_PERM_SIZE 8
static int a[MAX_PERM_SIZE] = {0};
static int usd[MAX_PERM_SIZE] = {0};
void allPerm(int n, int i)
{
    int j = 0;
    if (i == 0)
    {
        for (j = n; j >= 1; --j)
        {
            printf("%2d", a[j]);
        }
        printf("\n");
        return;
    }

    for (j = 1; j <= n; ++j)
    {
        if (!usd[j])
        {
            usd[j] = 1;
            a[i] = j;
            allPerm(n, i - 1);
            usd[j] = 0;
        }
    }
}

int gcd(int m, int n)
{
    if (n < m)
        return gcd(n, m);

    if (m == 0)
        return n;

    return gcd(n-m, m);    
}


