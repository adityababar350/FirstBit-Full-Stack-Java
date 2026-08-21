// Q1. Check whether a number is a Strong Number
#include <stdio.h>
int main()
{
    int no = 145; 
    int sum = 0;
    int temp = no; // Store original number

    while (no > 0)
    {
        int rem = no % 10; // Extract last digit
        int fact = 1;     // Initialize factorial


        while (rem > 1)
        {
            fact = fact * rem; // Calculate factorial of digit
            rem--;    // Decrease digit
        }

        sum = sum + fact; // Add factorial to sum
        no = no / 10;  // Remove last digit
    }

     // Compare sum of factorials with original number
    if (sum == temp)
    {
        printf("%d is a Strong Number", temp);
    }
    else
    {
        printf("%d is not a Strong Number", temp);
    }
    return 0;
}

// Q2. Check whether user-entered number is a Strong Number
#include <stdio.h>
int main()
{
    int no, temp, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &no);

    temp = no;

    while (no > 0)
    {
        int rem = no % 10;
        int fact = 1;

        while (rem > 1)
        {
            fact = fact * rem;
            rem--;
        }

        sum = sum + fact;
        no = no / 10;
    }
    if (sum == temp)
    {
        printf("%d is a Strong Number", temp);
    }
    else
    {
        printf("%d is not a Strong Number", temp);
    }
    return 0;
}


// Q3. Check whether a number is a Perfect Number
#include<stdio.h>
int main()
{
    int no = 28;
    int i = 1, sum = 0;

    while (i<no)
    {   
        if(no % i == 0)   // Check whether i is a divisor of the number
        {
            sum = sum + i;  // Add divisor to sum
        }
        i++;  // Move to next number
    }
    // Compare sum of proper divisors with original number
    if (sum == no)
    {
        printf("%d is a Perfect Number", no);
    }
    else
    {
        printf("%d is not a Perfect Number", no);
    }
    return 0;
}

// Q4. Check whether user-entered number is a Perfect Number
#include <stdio.h>
int main()
{
    int no, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &no);

    for (int i = 1; i < no; i++) // Check all numbers from 1 to no-1
    {
        if (no % i == 0)  // Check whether i is a divisor
        {
            sum = sum + i;  // Add divisor to sum
        }
    }
    // Check whether sum of divisors equals number
    if (sum == no)
    {
        printf("%d is a Perfect Number", no);
    }
    else
    {
        printf("%d is not a Perfect Number", no);
    }
    return 0;
}

// Q5. Attempt to check whether a number is Prime Number
#include<stdio.h>
int main()
{
    int no = 13;
    int i = 2, states = 0;
    // Check divisibility from 2 to no-1
    while (i<no)
    {
        if(no % i == 0) // If number is divisible by i, it has a factor
        {
            states = 1;  // Mark that divisor is found
        }
        i++;
    }
    if (states == no) // Check the state
    {
        printf("%d is a Perfect Number", no);
    }
    else
    {
        printf("%d is not a Perfect Number", no);
    }
    return 0;
}


// Q6. Check whether a number is a Prime Number
#include<stdio.h>
int main()
{
    int no = 13;
    int i = 2, states = 0;
    
    while (i <= no / 2) // Check divisors from 2 to no/2
    {
        if(no % i == 0)  // If no is divisible by i, it is not prime
        {
            states = 1;  // Divisor found
        }
        i++;
    }
    if (states == 0) // states = 0 means no divisor was found
    {
        printf("%d is a Prime Number", no);
    }
    else
    {
        printf("%d is not a Prime Number", no);
    }
    return 0;
}



//Convert all while loop code for loop (HW) 
 

// Strong Number
#include <stdio.h>
int main()
{
    int no = 145;
    int sum = 0;
    int temp = no;

    for (; no > 0; no = no / 10)
    {
        int rem = no % 10;
        int fact = 1;

        for (; rem > 1; rem--)
        {
            fact = fact * rem;
        }
        sum = sum + fact;
    }
    if (sum == temp)
    {
        printf("%d is a Strong Number", temp);
    }
    else
    {
        printf("%d is not a Strong Number", temp);
    }
    return 0;
}


// User-entered Strong Number
#include <stdio.h>
int main()
{
    int no, temp, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &no);

    temp = no;

    for (; no > 0; no = no / 10)
    {
        int rem = no % 10;
        int fact = 1;

        for (; rem > 1; rem--)
        {
            fact = fact * rem;
        }
        sum = sum + fact;
    }
    if (sum == temp)
    {
        printf("%d is a Strong Number", temp);
    }
    else
    {
        printf("%d is not a Strong Number", temp);
    }
    return 0;
}


// Perfect Number
#include <stdio.h>
int main()
{
    int no = 28;
    int sum = 0;

    for (int i = 1; i < no; i++)
    {
        if (no % i == 0)
        {
            sum = sum + i;
        }
    }

    if (sum == no)
    {
        printf("%d is a Perfect Number", no);
    }
    else
    {
        printf("%d is not a Perfect Number", no);
    }
    return 0;
}


// User-entered Perfect Number
#include <stdio.h>
int main()
{
    int no, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &no);

    for (int i = 1; i < no; i++)
    {
        if (no % i == 0)
        {
            sum = sum + i;
        }
    }
    if (sum == no)
    {
        printf("%d is a Perfect Number", no);
    }
    else
    {
        printf("%d is not a Perfect Number", no);
    }
    return 0;
}


// Prime Number
#include <stdio.h>
int main()
{
    int no = 13;
    int states = 0;

    for (int i = 2; i <= no / 2; i++)
    {
        if (no % i == 0)
        {
            states = 1;
        }
    }
    if (states == 0)
    {
        printf("%d is a Prime Number", no);
    }
    else
    {
        printf("%d is not a Prime Number", no);
    }
    return 0;
}