// Assinment 0, 1, 2, 3, 4, Function se karna hai

// Assignment_00

// Q1. Add Two Integers
#include <stdio.h>
void add()
{
    int a = 10, b = 20, sum;
    sum = a + b;

    printf("Sum = %d", sum);
}
int main()
{
    add();

    return 0;
}

// Q2. Area of Circle
#include <stdio.h>
void areaOfCircle()
{
    float radius = 5, area;

    area = 3.14 * radius * radius;

    printf("Area = %.2f", area);
}
int main()
{
    areaOfCircle();

    return 0;
}

// Q3. Celsius to Fahrenheit
#include <stdio.h>
void celsiusToFahrenheit()
{
    float c = 25, f;

    f = (c * 9 / 5) + 32;

    printf("Fahrenheit = %.2f", f);
}
int main()
{
    celsiusToFahrenheit();

    return 0;
} 

// Q4. Swap Two Numbers
#include <stdio.h>
void swap()
{
    int a = 10, b = 20, temp;

    temp = a;
    a = b;
    b = temp;

    printf("a = %d\n", a);
    printf("b = %d", b);
}
int main()
{
    swap();

    return 0;
}

// Q5. Average of Five Numbers
#include <stdio.h>
void average()
{
    int a = 10, b = 20, c = 30, d = 40, e = 50;
    float avg;

    avg = (a + b + c + d + e) / 5.0;

    printf("Average = %.2f", avg);
}
int main()
{
    average();

    return 0;
}

// Q6. Square and Cube
#include <stdio.h>
void squareCube()
{
    int no = 5;

    printf("Square = %d\n", no * no);
    printf("Cube = %d", no * no * no);
}
int main()
{
    squareCube();

    return 0;
}

// Q7. Minutes into Hours and Remaining Minutes
#include <stdio.h>
void convertMinutes()
{
    int minutes = 135;
    int hours, rem;

    hours = minutes / 60;
    rem = minutes % 60;

    printf("Hours = %d\n", hours);
    printf("Remaining Minutes = %d", rem);
}
int main()
{
    convertMinutes();

    return 0;
}

// Q8. Perimeter of Rectangle 
#include <stdio.h>
void perimeter()
{
    int length = 10, width = 5, perimeter;

    perimeter = 2 * (length + width);

    printf("Perimeter = %d", perimeter);
}
int main()
{
    perimeter();

    return 0;
}

// Q9. Area of Triangle
#include <stdio.h>
void areaOfTriangle()
{
    float base = 10, height = 8, area;

    area = 0.5 * base * height;

    printf("Area = %.2f", area);
}
int main()
{
    areaOfTriangle();

    return 0;
} 

// Q10. Total Marks and Percentage
#include <stdio.h>
void marks()
{
    int m1 = 80, m2 = 75, m3 = 90, m4 = 85, m5 = 70;
    int total;
    float percentage;

    total = m1 + m2 + m3 + m4 + m5;
    percentage = total / 5.0;

    printf("Total = %d\n", total);
    printf("Percentage = %.2f%%", percentage);
}
int main()
{
    marks();

    return 0;
}


// Assignment_01 

// Q1. Even or Odd
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

// Q2. 3 Digit Palindrome
#include <stdio.h>
void checkPalindrome()
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
}
int main()
{
    checkPalindrome();

    return 0;
}

