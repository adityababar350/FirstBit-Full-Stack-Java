// 1. Rectangle Pattern
#include <stdio.h>
int main()
{
    for (int row = 1; row <= 6; row++)
    {
        for(int col = 1; col <= 5; col++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

// 2. Square Pattern
#include <stdio.h>
int main()
{
    for (int row = 1; row <= 15; row++)
    {
        for(int col = 1; col <= 15; col++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

// 3. First Row Pattern
#include <stdio.h>
int main()
{
    for (int row = 1; row <= 15; row++)
    {
        for(int col = 1; col <= 15; col++)
        {
            if(row==1)
                printf("* ");
        }
        printf("\n");
    }
    return 0;
}

// 4. Top and Bottom Border
#include <stdio.h>
int main()
{
    for (int row = 1; row <= 15; row++)
    {
        for(int col = 1; col <= 15; col++)
        {
            if(row==1 || row==15)
                printf("* ");
        }
        printf("\n");
    }
    return 0;
}

// 4. Top and Bottom Border
#include <stdio.h>
int main()
{
    for (int row = 1; row <= 15; row++)
    {
        for(int col = 1; col <= 15; col++)
        {
            if(row==1 || row==15 || col==1 || col==15)
                printf("* ");
        }
        printf("\n");
    }
    return 0;
}

// 6. Hollow Square
#include <stdio.h>
int main()
{
    for (int row = 1; row <= 15; row++)
    {
        for(int col = 1; col <= 15; col++)
        {
            if(row==1 || row==15 || col==1 || col==15)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}

// 7. Hollow Square with One Diagonal
#include <stdio.h>
int main()
{
    for (int row = 1; row <= 15; row++)
    {
        for(int col = 1; col <= 15; col++)
        {
            if(row==1  ||
               row==15 ||
               col==1  || 
               col==15 || 
               row==col)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}

// 8. Hollow Square with X Pattern
#include <stdio.h>
int main()
{
    for (int row = 1; row <= 15; row++)
    {
        for(int col = 1; col <= 15; col++)
        {
            if(row==1  ||
               row==15 ||
               col==1  || 
               col==15 || 
               row==col || 
               row+col==16)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}

// 9. X Pattern with Center Cross
#include <stdio.h>
int main()
{
    for (int row = 1; row <= 15; row++)
    {
        for(int col = 1; col <= 15; col++)
        {
            if(row==1  ||
               row==15 ||
               col==1  || 
               col==15 || 
               row==col || 
               row+col==16 ||
               row==8 ||
               col==8)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}

// 10. X Pattern with Center O
#include <stdio.h>
int main()
{
    for (int row = 1; row <= 15; row++)
    {
        for(int col = 1; col <= 15; col++)
        {
            if(row == 8 && col == 8)
                printf("O ");
            else if(row==1  ||
               row==15 ||
               col==1  || 
               col==15 || 
               row==col || 
               row+col==16 ||
               row==8 ||
               col==8 )
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}

