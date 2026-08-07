//1. Print armstrong numbers in the given range 1 to n. 
#include <stdio.h>

int main()
{
    int n, i, temp, rem, sum;

    printf("Enter n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        temp = i;
        sum = 0;

        while(temp > 0)
        {
            rem = temp % 10;
            sum = sum + rem * rem * rem;
            temp = temp / 10;
        }

        if(sum == i)
        {
            printf("%d ", i);
        }
    }

    return 0;
}

//2. Print prime numbers in the given range 1 to n. 
#include <stdio.h>

int main()
{
    int n, i, j, flag;

    printf("Enter n: ");
    scanf("%d", &n);

    for(i = 2; i <= n; i++)
    {
        flag = 1;

        for(j = 2; j < i; j++)
        {
            if(i % j == 0)
            {
                flag = 0;
                break;
            }
        }

        if(flag == 1)
        {
            printf("%d ", i);
        }
    }

    return 0;
}

// 3. Print perfect numbers in the given range 1 to n.
#include <stdio.h>

int main()
{
    int n, i, j, sum;

    printf("Enter n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        sum = 0;

        for(j = 1; j < i; j++)
        {
            if(i % j == 0)
            {
                sum = sum + j;
            }
        }

        if(sum == i)
        {
            printf("%d ", i);
        }
    }

    return 0;
}

//4. Print strong numbers in the given range 1 to n. 
#include <stdio.h>

int main()
{
    int n, i, temp, rem, sum, fact, j;

    printf("Enter n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        temp = i;
        sum = 0;

        while(temp > 0)
        {
            rem = temp % 10;
            fact = 1;

            for(j = 1; j <= rem; j++)
            {
                fact = fact * j;
            }

            sum = sum + fact;
            temp = temp / 10;
        }

        if(sum == i)
        {
            printf("%d ", i);
        }
    }

    return 0;
}

/*5. Write a menu driven program to take a number for user and perform operations as follows. 
   Press 1.To check number is even or odd. 
         2.To check number is prime or not. 
         3.To check number is pallindrome or not. 
         4.To check number is positive, negative or zero. 
         5.To reverse a number. 
         6.To find sum of digits. */
#include <stdio.h>

int main()
{
    int choice, n, temp, rem, rev = 0, sum = 0, i, flag = 1;

    printf("Enter Number: ");
    scanf("%d", &n);

    printf("\n1. Even or Odd");
    printf("\n2. Prime");
    printf("\n3. Palindrome");
    printf("\n4. Positive, Negative or Zero");
    printf("\n5. Reverse Number");
    printf("\n6. Sum of Digits");

    printf("\nEnter Choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            if(n % 2 == 0)
                printf("Even");
            else
                printf("Odd");
            break;

        case 2:
            if(n <= 1)
                flag = 0;

            for(i = 2; i < n; i++)
            {
                if(n % i == 0)
                {
                    flag = 0;
                    break;
                }
            }

            if(flag == 1)
                printf("Prime");
            else
                printf("Not Prime");
            break;

        case 3:
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
            break;

        case 4:
            if(n > 0)
                printf("Positive");
            else if(n < 0)
                printf("Negative");
            else
                printf("Zero");
            break;

        case 5:
            temp = n;
            rev = 0;

            while(temp > 0)
            {
                rem = temp % 10;
                rev = rev * 10 + rem;
                temp = temp / 10;
            }

            printf("Reverse = %d", rev);
            break;

        case 6:
            temp = n;
            sum = 0;

            while(temp > 0)
            {
                rem = temp % 10;
                sum = sum + rem;
                temp = temp / 10;
            }

            printf("Sum = %d", sum);
            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}
         