// Q3. Leap Year
#include <stdio.h>
void checkLeapYear()
{
    int year = 2024;

    if((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
        printf("Leap Year");
    else
        printf("Not Leap Year");
}
int main()
{
    checkLeapYear();

    return 0;
}

// Q4. Vowel or Consonant
#include <stdio.h>
void checkVowelConsonant()
{
    char ch = 'A';

    if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
       ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        printf("Vowel");
    }
    else
    {
        printf("Consonant");
    }
}
int main()
{
    checkVowelConsonant();

    return 0;
}

// Q5. Voting Eligibility
#include <stdio.h>
void checkVotingEligibility()
{
    int age = 20;

    if(age >= 18)
        printf("Eligible for Voting");
    else
        printf("Not Eligible");
}
int main()
{
    checkVotingEligibility();

    return 0;
}

// Q6. Uppercase or Lowercase
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

// Q7. Total Salary
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



// Assignment_02 

// Q1. Calculator using Operator
#include <stdio.h>
void calculator()
{
    int a, b;
    char op;

    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    printf("Enter operator (+,-,*,/,%%): ");
    scanf(" %c", &op);

    if(op == '+')
        printf("Result = %d", a + b);
    else if(op == '-')
        printf("Result = %d", a - b);
    else if(op == '*')
        printf("Result = %d", a * b);
    else if(op == '/')
        printf("Result = %d", a / b);
    else if(op == '%')
        printf("Result = %d", a % b);
    else
        printf("Invalid Operator");
}
int main()
{
    calculator();

    return 0;
}

// Q2. Triangle Type
#include <stdio.h>
void checkTriangle()
{
    int a, b, c;

    printf("Enter three sides: ");
    scanf("%d%d%d", &a, &b, &c);

    if(a == b && b == c)
        printf("Equilateral");
    else if(a == b || b == c || a == c)
        printf("Isosceles");
    else
        printf("Scalene");
}
int main()
{
    checkTriangle();

    return 0;
}

// Q3. Greatest of Three Numbers — Nested If-Else
#include <stdio.h>
void greatest()
{
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d%d%d", &a, &b, &c);

    if(a > b)
    {
        if(a > c)
            printf("Greatest = %d", a);
        else
            printf("Greatest = %d", c);
    }
    else
    {
        if(b > c)
            printf("Greatest = %d", b);
        else
            printf("Greatest = %d", c);
    }
}
int main()
{
    greatest();

    return 0;
}

// Q4. Marks and Class
#include <stdio.h>
void checkResult()
{
    int marks;

    printf("Enter marks: ");
    scanf("%d", &marks);

    if(marks > 75)
        printf("Distinction");
    else if(marks > 65)
        printf("First Class");
    else if(marks > 55)
        printf("Second Class");
    else if(marks >= 40)
        printf("Pass Class");
    else
        printf("Fail");
}
int main()
{
    checkResult();

    return 0;
}

// Q5. Student Discount
#include <stdio.h>
void calculateDiscount()
{
    float price;
    char ch;

    printf("Enter price: ");
    scanf("%f", &price);

    printf("Are you student (y/n): ");
    scanf(" %c", &ch);

    if(ch == 'y' || ch == 'Y')
    {
        if(price > 500)
            printf("Discount = 20%%");
        else
            printf("Discount = 10%%");
    }
    else
    {
        if(price > 600)
            printf("Discount = 15%%");
        else
            printf("No Discount");
    }
}
int main()
{
    calculateDiscount();

    return 0;
}

// Q6. Divisible by 3, 5 or Both
#include <stdio.h>
void checkDivisibility()
{
    int n;

    printf("Enter number: ");
    scanf("%d", &n);

    if(n % 3 == 0 && n % 5 == 0)
        printf("Divisible by both");
    else if(n % 3 == 0)
        printf("Divisible by 3 but not by 5");
    else if(n % 5 == 0)
        printf("Divisible by 5 but not by 3");
    else
        printf("Divisible by None");
}
int main()
{
    checkDivisibility();

    return 0;
}

// Q7. Age Classification
#include <stdio.h>
void checkAge()
{
    int age;

    printf("Enter age: ");
    scanf("%d", &age);

    if(age < 12)
        printf("Child");
    else if(age <= 19)
        printf("Teenager");
    else if(age <= 59)
        printf("Adult");
    else
        printf("Senior");
}
int main()
{
    checkAge();

    return 0;
}



// Assignment_03 

// Q1. Print Numbers from 1 to 10
#include <stdio.h>
void printNumbers()
{
    int i;

    for(i = 1; i <= 10; i++)
    {
        printf("%d ", i);
    }
}
int main()
{
    printNumbers();

    return 0;
}

// Q2. Print Table of Given Number
#include <stdio.h>
void printTable()
{
    int n, i;

    printf("Enter number: ");
    scanf("%d", &n);

    for(i = 1; i <= 10; i++)
    {
        printf("%d\n", n * i);
    }
}
int main()
{
    printTable();

    return 0;
}

// Q3. Sum of Numbers in Given Range
#include <stdio.h>
void rangeSum()
{
    int start, end, i, sum = 0;

    printf("Enter start and end: ");
    scanf("%d%d", &start, &end);

    for(i = start; i <= end; i++)
    {
        sum = sum + i;
    }

    printf("Sum = %d", sum);
}
int main()
{
    rangeSum();

    return 0;
}

// Q4. Prime Number
#include <stdio.h>
void checkPrime()
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
}
int main()
{
    checkPrime();

    return 0;
}

