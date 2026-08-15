#include <stdio.h>
void checkEvenOdd(int *no)
{
    if(*no % 2 == 0)
        printf("Even Number");
    else
        printf("Odd Number");
}

int main()
{
    int no = 15;

    checkEvenOdd(&no);

    return 0;
}


#include <stdio.h>
void checkPalindrome(int *no)
{
    int temp = *no;
    int rev = 0;

    while(*no > 0)
    {
        rev = rev * 10 + *no % 10;
        *no = *no / 10;
    }

    if(rev == temp)
        printf("Palindrome Number");
    else
        printf("Not Palindrome");
}
int main()
{
    int no = 121;

    checkPalindrome(&no);

    return 0;
}


#include <stdio.h>
void checkLeapYear(int *year)
{
    if((*year % 400 == 0) ||
       (*year % 4 == 0 && *year % 100 != 0))
    {
        printf("Leap Year");
    }
    else
    {
        printf("Not Leap Year");
    }
}
int main()
{
    int year = 2024;

    checkLeapYear(&year);

    return 0;
}


#include <stdio.h>
void checkVoting(int *age)
{
    if(*age >= 18)
        printf("Eligible for Voting");
    else
        printf("Not Eligible");
}
int main()
{
    int age = 20;

    checkVoting(&age);

    return 0;
}


#include <stdio.h>
void checkCase(char *ch)
{
    if(*ch >= 'A' && *ch <= 'Z')
        printf("Uppercase");
    else if(*ch >= 'a' && *ch <= 'z')
        printf("Lowercase");
    else
        printf("Invalid Character");
}
int main()
{
    char ch = 'G';

    checkCase(&ch);

    return 0;
}


#include <stdio.h>
void calculateSalary(float *basic)
{
    float da, ta, hra, total;

    if(*basic <= 5000)
    {
        da = *basic * 0.10;
        ta = *basic * 0.20;
        hra = *basic * 0.25;
    }
    else
    {
        da = *basic * 0.15;
        ta = *basic * 0.25;
        hra = *basic * 0.30;
    }

    total = *basic + da + ta + hra;

    printf("Basic Salary = %.2f\n", *basic);
    printf("DA = %.2f\n", da);
    printf("TA = %.2f\n", ta);
    printf("HRA = %.2f\n", hra);
    printf("Total Salary = %.2f", total);
}
int main()
{
    float basic = 6000;

    calculateSalary(&basic);

    return 0;
}