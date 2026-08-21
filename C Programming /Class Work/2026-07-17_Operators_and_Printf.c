#include <stdio.h>
int main()
{
    int a, b, c;   // Addition of two number 

    a = 45;
    b = 30;
    c = a + b;

    printf("Addition is %d", c);

    return 0;
}


#include <stdio.h>
int main()
{
    int x = 10 > 20;  // Greater than (>) operator
    printf("%d",x);
}

#include <stdio.h>
int main()
{
    int x = 30!=40;  // Not equal (!=) operator
    printf("%d",x);
}

#include <stdio.h>
int main()
{
    int x = 40==50;  // Equal to (==) operator
    printf("%d",x);
}

#include <stdio.h>
int main()
{
    int x = 10 > 20;  // Greater than (>) operator
    printf("%d",x);
}

#include <stdio.h>
int main()       // Relational operator precedence example
{
    int x = 10>20<=40>50<60>70;  
    printf("%d",x);
}

#include <stdio.h>
int main()     // Combination of relational operators
{
    int x = 10>20>40!=60>70<50==70>40;
    printf("%d",x);
}

#include <stdio.h>
void main()     // // Arithmetic operator precedence
{
    int x = 10 + 2 * 15 / 3 + 5 - 4;
    printf("%d", x);
}

#include <stdio.h>
void main()
{
    int x = 10 + 2 - 15 / 3 * 5 + 4;
    printf("%d", x);
} 

#include <stdio.h>
void main()
{
    int x = 10*5/2;  // Multiplication and division
    printf("%d", x);
}

#include <stdio.h>
void main()
{
    int x = 10<30>20;  // Chained relational operators
    printf("%d", x);
}



#include <stdio.h>
void main()
{
    int x = 10&&-20;  // Logical AND (&&)
    printf("%d", x);
}

#include <stdio.h>
void main()
{
    int x = 10&&0;  // Logical AND with zero
    printf("%d", x);
}

#include <stdio.h>
void main()
{
    int x = 10||0;    // Logical OR (||)
    printf("%d", x);
}

#include <stdio.h>
void main()
{
    int x = 0||0;    // Logical OR with zero values
    printf("%d", x);
}

#include <stdio.h>
void main()
{
    int x = 10&&40;  // Logical AND with non-zero values
    printf("%d", x);
}

#include <stdio.h>
void main()     
{
    int x = 10<30 && 30>20;  // Relational + Logical operators
    printf("%d", x);
}

#include <stdio.h>
void main()    // Arithmetic + Relational + Logical operators
{
    int x = 10+2*3&&2*5-4>6-3&&1+2;
    printf("%d", x);
}

#include <stdio.h>
void main()   // printf() returns number of characters printed
{
    int x =printf("Firstbit");
    printf("%d", x);
}

#include <stdio.h>
void main()    // Addition of return values of printf()
{
    int x =printf("Firstbit") + printf("Solution");
    printf("%d", x);
}

#include <stdio.h>
void main()  // Comparing return values of printf()
{
    int x =printf("Firstbit") > printf("Solution");
    printf("%d", x);
}

#include <stdio.h>
void main()  // Logical OR with printf() return values
{
    int x =printf("Firstbit") || printf("Solution");
    printf("%d", x);
}

#include <stdio.h>
void main()  
{
    int x = printf("hello%d",printf("FBS"));  // Nested printf()
    printf("%d", x);
}

#include <stdio.h>
void main()  // Complex expression using printf() return values
{
    int x =printf("ab") + printf("xyz")>12&&printf("pqr")-printf("lmnop")||printf("FBS");
    printf("%d", x);
}