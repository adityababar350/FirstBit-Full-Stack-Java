#include <stdio.h>
void checkEvenOdd()
{
    int no = 15;

    if(no % 2 == 0)
        printf("Even Number");
    else
        printf("Odd Number");

}
int main()
{
    checkEvenOdd();

    return 0;
}

#include <stdio.h>
void checkEvenOdd(int no)
{
    if(no % 2 == 0)
        printf("Even Number");
    else
        printf("Odd Number");
}
int main()
{
    int no = 15;

    checkEvenOdd(no);

    return 0;
}

#include <stdio.h>
int checkEvenOdd()
{
    int no = 15;

    if(no % 2 == 0)
        return 1;
    else
        return 0;
}
int main()
{
    int result = checkEvenOdd();

    if(result == 1)
        printf("Even Number");
    else
        printf("Odd Number");

    return 0;
}

#include <stdio.h>
int checkEvenOdd(int no)
{
    if(no % 2 == 0)
        return 1;
    else
        return 0;
}
int main()
{
    int no = 15;

    int result = checkEvenOdd(no);

    if(result == 1)
        printf("Even Number");
    else
        printf("Odd Number");

    return 0;
}


#include <stdio.h>
void checkPalindrome()
{
    int no = 121;
    int temp = no;
    int rev = 0;

    while(no > 0)
    {
        rev = rev * 10 + no % 10;
        no = no / 10;
    }

    if(rev == temp)
        printf("Palindrome Number");
    else
        printf("Not Palindrome");
}
int main()
{
    checkPalindrome();

    return 0;
}


#include <stdio.h>
void checkPalindrome(int no)
{
    int temp = no;
    int rev = 0;

    while(no > 0)
    {
        rev = rev * 10 + no % 10;
        no = no / 10;
    }

    if(rev == temp)
        printf("Palindrome Number");
    else
        printf("Not Palindrome");
}
int main()
{
    int no = 121;

    checkPalindrome(no);

    return 0;
}


#include <stdio.h>
int checkPalindrome()
{
    int no = 121;
    int temp = no;
    int rev = 0;

    while(no > 0)
    {
        rev = rev * 10 + no % 10;
        no = no / 10;
    }

    if(rev == temp)
        return 1;
    else
        return 0;
}
int main()
{
    int result = checkPalindrome();

    if(result == 1)
        printf("Palindrome Number");
    else
        printf("Not Palindrome");

    return 0;
}


#include <stdio.h>
int checkPalindrome(int no)
{
    int temp = no;
    int rev = 0;

    while(no > 0)
    {
        rev = rev * 10 + no % 10;
        no = no / 10;
    }

    if(rev == temp)
        return 1;
    else
        return 0;
}
int main()
{
    int no = 121;

    int result = checkPalindrome(no);

    if(result == 1)
        printf("Palindrome Number");
    else
        printf("Not Palindrome");

    return 0;
}


#include <stdio.h>
void checkLeapYear()
{
    int year = 2024;

    if((year % 400 == 0) ||
       (year % 4 == 0 && year % 100 != 0))
        printf("Leap Year");
    else
        printf("Not Leap Year");
}
int main()
{
    checkLeapYear();

    return 0;
}


#include <stdio.h>
void checkLeapYear(int year)
{
    if((year % 400 == 0) ||
       (year % 4 == 0 && year % 100 != 0))
        printf("Leap Year");
    else
        printf("Not Leap Year");
}
int main()
{
    int year = 2024;

    checkLeapYear(year);

    return 0;
}


#include <stdio.h>
int checkLeapYear()
{
    int year = 2024;

    if((year % 400 == 0) ||
       (year % 4 == 0 && year % 100 != 0))
        return 1;
    else
        return 0;
}
int main()
{
    int result = checkLeapYear();

    if(result == 1)
        printf("Leap Year");
    else
        printf("Not Leap Year");

    return 0;
}


#include <stdio.h>
int checkLeapYear(int year)
{
    if((year % 400 == 0) ||
       (year % 4 == 0 && year % 100 != 0))
        return 1;
    else
        return 0;
}
int main()
{
    int year = 2024;

    int result = checkLeapYear(year);

    if(result == 1)
        printf("Leap Year");
    else
        printf("Not Leap Year");

    return 0;
}


#include <stdio.h>
void checkVoting()
{
    int age = 20;

    if(age >= 18)
        printf("Eligible for Voting");
    else
        printf("Not Eligible");
}
int main()
{
    checkVoting();

    return 0;
}


#include <stdio.h>
void checkVoting(int age)
{
    if(age >= 18)
        printf("Eligible for Voting");
    else
        printf("Not Eligible");
}
int main()
{
    int age = 20;

    checkVoting(age);

    return 0;
}


#include <stdio.h>
int checkVoting()
{
    int age = 20;

    if(age >= 18)
        return 1;
    else
        return 0;
}
int main()
{
    int result = checkVoting();

    if(result == 1)
        printf("Eligible for Voting");
    else
        printf("Not Eligible");

    return 0;
}


#include <stdio.h>
int checkVoting(int age)
{
    if(age >= 18)
        return 1;
    else
        return 0;
}
int main()
{
    int age = 20;

    int result = checkVoting(age);

    if(result == 1)
        printf("Eligible for Voting");
    else
        printf("Not Eligible");

    return 0;
}


#include <stdio.h>
void checkCase()
{
    char ch = 'G';

    if(ch >= 'A' && ch <= 'Z')
        printf("Uppercase");
    else if(ch >= 'a' && ch <= 'z')
        printf("Lowercase");
    else
        printf("Invalid Character");
}
int main()
{
    checkCase();

    return 0;
}


#include <stdio.h>
void checkCase(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
        printf("Uppercase");
    else if(ch >= 'a' && ch <= 'z')
        printf("Lowercase");
    else
        printf("Invalid Character");
}
int main()
{
    char ch = 'G';

    checkCase(ch);

    return 0;
}


#include <stdio.h>
int checkCase()
{
    char ch = 'G';

    if(ch >= 'A' && ch <= 'Z')
        return 1;
    else if(ch >= 'a' && ch <= 'z')
        return 2;
    else
        return 0;
}
int main()
{
    int result = checkCase();

    if(result == 1)
        printf("Uppercase");
    else if(result == 2)
        printf("Lowercase");
    else
        printf("Invalid Character");

    return 0;
}


#include <stdio.h>
int checkCase(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
        return 1;
    else if(ch >= 'a' && ch <= 'z')
        return 2;
    else
        return 0;
}
int main()
{
    char ch = 'G';

    int result = checkCase(ch);

    if(result == 1)
        printf("Uppercase");
    else if(result == 2)
        printf("Lowercase");
    else
        printf("Invalid Character");

    return 0;
}


#include <stdio.h>
void calculateSalary()
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
}
int main()
{
    calculateSalary();

    return 0;
}


#include <stdio.h>
void calculateSalary(float basic)
{
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
}
int main()
{
    float basic = 6000;

    calculateSalary(basic);

    return 0;
}


#include <stdio.h>
float calculateSalary()
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

    return total;
}
int main()
{
    float total = calculateSalary();

    printf("Total Salary = %.2f", total);

    return 0;
}


#include <stdio.h>
float calculateSalary(float basic)
{
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

    return total;
}
int main()
{
    float basic = 6000;

    float total = calculateSalary(basic);

    printf("Total Salary = %.2f", total);

    return 0;
}