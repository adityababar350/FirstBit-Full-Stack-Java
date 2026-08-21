// Program to print grade based on marks using nested if-else
#include <stdio.h>
int main()
{
    int marks = 52;
    if(marks>=75)
    {
        printf("A+");
    }
    else
    {
        if(marks>=55)
        {
            printf("B+");
        }
        else
        {
            if(marks>=45)
            {
                printf("C");
            }
            else
            {
                if (marks>=35)
                {
                    printf("Pass");
                }
                else
                {
                    printf("fail");
                }
            }
        }
    }

    return 0;
}



// Check whether a character is Alphabet, Digit or Symbol
#include <stdio.h>
int main()
{
    char ch = 'A';
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
    {
        printf("Alphabet");
    }
    else
    {
        if (ch >= '0' && ch <= '9')
        {
            printf("Digit");
        }
        else
        {
            printf("Symbol");
        }
    }
    return 0;
}


// Program to check character entered by user
#include <stdio.h>
int main()
{
    char ch;

    printf("Enter any character: ");
    scanf("%c", &ch);

    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
    {
        printf("Alphabet");
    }
    else
    {
        if (ch >= '0' && ch <= '9')
        {
            printf("Digit");
        }
        else
        {
            printf("Symbol");
        }
    }

    return 0;
}


// Program to print grade using else-if ladder
#include <stdio.h>
int main()
{
    int marks = 52;
    if(marks>=75)
        printf("A+");
    else if(marks>=55)
            printf("B+");
        else if(marks>=45)
                printf("C");
            else if (marks>=35)
                    printf("Pass");
                else
                    printf("fail");
            
        
    

    return 0;
}

// Program to calculate total salary
#include <stdio.h>
int main()
{
    double bs;

    printf("Enter basic salary: ");
    scanf("%lf", &bs);

    double ts, da, ta, hra;

    if (bs <= 5000)
    {
        da = bs * 0.10;
        ta = bs * 0.20;
        hra = bs * 0.25;
    }
    else
    {
        da = bs * 0.15;
        ta = bs * 0.25;
        hra = bs * 0.30;
    }

    ts = bs + da + ta + hra;

    printf("Total salary is %.2lf", ts);

    return 0;
}


#include<stdio.h>
int main()
{
    int no=20;

    if(no>0)
    {
        printf("No is positive");
    }
    else
    {
        if("no==0")
        {
            printf("No is zero");
        }
        else
        {
            printf("No is Negative");
        }
    }
}


#include<stdio.h>
int main()
{
    int no;

    printf("Enter your No: ");
    scanf("%d", &no);

    if(no > 0)
    {
        printf("No is positive");
    }
    else
    {
        if("no == 0")
        {
            printf("No is zero");
        }
        else
        {
           printf("No is Negative");
        }
    }
    return 0;
}


#include<stdio.h>
int main()
{
    int age = 21;
    char gender = 'M';

    if (age>=21 && gender=='M' || age>=18 && gender == 'F')
    {
        printf("Candidate is eligible");
    }
    else
    {
        printf("Not Eligible");
    }
    return 0;
}


#include<stdio.h>
int main()
{
    int Mage = 25;
    int Fage = 20;

    if(Mage>=25 && Fage>=21)
    {
        printf("Both are eligible");
    }
    else if (Mage>=25 && Fage<=21)
    {
        printf("Male eligibal but female not eligible");
    }
    else if (Mage<=25 && Fage>=21)
    {
        printf("male not eligible butfemale eligibal");
    }
    else
    {
        printf("Both are not eligible");
    }
    return 0;
}