// Q5. Armstrong Number
#include <stdio.h>
void checkArmstrong()
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
}
int main()
{
    checkArmstrong();

    return 0;
}

// Q6. Perfect Number
#include <stdio.h>
void checkPerfect()
{
    int n, i, sum = 0;

    printf("Enter number: ");
    scanf("%d", &n);

    for(i = 1; i < n; i++)
    {
        if(n % i == 0)
        {
            sum = sum + i;
        }
    }

    if(sum == n)
        printf("Perfect");
    else
        printf("Not Perfect");
}
int main()
{
    checkPerfect();

    return 0;
}

// Q7. Factorial of Given Number
#include <stdio.h>
void factorial()
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
}
int main()
{
    factorial();

    return 0;
}

// Q8. Strong Number
#include <stdio.h>
void checkStrong()
{
    int n, temp, rem, sum = 0;
    int i, fact;

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
}
int main()
{
    checkStrong();

    return 0;
}

// Q9. Palindrome Number
#include <stdio.h>
void checkPalindrome()
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
}
int main()
{
    checkPalindrome();

    return 0;
}

// Q10. Sum of First and Last Digit
#include <stdio.h>
void firstLastSum()
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
}
int main()
{
    firstLastSum();

    return 0;
}



// Assignment_04

// Q1. Print Armstrong Numbers from 1 to n
#include <stdio.h>
void printArmstrong()
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
}
int main()
{
    printArmstrong();

    return 0;
}

// Q2. Print Prime Numbers from 1 to n
#include <stdio.h>
void printPrime()
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
}
int main()
{
    printPrime();

    return 0;
}

// Q3. Print Perfect Numbers from 1 to n 
#include <stdio.h>
void printPrime()
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
}
int main()
{
    printPrime();

    return 0;
}

// Q4. Print Strong Numbers from 1 to n
#include <stdio.h>
void printStrong()
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
}
int main()
{
    printStrong();

    return 0;
}

// Q5. Menu Driven Program
#include <stdio.h>
void evenOdd()
{
    int n;

    printf("Enter Number: ");
    scanf("%d", &n);

    if(n % 2 == 0)
        printf("Even");
    else
        printf("Odd");
}
void prime()
{
    int n, i, flag = 1;

    printf("Enter Number: ");
    scanf("%d", &n);

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
}
void palindrome()
{
    int n, temp, rem, rev = 0;

    printf("Enter Number: ");
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
}
void positiveNegative()
{
    int n;

    printf("Enter Number: ");
    scanf("%d", &n);

    if(n > 0)
        printf("Positive");
    else if(n < 0)
        printf("Negative");
    else
        printf("Zero");
}
void reverseNumber()
{
    int n, temp, rem, rev = 0;

    printf("Enter Number: ");
    scanf("%d", &n);

    temp = n;

    while(temp > 0)
    {
        rem = temp % 10;
        rev = rev * 10 + rem;
        temp = temp / 10;
    }

    printf("Reverse = %d", rev);
}
void sumOfDigits()
{
    int n, temp, rem, sum = 0;

    printf("Enter Number: ");
    scanf("%d", &n);

    temp = n;

    while(temp > 0)
    {
        rem = temp % 10;
        sum = sum + rem;
        temp = temp / 10;
    }

    printf("Sum = %d", sum);
}
int main()
{
    int choice;

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
            evenOdd();
            break;

        case 2:
            prime();
            break;

        case 3:
            palindrome();
            break;

        case 4:
            positiveNegative();
            break;

        case 5:
            reverseNumber();
            break;

        case 6:
            sumOfDigits();
            break;

        default:
            printf("Invalid Choice");
    }
    return 0;
}