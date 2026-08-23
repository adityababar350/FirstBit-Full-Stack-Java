// 1. Find Minimum and Maximum Number in Array
#include <stdio.h>
int main()
{
    int arr[10];
    int n, i;
    int min, max;

    printf("Enter size of array : ");
    scanf("%d", &n);

    printf("Enter array elements :\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    min = arr[0];
    max = arr[0];

    for(i = 1; i < n; i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
        }
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }

    printf("Minimum = %d\n", min);
    printf("Maximum = %d\n", max);

    return 0;
}


// 2. Search Given Number in Array
#include <stdio.h>
int main()
{
    int arr[10];
    int n, i, no;
    int found = 0;

    printf("Enter size of array : ");
    scanf("%d", &n);

    printf("Enter array elements :\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter number to search : ");
    scanf("%d", &no);

    for(i = 0; i < n; i++)
    {
        if(arr[i] == no)
        {
            found = 1;
            printf("Number found at index %d\n", i);
            break;
        }
    }
    if(found == 0)
    {
        printf("Number not found\n");
    }

    return 0;
}


// 3. Find Sum of All Numbers
#include <stdio.h>
int main()
{
    int arr[10];
    int n, i;
    int sum = 0;

    printf("Enter size of array : ");
    scanf("%d", &n);

    printf("Enter array elements :\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }

    printf("Sum = %d\n", sum);

    return 0;
}


// 4. Find Odd and Even Numbers
#include <stdio.h>
int main()
{
    int arr[10];
    int n, i;

    printf("Enter size of array : ");
    scanf("%d", &n);

    printf("Enter array elements :\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Even numbers : ");

    for(i = 0; i < n; i++)
    {
        if(arr[i] % 2 == 0)
        {
            printf("%d ", arr[i]);
        }
    }

    printf("\nOdd numbers : ");

    for(i = 0; i < n; i++)
    {
        if(arr[i] % 2 != 0)
        {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}


// 5. Print Alternate Elements in Array
#include <stdio.h>
int main()
{
    int arr[10];
    int n, i;

    printf("Enter size of array : ");
    scanf("%d", &n);

    printf("Enter array elements :\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Alternate elements : ");

    for(i = 0; i < n; i = i + 2)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}


// 6. Accept Array and Print Only Prime Numbers
#include <stdio.h>
int main()
{
    int arr[10];
    int n, i, j;
    int count;

    printf("Enter size of array : ");
    scanf("%d", &n);

    printf("Enter array elements :\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Prime numbers : ");

    for(i = 0; i < n; i++)
    {
        if(arr[i] < 2)
        {
            continue;
        }

        count = 0;

        for(j = 1; j <= arr[i]; j++)
        {
            if(arr[i] % j == 0)
            {
                count++;
            }
        }
        if(count == 2)
        {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}


/*7. Add Two Arrays and Store Sum in Third Array
Example- 
arr[5]= {1,2, 3, 4,5} 
brr[5]={10,20,30, 40, 50} 
crr[5]={11,22,33,44,55} */ 
#include <stdio.h>
int main()
{
    int arr[5];
    int brr[5];
    int crr[5];
    int i;

    printf("Enter first array elements :\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter second array elements :\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &brr[i]);
    }

    for(i = 0; i < 5; i++)
    {
        crr[i] = arr[i] + brr[i];
    }

    printf("Third array :\n");

    for(i = 0; i < 5; i++)
    {
        printf("%d ", crr[i]);
    }

    return 0;
}

// 8. Merge Two Arrays
#include <stdio.h>
int main()
{
    int arr[5];
    int brr[5];
    int crr[10];
    int i;

    printf("Enter first array elements :\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter second array elements :\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &brr[i]);
    }

    for(i = 0; i < 5; i++)
    {
        crr[i] = arr[i];
    }

    for(i = 0; i < 5; i++)
    {
        crr[i + 5] = brr[i];
    }

    printf("Merged array :\n");

    for(i = 0; i < 10; i++)
    {
        printf("%d ", crr[i]);
    }

    return 0;
}


//  9. Reverse the Given Array 
#include <stdio.h>
int main()
{
    int arr[10];
    int n, i;

    printf("Enter size of array : ");
    scanf("%d", &n);

    printf("Enter array elements :\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Reverse array : ");

    for(i = n - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}


// 10. Sort the Array
#include <stdio.h>
int main()
{
    int arr[10];
    int n, i, j;
    int temp;

    printf("Enter size of array : ");
    scanf("%d", &n);

    printf("Enter array elements :\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n - 1; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("Sorted array : ");

    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}