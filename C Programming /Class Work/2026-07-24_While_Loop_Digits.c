#include<stdio.h>
int main()
{
    int no = 54372;
    int r1, r2, r3, r4, r5;
    int q1, q2, q3, q4, q5;
    int sum;
    
    r1 = no % 10;
    q1 = no / 10;

    r2 = q1 % 10;
    q2 = q1 / 10;

    r3 = q2 % 10;
    q3 = q2 / 10;

    r4 = q3 % 10;
    q4 = q3 / 10;

    r5 = q4 % 10;
    q5 = q4 / 10;
    
    printf("%d %d %d %d %d", r1, r2, r3, r4, r5); // Print all extracted digits
    sum = r1 + r2 + r3 + r4 + r5; // Calculate sum of all digits
    printf("\nSum = %d", sum);  // Print the sum


    return 0;
}


#include<stdio.h>
int main()
{
    int no = 54372;
    int r1, r2, r3, r4, r5;
    int q1, q2, q3, q4, q5;

    int sum;
    
    r1 = no % 10;
    no = no / 10;

    r2 = no % 10;
    no = no / 10;

    r3 = no % 10;
    no = no / 10;

    r4 = no % 10;
    no = no / 10;

    r5 = no % 10;
    no = no / 10;

    printf("%d %d %d %d %d", r1, r2, r3, r4, r5);
    sum = r1 + r2 + r3 + r4 + r5;
    printf("\nSum = %d", sum);

    return 0;
}


#include<stdio.h>
int main()
{
    int no = 54372;
    int r1, r2, r3, r4, r5;
    int sum = 0;
    
    r1 = no % 10;
    no = no / 10;
    sum = sum + r1;

    r2 = no % 10;
    no = no / 10;
    sum = sum + r2;

    r3 = no % 10;
    no = no / 10;
    sum = sum + r3;

    r4 = no % 10;
    no = no / 10;
    sum = sum + r4;

    r5 = no % 10;
    no = no / 10;
    sum = sum + r5;

    printf("%d %d %d %d %d", r1, r2, r3, r4, r5);
    printf("\nSum = %d", sum);

    return 0;
}

#include<stdio.h>
int main()
{
    int no = 54372;
    int r1;
    int sum = 0;

    while (no>0)
    {
        r1 = no % 10;
        sum = sum + r1;
        no = no /10;
    }
    printf("Sum = %d", sum);
    return 0;
}


#include<stdio.h>
int main()
{
    int i = 1; // Start from 1

    while (i <= 1000) // Loop from 1 to 1000
    {
        printf("%d",i);  // Print current number
        i++; // Increase i by 1
    }
    return 0;
}


#include<stdio.h>
int main()
{
    int i = 1; 

    while (i <= 1000)  
    { 
        if (i%2==0) // Check whether number is even
        printf("%d",i);
        i++;  
    }
    return 0;
}


#include<stdio.h>
int main()
{
    int i = 1;  

    while (i <= 1000)  
    {
        if (i%3==0 && i%5==0)  // Check if number is divisible by both 3 and 5
        printf("%d",i);  /
        i++;    
    }
    return 0;
}