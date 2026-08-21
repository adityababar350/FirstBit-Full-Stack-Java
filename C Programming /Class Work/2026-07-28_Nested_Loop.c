#include <stdio.h>
int main()
{
    int a=10, b=20, c=1, x;
    int i=1;

    while(i <= 3)
    {
        x = i + a;
        for (int j = 1; j < i; j++)
        {
        a=a+x;
        b=a+i+j;
        c=c+b;
        }
        i++;
    }
    
    printf("%d %d %d %d %d", a, b, c, i, x);

    return 0;
}


#include <stdio.h>
int main()
{
    int a=10, b=20, c=1, x;
    int i=1;

    while(i <= 2)
    {
        x = i + b;
        for (int j = 1; j < i; j++)
        {
        a=b+x;
        b=a+i+j;
        c=c+b;
        }
        i++;
    }
    
    printf("%d %d %d %d %d", a, b, c, i, x);

    return 0;
}


#include<stdio.h>
int main()
{
    int no=13;
    int status=0;

    for (int i=2; i<no; i++)
    {
        if(no%i==0)
        {
            status=1;
            break;
        }
    }
    if(status==0)
       printf("No is prime");
    else
       printf("No is not prime");
}


#include<stdio.h>
int main()
{
   for (int j=1; j<=100; j++)
   {
        int no=j;
        int status=0;

        for (int i=2; i<no; i++)
        {
            if(no%i==0)
            {
                status=1;
                break;
            }
        }
        if(status==0)
            printf(" %d", no);
   }

}