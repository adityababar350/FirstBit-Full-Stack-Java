// Post Increment
#include <stdio.h>
int main()              
{
    int a = 10;           
    a++;               // First use 10, then increment to 11
    printf("%d",a);    
    return 0;
}

// Pre Increment
#include <stdio.h>
int main()
{
    int a = 10;
    ++a;             // First increment to 11, then use
    printf("%d",a);
    return 0;
}

// Post Increment with Assignment
#include <stdio.h>
int main()
{
    int a=10,b;
    b=a++;                     // b=10, then a=11
    printf("A= %d B= %d",a,b);
    return 0;
}

// Pre Increment with Assignment
#include <stdio.h>
int main()
{
    int a=10,b;
    b=++a;                     // a=11, then b=11
    printf("A= %d B= %d",a,b);
    return 0;
}

#include <stdio.h>
int main()
{
    int a=9;
    int x=printf("%d",a++);
    printf("A= %d x= %d",x,a);
    return 0;
}

#include <stdio.h>
int main()
{
    int a=9;
    int x=printf("%d",++a);
    printf(" A= %d x= %d",x,a);
    return 0;
}

#include <stdio.h>
int main()
{
    printf("%d",!(5>3 && 4<2));
    return 0;
}

// Combination of Pre & Post Increment
#include <stdio.h>
int main()
{
    int a=10, b=20, c=30, d=40;
    int x=a++ + b++ + --c + d--;
    // x = 10 + 20 + 29 + 40 = 99
    printf("x = %d\n",x);
    printf("A= %d B= %d C= %d D= %d", a, b, c, d);
    return 0;
}

// Undefined Behaviour
#include <stdio.h>
int main()
{
    int a=10, b=20;
    int c=a++ + ++a + b++;
    printf("c = %d\n",c);
    printf("A= %d B= %d", a, b);
    return 0;
}

#include <stdio.h>
int main()
{
    int a=10, b=20;
    int c=a++ || b++;
    printf("c = %d\n",c);
    printf("A= %d B= %d", a, b);
    return 0;
}

#include <stdio.h>
int main()
{
    int a = 0, b = 20;
    int c = a++ && b++;
    printf("c = %d\n",c);
    printf("A= %d B= %d", a, b);
    return 0;
}

#include <stdio.h>
int main()
{
    int a = 10, b = 20;
    int c = a++ && b++;
    printf("c = %d\n",c);
    printf("A= %d B= %d", a, b);
    return 0;
}

#include <stdio.h>
int main()
{
    int a = 0, b = 20;
    int c = a++ || b++;
    printf("c = %d\n",c);
    printf("A= %d B= %d", a, b);
    return 0;
}

#include <stdio.h>
int main()
{
    int a = 0, b = 0;
    int c = a++ || b++;
    printf("c = %d\n",c);
    printf("A= %d B= %d", a, b);
    return 0;
}

#include <stdio.h>
int main()
{
    int a = 10, b = 20, d = 30;
    int c = a++ && b++ || d++;
    printf("c = %d\n",c);
    printf("A= %d B= %d", a, b, c);
    return 0;
}

#include <stdio.h>
int main()
{
    int a = 10, b = 0, d = 30;
    int c = a++ && b++ || d++;
    printf("c = %d\n",c);
    printf("A= %d B= %d", a, b, c);
    return 0;
}

#include <stdio.h>
int main()
{
    int a = 10, b = 20, d = 0;
    int c = a++ && b++ && d++;
    printf("c = %d\n",c);
    printf("A= %d B= %d", a, b, c);
    return 0;
}

#include <stdio.h>
int main()
{
    int a = 0, b = 20, d = 30;
    int c = a++ || b++ && d++;
    printf("c = %d\n",c);
    printf("A= %d B= %d", a, b, c);
    return 0;
}

