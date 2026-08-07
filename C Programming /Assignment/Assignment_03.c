/*1 Print numbers from 1 to 10 
Output: 1 2 3 4 5 6 7 8 9 10*/
#include <stdio.h>

int main()
{
    int i;

    for(i = 1; i <= 10; i++)
    {
        printf("%d ", i);
    }

    return 0;
}

/* 2 Print table for given number. 
Input: n = 5 
Output: 5 10 15 20 25 30 35 40 45 50 */
#include <stdio.h>

int main()
{
    int n, i;

    printf("Enter number: ");
    scanf("%d", &n);

    for(i = 1; i <= 10; i++)
    {
        printf("%d\n", n * i);
    }

    return 0;
}

/* 3 Sum of numbers in given range. 
Find sum of numbers from start to end. 
Input: start = 1, end = 5 
Output: 15 
Assignment 3 */ 
#include <stdio.h>

int main()
{
    int start, end, i, sum = 0;

    printf("Enter start and end: ");
    scanf("%d%d", &start, &end);

    for(i = start; i <= end; i++)
    {
        sum = sum + i;
    }

    printf("Sum = %d", sum);

    return 0;
}

/* 4 Check the given number is prime or not. 
Input: n = 7 
Output: Prime */
#include <stdio.h>

int main()
{
    int n, i, flag = 1;

    printf("Enter number: ");
    scanf("%d", &n);

    if(n <= 1)
    {
        flag = 0;
    }
    else
    {
        for(i = 2; i < n; i++)
        {
            if(n % i == 0)
            {
                flag = 0;
                break;
            }
        }
    }

    if(flag == 1)
        printf("Prime");
    else
        printf("Not Prime");

    return 0;
}

/* 5 Check the given number is Armstrong number or not.. 
Input: n = 153 
Output: Armstrong*/ 
#include <stdio.h>

int main()
{
    int n, temp, rem, sum = 0;

    printf("Enter number: ");
    scanf("%d", &n);

    temp = n;

    while(temp > 0)
    {
        rem = temp % 10;
        sum = sum + rem * rem * rem;
        temp = temp / 10;
    }

    if(sum == n)
        printf("Armstrong");
    else
        printf("Not Armstrong");

    return 0;
}

/* 6 Check the given number is Perfect number or not. 
Input: n = 28 
Output: Perfect*/
#include <stdio.h>

int main()
{
    int n, i, sum = 0;

    printf("Enter number: ");
    scanf("%d", &n);

    for(i = 1; i < n; i++)
    {
        if(n % i == 0)
            sum = sum + i;
    }

    if(sum == n)
        printf("Perfect");
    else
        printf("Not Perfect");

    return 0;
}

/* 7 Find factorial of given number. 
Input: n = 5 
Output: 120 */
#include <stdio.h>

int main()
{
    int n, i;
    long long fact = 1;

    printf("Enter number: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    printf("Factorial = %lld", fact);

    return 0;
}

/* 8 Check the given number is Strong number or not. 
Input: n = 145 
Output: Strong */
#include <stdio.h>

int main()
{
    int n, temp, rem, sum = 0, i, fact;

    printf("Enter number: ");
    scanf("%d", &n);

    temp = n;

    while(temp > 0)
    {
        rem = temp % 10;
        fact = 1;

        for(i = 1; i <= rem; i++)
        {
            fact = fact * i;
        }

        sum = sum + fact;
        temp = temp / 10;
    }

    if(sum == n)
        printf("Strong");
    else
        printf("Not Strong");

    return 0;
}

/* 9 Check the given number is Palindrome number or not. 
Input: n = 121 
Output: Palindrome */ 
#include <stdio.h>

int main()
{
    int n, temp, rem, rev = 0;

    printf("Enter number: ");
    scanf("%d", &n);

    temp = n;

    while(temp > 0)
    {
        rem = temp % 10;
        rev = rev * 10 + rem;
        temp = temp / 10;
    }

    if(rev == n)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}

/* 10 Find Sum of first and last digit of given number. 
Input: n = 12345 
Output: 6 (1 + 5)*/
#include <stdio.h>

int main()
{
    int n, first, last;

    printf("Enter number: ");
    scanf("%d", &n);

    last = n % 10;

    while(n >= 10)
    {
        n = n / 10;
    }

    first = n;

    printf("Sum = %d", first + last);

    return 0;
}