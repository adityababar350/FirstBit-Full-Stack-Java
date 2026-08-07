// Q1. Write a program to check whether a number is even or odd.
#include<stdio.h>
int main()
{
    int no = 15;
    if(no % 2 == 0)
        printf("Even Number");
    else
        printf("Odd Number");
    return 0;
}

// Q2. Write a program to check given 3 digit number is pallindrome or not. 
#include<stdio.h>
int main()
{
    int no = 121;
    int temp = no;
    int rev = 0;
    rev = rev * 10 + temp % 10;
    temp = temp / 10;
    rev = rev * 10 + temp % 10;
    temp = temp / 10;
    rev = rev * 10 + temp % 10;
    if(no == rev)
        printf("Palindrome Number");
    else
        printf("Not Palindrome");

    return 0;
}


// Q3. Write a program to check whether a given year is a leap year.
#include<stdio.h>
int main()
{
    int year = 2024;

    if((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
        printf("Leap Year");
    else
        printf("Not Leap Year");

    return 0;
}

// 4. Write a program to check whether a given character is a vowel or consonant.
#include <stdio.h>

int main()
{
    char ch = 'A';

    if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
        ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        printf("Vowel");
    }
    else
    {
        printf("Consonant");
    }

    return 0;
}


// Q5Write a program to check whether a person is eligible to vote (age ≥ 18).
#include<stdio.h>

int main()
{
    int age = 20;

    if(age >= 18)
        printf("Eligible for Voting");
    else
        printf("Not Eligible");

    return 0;
}

// Q6. Write a program to check whether a given character is uppercase or lowercase.
#include<stdio.h>

int main()
{
    char ch = 'G';

    if(ch >= 'A' && ch <= 'Z')
        printf("Uppercase");
    else if(ch >= 'a' && ch <= 'z')
        printf("Lowercase");
    else
        printf("Invalid Character");

    return 0;
}

/* Q7. Calculating total salary based on basic. If basic <=5000 da, ta and hra will be 
 10%,20% and 25% respectively otherwise da, ta and hra will be 15%,25% and 30%  respectively.*/
#include<stdio.h>

int main()
{
    float basic = 6000;
    float da, ta, hra, total;

    if(basic <= 5000)
    {
        da = basic * 0.10;
        ta = basic * 0.20;
        hra = basic * 0.25;
    }
    else
    {
        da = basic * 0.15;
        ta = basic * 0.25;
        hra = basic * 0.30;
    }

    total = basic + da + ta + hra;
    printf("Basic Salary = %.2f\n", basic);
    printf("DA = %.2f\n", da);
    printf("TA = %.2f\n", ta);
    printf("HRA = %.2f\n", hra);
    printf("Total Salary = %.2f", total);

    return 0;
}