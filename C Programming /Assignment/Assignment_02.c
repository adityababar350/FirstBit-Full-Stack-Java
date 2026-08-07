// 1. Accept two numbers from user and an operator (+,-,/,*,%) based on that perform the desired operations.
#include <stdio.h>

int main()
{
    int a, b;
    char op;

    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    printf("Enter operator (+,-,*,/,%%): ");
    scanf(" %c", &op);

    if(op=='+')
        printf("%d", a+b);
    else if(op=='-')
        printf("%d", a-b);
    else if(op=='*')
        printf("%d", a*b);
    else if(op=='/')
        printf("%d", a/b);
    else if(op=='%')
        printf("%d", a%b);
    else
        printf("Invalid Operator");

    return 0;
}


// 2. Accept three sides of a triangle from the user and determine whether the triangle is equilateral, isosceles, or scalene. 
#include <stdio.h>

int main()
{
    int a,b,c;

    printf("Enter three sides: ");
    scanf("%d%d%d",&a,&b,&c);

    if(a==b && b==c)
        printf("Equilateral");
    else if(a==b || b==c || a==c)
        printf("Isosceles");
    else
        printf("Scalene");

    return 0;
}

// 3. Write a program to find greatest of three numbers using nested if-else.
#include <stdio.h>

int main()
{
    int a,b,c;

    printf("Enter three numbers: ");
    scanf("%d%d%d",&a,&b,&c);

    if(a>b)
    {
        if(a>c)
            printf("Greatest = %d",a);
        else
            printf("Greatest = %d",c);
    }
    else
    {
        if(b>c)
            printf("Greatest = %d",b);
        else
            printf("Greatest = %d",c);
    }

    return 0;
}

/* 4. Ask the user to enter marks. 
Then show the result based on these rules: 
If marks are more than 75 → show "Distinction" 
If marks are more than 65 → show "First Class" 
If marks are more than 55 → show "Second Class" 
If marks are 40 or more → show "Pass Class" 
If marks are less than 40 → show "Fail" */

#include <stdio.h>

int main()
{
    int marks;

    printf("Enter marks: ");
    scanf("%d",&marks);

    if(marks>75)
        printf("Distinction");
    else if(marks>65)
        printf("First Class");
    else if(marks>55)
        printf("Second Class");
    else if(marks>=40)
        printf("Pass Class");
    else
        printf("Fail");

    return 0;
}

/* 5. Accept the price from user. Ask the user if he is a student (user may say y or n). If he 
is a student and he has purchased more than 500 than discount is 20% otherwise 
discount is 10%.But if he is not a student then if he has purchased more than 600 
discount is 15% otherwise there is not discount.*/

#include <stdio.h>

int main()
{
    float price;
    char ch;

    printf("Enter price: ");
    scanf("%f",&price);

    printf("Are you student (y/n): ");
    scanf(" %c",&ch);

    if(ch=='y' || ch=='Y')
    {
        if(price>500)
            printf("Discount = 20%%");
        else
            printf("Discount = 10%%");
    }
    else
    {
        if(price>600)
            printf("Discount = 15%%");
        else
            printf("No Discount");
    }

    return 0;
}

/*6. Accept a number and check if it is divisible by 3, 5, or both. 
(Print "Divisible by 3 but not by 5" or "Divisible by 5 but not by 3" or "Divisible by 
both" or” Divisible by None”) */
#include <stdio.h>

int main()
{
    int n;

    printf("Enter number: ");
    scanf("%d",&n);

    if(n%3==0 && n%5==0)
        printf("Divisible by both");
    else if(n%3==0)
        printf("Divisible by 3 but not by 5");
    else if(n%5==0)
        printf("Divisible by 5 but not by 3");
    else
        printf("Divisible by None");

    return 0;
}

/* 7. Accept the age and check if the person is: 
Child (age < 12),Teenager (12–19),Adult (20–59),Senior (60 and above) */
#include <stdio.h>

int main()
{
    int age;

    printf("Enter age: ");
    scanf("%d",&age);

    if(age<12)
        printf("Child");
    else if(age<=19)
        printf("Teenager");
    else if(age<=59)
        printf("Adult");
    else
        printf("Senior");

    return 0;
}

