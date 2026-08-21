// X Pattern with Center O
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


#include <stdio.h>
int main()
{
    for (int row = 1; row <= 10; row++)
    {
        for(int col = 1; col <= 10; col++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

#include <stdio.h>
int main()
{
    for (int row = 1; row <= 5; row++)
    {
        for(int col = 1; col <= 5; col++)
        {
            printf("%d ", row);
        }
        printf("\n");
    }
    return 0;
}

#include <stdio.h>
int main()
{
    for (int row = 5; row >= 1; row--)
    {
        for(int col = 1; col <= 5; col++)
        {
            printf("%d ", row);
        }
        printf("\n");
    }
    return 0;
}

#include <stdio.h>
int main()
{
    int A = 1;
    for (int row = 1; row <= 5; row++)
    {
        for(int col = 1; col <= 5; col++)
        {
            printf("%d ", A);
            A++;
        }
        printf("\n");
    }
    return 0;
}


#include <stdio.h>
int main()
{
    int A = 1;
    for (int row = 1; row <= 5; row++)
    {
        for(int col = 1; col <= row; col++)
        {
            printf("%d ", A);
            A++;
        }
        printf("\n");
    }
    return 0;
}

#include <stdio.h>
int main()
{
    int A = 1;
    for (int row = 1; row <= 5; row++)
    {
        for(int col = 5; col >= row; col--)
        {
            printf("* ");
            A++;
        }
        printf("\n");
    }
    return 0;
}


#include <stdio.h>
int main()
{
    int A = 1;
    for (int row = 1; row <= 5; row++)
    {
        for(int col = 5; col >= row; col--)
        {
            printf("* ");
            A++;
        }
        printf("\n");
    }
    for (int row = 1; row <= 5; row++)
    {
        for(int col = 1; col <= row; col++)
        {
            printf("* ");
            A++;
        }
        printf("\n");
    }
    return 0;
}


#include <stdio.h>
int main()
{
    int A = 1;
    for (int row = 1; row <= 5; row++)
    {
        for(int col = 5; col >= row; col--)
        {
            printf("* ");
            A++;
        }
        printf("\n");
    }
    for (int row = 1; row <= 5; row++)
    {
        for(int col = 1; col <= row; col++)
        {
            printf("* ");
            A++;
        }
        printf("\n");
    }
    for (int row = 1; row <= 5; row++)
    {
        for(int col = 5; col >= row; col--)
            printf("# ");

        for (int col=1; col<=row; col++)
            printf(". ");

        printf("\n");
    }
    return 0;
}

#include <stdio.h>
int main()
{
    int A = 1;
    for (int row = 1; row <= 5; row++)
    {
        for(int col = 5; col >= row; col--)
        {
            printf("* ");
            A++;
        }
        printf("\n");
    }
    for (int row = 1; row <= 5; row++)
    {
        for(int col = 1; col <= row; col++)
        {
            printf("* ");
            A++;
        }
        printf("\n");
    }
    for (int row = 1; row <= 5; row++)
    {
        for(int col = 5; col >= row; col--)
            printf("B ");

        for (int col=1; col<=row; col++)
            printf("A ");

        printf("\n");
    }
    return 0;
}


#include <stdio.h>
int main()
{
    int A = 1;
    for (int row = 1; row <= 5; row++)
    {
        for(int col = 5; col >= row; col--)
        {
            printf("* ");
            A++;
        }
        printf("\n");
    }
    for (int row = 1; row <= 5; row++)
    {
        for(int col = 1; col <= row; col++)
        {
            printf("* ");
            A++;
        }
        printf("\n");
    }
    for (int row = 1; row <= 5; row++)
    {
        for(int col = 5; col >= row; col--)
            printf("  ");

        for (int col=1; col<=row; col++)
            printf(". ");

        printf("\n");
    }
    return 0;
}


#include <stdio.h>
int main()
{
    int A = 1;
    for (int row = 1; row <= 5; row++)
    {
        for(int col = 5; col >= row; col--)
        {
            printf("* ");
            A++;
        }
        printf("\n");
    }
    for (int row = 1; row <= 5; row++)
    {
        for(int col = 1; col <= row; col++)
        {
            printf("* ");
            A++;
        }
        printf("\n");
    }
    for (int row = 5; row >= 1; row--)
    {
        for(int col = 5; col >= row; col--)
            printf("  ");

        for (int col=1; col<=row; col++)
            printf(". ");

        printf("\n");
    }
    return 0;
}


#include <stdio.h>
int main()
{
    int A = 1;
    for (int row = 1; row <= 5; row++)
    {
        for(int col = 5; col >= row; col--)
        {
            printf("* ");
            A++;
        }
        printf("\n");
    }
    for (int row = 1; row <= 5; row++)
    {
        for(int col = 1; col <= row; col++)
        {
            printf("* ");
            A++;
        }
        printf("\n");
    }
    for (int row = 1; row <= 6; row++)
    {
        for(int col = 5; col >= row; col--)
            printf("  ");

        for (int col=1; col<=row; col++)
            printf(". ");

        printf("\n");
    }
    for (int row = 5; row >= 1; row--)
    {
        for(int col = 5; col >= row; col--)
            printf("  ");

        for (int col=1; col<=row; col++)
            printf(". ");

        printf("\n");
    }
    return 0;
}

#include <stdio.h>
int main()
{
    int A = 1;
    for (int row = 1; row <= 5; row++)
    {
        for(int col = 5; col >= row; col--)
        {
            printf("A ");
            A++;
        }
        printf("\n");
    }
    for (int row = 1; row <= 5; row++)
    {
        for(int col = 1; col <= row; col++)
        {
            printf("B ");
            A++;
        }
        printf("\n");
    }
    for (int row = 1; row <= 6; row++)
    {
        for(int col = 5; col >= row; col--)
            printf("  ");

        for (int col=1; col<=row; col++)
            printf("C ");

        printf("\n");
    }
    for (int row = 5; row >= 1; row--)
    {
        for(int col = 5; col >= row; col--)
            printf("  ");

        for (int col=1; col<=row; col++)
            printf("D ");

        printf("\n");
    }
    return 0;
}

#include <stdio.h>
int main()
{
    int A = 1;
    for (int row = 1; row <= 5; row++)
    {
        for(int col = 5; col >= row; col--)
        {
            printf("A ");
            A++;
        }
        for (int col=1; col<=row; col++)
            printf("C ");
        for(int col = 1; col <= row; col++)
        {
            printf("B ");
            A++;
        }
        for (int col=5; col>=row; col--)
            printf("D ");
        printf("\n");
    }
    for (int row = 1; row <= 5; row++)
    {
        for(int col = 1; col <= row; col++)
        {
            printf("B ");
            A++;
        }
        printf("\n");
    }
    for (int row = 1; row <= 6; row++)
    {
        for(int col = 5; col >= row; col--)
            printf("  ");

        for (int col=1; col<=row; col++)
            printf("C ");

        printf("\n");
    }
    for (int row = 5; row >= 1; row--)
    {
        for(int col = 5; col >= row; col--)
            printf("  ");

        for (int col=1; col<=row; col++)
            printf("D ");

        printf("\n");
    }
    return 0;
}


#include <stdio.h>
int main()
{
    int A = 1;
    for (int row = 1; row <= 5; row++)
    {
        for(int col = 5; col >= row; col--)
        {
            printf("A ");
            A++;
        }
        for (int col=1; col<=row; col++)
            printf("  ");
        for(int col = 1; col <= row; col++)
        {
            printf("  ");
            A++;
        }
        for (int col=5; col>=row; col--)
            printf("D ");
        printf("\n");
    }
    for (int row = 1; row <= 5; row++)
    {
        for(int col = 1; col <= row; col++)
        {
            printf("B ");
            A++;
        }
        printf("\n");
    }
    for (int row = 1; row <= 6; row++)
    {
        for(int col = 5; col >= row; col--)
            printf("  ");

        for (int col=1; col<=row; col++)
            printf("C ");

        printf("\n");
    }
    for (int row = 5; row >= 1; row--)
    {
        for(int col = 5; col >= row; col--)
            printf("  ");

        for (int col=1; col<=row; col++)
            printf("D ");

        printf("\n");
    }
    return 0;
}


#include <stdio.h>
int main()
{
    int A = 1;
    for (int row = 1; row <= 5; row++)
    {
        for(int col = 5; col >= row; col--)
        {
            printf("A ");
            A++;
        }
        for (int col=1; col<=row; col++)
            printf("  ");
        for(int col = 1; col <= row; col++)
        {
            printf("  ");
            A++;
        }
        for (int col=5; col>=row; col--)
            printf("D ");
        printf("\n");
    }
    for (int row = 1; row <= 5; row++)
    {
        for(int col = 1; col <= row; col++)
        {
            printf("B ");
            A++;
        }
        for (int col=5; col>=row; col--)
            printf("D ");
        for(int col = 5; col >= row; col--)
        {
            printf("A ");
            A++;
        }
        for (int col=1; col<=row; col++)
            printf("C ");
        printf("\n");
    }
    for (int row = 1; row <= 6; row++)
    {
        for(int col = 5; col >= row; col--)
            printf("  ");

        for (int col=1; col<=row; col++)
            printf("C ");

        printf("\n");
    }
    for (int row = 5; row >= 1; row--)
    {
        for(int col = 5; col >= row; col--)
            printf("  ");

        for (int col=1; col<=row; col++)
            printf("D ");

        printf("\n");
    }
    return 0;
}



#include <stdio.h>
int main()
{
    int A = 1;
    for (int row = 1; row <= 5; row++)
    {
        for(int col = 5; col >= row; col--)
        {
            printf("A ");
            A++;
        }
        for (int col=1; col<=row; col++)
            printf("  ");
        for(int col = 1; col <= row; col++)
        {
            printf("  ");
            A++;
        }
        for (int col=5; col>=row; col--)
            printf("D ");
        printf("\n");
    }
    for (int row = 1; row <= 5; row++)
    {
        for(int col = 1; col <= row; col++)
        {
            printf("B ");
            A++;
        }
        for (int col=5; col>=row; col--)
            printf("  ");
        for(int col = 5; col >= row; col--)
        {
            printf("  ");
            A++;
        }
        for (int col=1; col<=row; col++)
            printf("C ");
        printf("\n");
    }
    for (int row = 1; row <= 6; row++)
    {
        for(int col = 5; col >= row; col--)
            printf("  ");

        for (int col=1; col<=row; col++)
            printf("C ");

        printf("\n");
    }
    for (int row = 5; row >= 1; row--)
    {
        for(int col = 5; col >= row; col--)
            printf("  ");

        for (int col=1; col<=row; col++)
            printf("D ");

        printf("\n");
    }
    return 0;
}



#include <stdio.h>
int main()
{
    int A = 1;
    for (int row = 1; row <= 5; row++)
    {
        for(int col = 5; col >= row; col--)
        {
            printf("  ");
            A++;
        }
        for (int col=2; col<=row; col++)
            printf(". ");
        for(int col = 1; col <= row; col++)
        {
            printf(". ");
            A++;
        }
        printf("\n");
    }
    return 0;
}


#include <stdio.h>
int main()
{
    int A = 1;
    for (int row = 1; row <= 5; row++)
    {
        for(int col = 1; col <= row; col++)
        {
            printf("  ");
            A++;
        }
        for (int col=4; col>=row; col--)
            printf("* ");
        for(int col = 5; col >= row; col--)
        {
            printf("* ");
            A++;
        }
        printf("\n");
    }
    return 0;
}




// Assignment 0, 1, 2, 3, 4, function se karna hai