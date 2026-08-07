
#include <stdio.h>
int main()
{
    int no = 13;   

    if (no % 2 == 0)
    {
        printf("Even");    // Even or Odd
    }
    else
    {
        printf("Odd");
    }

    return 0;
}


#include <stdio.h>
int main()
{
    int no = 13;

    if (no>0)
    {
        printf("Positive");     //  Positive or Negative
    }
    else
    {
        printf("Negetive");
    }
    return 0;
}


#include <stdio.h>
int main()
{
    int age = 17;

    if (age>=18)
    {
        printf("Eligible");      // person is eligible to vote
    }
    else
    {
        printf("Not Eligible");
    }
    return 0;
}


#include <stdio.h>
int main()
{
    int  year = 2004;

    if (year%4==0)
    {
        printf("Leap Year");  // Check Leap Year
    }
    else
    {
        printf("Not Leap Year");
    }
    return 0;
}


#include <stdio.h>
int main()
{
    int  year = 2004;

    if (year%4==0 && year%100!=0 || year%400==0)
    {
        printf("Leap Year");
    }
    else
    {
        printf("Not Leap Year");
    }
    return 0;
}


#include <stdio.h>
int main()
{
    if (-10)
    {
        printf("Hello");
    }
    else
    {
        printf("Bye");
    }
    return 0;
}

#include <stdio.h>
int main()
{
    if (0)
    {
        printf("Hello");
    }
    else
    {
        printf("Bye");
    }
    return 0;
}

#include <stdio.h>
int main()
{
    if (printf("FBS"))
    {
        printf("Hello");
    }
    else
    {
        printf("Bye");
    }
    return 0;
}


#include <stdio.h>
int main()
{
    int marks = 50;
    if(marks>=35)
    {
        printf("pass");
    }
    else
    {
        printf("fail");
    }
    return 0;
}

#include <stdio.h>
int main()
{
    int len=50, bre=20;

    int area=len*bre;

    printf("Area = %d", area);

    return 0;
}

#include <stdio.h>
int main()
{
    int len=50, bre=20;

    if(len>0 && bre>0)
    {
        int area=len*bre;
        printf("Area = %d", area);
    }
    else
    printf("Invalid len or bre");

    return 0;
}

