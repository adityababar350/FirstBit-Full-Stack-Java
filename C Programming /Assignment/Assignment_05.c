// 1. Print  a solid  square pattern   Input:  n = 4 
#include <stdio.h>
int main()
{
    int n = 4;
    int i, j;
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= n; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

// 2. Print  a right-angled  triangle  pattern  Input:  n = 5
#include <stdio.h>
int main()
{
    int n = 5;
    int i, j;
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

// 3. Print  an inverted  right-angled  triangle  pattern Input:  n = 5
#include <stdio.h>
int main()
{
    int n = 5;
    int i, j;
    for(i = n; i >= 1; i--)
    {
        for(j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

// 5. pyramid  pattern Input:  n = 5
#include <stdio.h>
int main()
{
    int n = 5;
    int i, j;
    for(i = n; i >= 1; i--)
    {
        for(j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

// 6. Print  a half  pyramid  using  numbers Input:  n = 5 
#include <stdio.h>
int main()
{
    int n = 5;
    int i, j;
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}

// 7. Print  a Floyd’s  triangle  pattern Input:  n = 4 
#include <stdio.h>
int main()
{
    int n = 4;
    int i, j, num = 1;
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }
    return 0;
}

// 8. Print  a pattern  of stars in  diamond  shape Input:  n = 4
#include <stdio.h>
int main()
{
    int n = 4;
    int i, j;
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i = n - 1; i >= 1; i--)
    {
        for(j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

// 9. Print  a hollow  square pattern Input:  n = 4
#include <stdio.h>
int main()
{
    int n = 4;
    int i, j;
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= n; j++)
        {
            if(i == 1 || i == n || j == 1 || j == n)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}

// 10 Print  a hollow  square with  diagonal  pattern Input:  n = 5 
#include <stdio.h>
int main()
{
    int n = 5;
    int i, j;
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= n; j++)
        {
            if(i == 1 || i == n || j == 1 || j == n || i == j)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}