// Q1. Write a C program to add two integers and display the result 
#include<stdio.h>
int main()
{
    int a = 10, b = 20, sum;
    sum = a + b;
    printf("Sum = %d", sum);
    return 0;
}

// Q2. Write a C program to find the area of a circle.
#include<stdio.h>
int main()
{
    float radius = 5, area;
    area = 3.14 * radius * radius;
    printf("Area = %.2f", area);
    return 0;
}

// Q3. Write a C program to convert temperature from Celsius to Fahrenheit using the formula: F = (C *9/5) + 32
#include<stdio.h>
int main()
{
    float c = 25, f;
    f = (c * 9 / 5) + 32;
    printf("Fahrenheit = %.2f", f);
    return 0;
}

// Q4. Write a C program to swap two numbers using a temporary third variable. 
#include<stdio.h>
int main()
{
    int a = 10, b = 20, temp;
    temp = a;
    a = b;
    b = temp;
    printf("a = %d\n", a);
    printf("b = %d", b);
    return 0;
}

// Q5. Write a C program to input five numbers and find their average. 
#include<stdio.h>
int main()
{
    int a = 10, b = 20, c = 30, d = 40, e = 50;
    float avg;
    avg = (a + b + c + d + e) / 5.0;
    printf("Average = %.2f", avg);
    return 0;
}

// Q6. Write a C program to find the square and cube of a given number.
#include<stdio.h>
int main()
{
    int no = 5;
    printf("Square = %d\n", no * no);
    printf("Cube = %d", no * no * no);
    return 0;
}

//7. Write a C program to convert given minutes into hours and remaining minutes. 
#include<stdio.h>
int main()
{
    int minutes = 135;
    int hours, rem;
    hours = minutes / 60;
    rem = minutes % 60;
    printf("Hours = %d\n", hours);
    printf("Remaining Minutes = %d", rem);
    return 0;
}

// Q8. Write a C program to input the length and width of a rectangle and find its perimeter.
#include<stdio.h>

int main()
{
    int length = 10, width = 5, perimeter;
    perimeter = 2 * (length + width);
    printf("Perimeter = %d", perimeter);
    return 0;
}

// Q9. Write a C program to input the base and height of a triangle and calculate its area. 
#include<stdio.h>

int main()
{
    float base = 10, height = 8, area;
    area = 0.5 * base * height;
    printf("Area = %.2f", area);
    return 0;
}

// Q10.  Write a C program to input marks of five subjects, find the total marks, and calculate the percentage. 
#include<stdio.h>

int main()
{
    int m1 = 80, m2 = 75, m3 = 90, m4 = 85, m5 = 70;
    int total;
    float percentage;
    total = m1 + m2 + m3 + m4 + m5;
    percentage = total / 5.0;
    printf("Total = %d\n", total);
    printf("Percentage = %.2f%%", percentage);
    return 0;
}