// 1. Find Minimum and Maximum
#include <stdio.h>
#include <stdlib.h>
void minMax(int arr[], int n);
int main()
{
    int *arr;
    int n, i;

    printf("Enter size of array : ");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));

    if(arr == NULL)
    {
        printf("Memory allocation failed");
        return 0;
    }

    printf("Enter array elements : ");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    minMax(arr, n);

    free(arr);

    return 0;
}
void minMax(int arr[], int n)
{
    int i;
    int min = arr[0];
    int max = arr[0];

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
}

// 2. Search Given Number in Array
#include <stdio.h>
#include <stdlib.h>
void searchNumber(int arr[], int n, int no);
int main()
{
    int *arr;
    int n, i, no;

    printf("Enter size of array : ");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));

    if(arr == NULL)
    {
        printf("Memory allocation failed");
        return 0;
    }

    printf("Enter array elements : ");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter number to search : ");
    scanf("%d", &no);

    searchNumber(arr, n, no);

    free(arr);

    return 0;
}
void searchNumber(int arr[], int n, int no)
{
    int i;
    int found = 0;

    for(i = 0; i < n; i++)
    {
        if(arr[i] == no)
        {
            printf("Number found at index %d\n", i);
            found = 1;
            break;
        }
    }
    if(found == 0)
    {
        printf("Number not found\n");
    }
}

// 3. Find Sum of All Numbers
#include <stdio.h>
#include <stdlib.h>
int sumArray(int arr[], int n);
int main()
{
    int *arr;
    int n, i;
    int result;

    printf("Enter size of array : ");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));

    if(arr == NULL)
    {
        printf("Memory allocation failed");
        return 0;
    }

    printf("Enter array elements : ");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    result = sumArray(arr, n);

    printf("Sum = %d\n", result);

    free(arr);

    return 0;
}
int sumArray(int arr[], int n)
{
    int i;
    int sum = 0;

    for(i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }

    return sum;
}

// 4. Find Odd and Even Numbers
#include <stdio.h>
#include <stdlib.h>
void oddEven(int arr[], int n);
int main()
{
    int *arr;
    int n, i;

    printf("Enter size of array : ");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));

    if(arr == NULL)
    {
        printf("Memory allocation failed");
        return 0;
    }
    printf("Enter array elements : ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    oddEven(arr, n);

    free(arr);

    return 0;
}
void oddEven(int arr[], int n)
{
    int i;

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
}

// 5. Print Alternate Elements
#include <stdio.h>
#include <stdlib.h>
void alternate(int arr[], int n);
int main()
{
    int *arr;
    int n, i;

    printf("Enter size of array : ");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));

    if(arr == NULL)
    {
        printf("Memory allocation failed");
        return 0;
    }

    printf("Enter array elements : ");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    alternate(arr, n);

    free(arr);

    return 0;
}
void alternate(int arr[], int n)
{
    int i;

    printf("Alternate elements : ");

    for(i = 0; i < n; i = i + 2)
    {
        printf("%d ", arr[i]);
    }
}


// 6. Print Prime Numbers from Array
#include <stdio.h>
#include <stdlib.h>
int prime(int no);
void printPrime(int arr[], int n);
int main()
{
    int *arr;
    int n, i;

    printf("Enter size of array : ");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));

    if(arr == NULL)
    {
        printf("Memory allocation failed");
        return 0;
    }

    printf("Enter array elements : ");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printPrime(arr, n);

    free(arr);

    return 0;
}
int prime(int no)
{
    int i;

    if(no < 2)
    {
        return 0;
    }
    for(i = 2; i < no; i++)
    {
        if(no % i == 0)
        {
            return 0;
        }
    }

    return 1;
}
void printPrime(int arr[], int n)
{
    int i;

    printf("Prime numbers : ");

    for(i = 0; i < n; i++)
    {
        if(prime(arr[i]) == 1)
        {
            printf("%d ", arr[i]);
        }
    }
}

// 7. Add Two Arrays into Third Array
#include <stdio.h>
#include <stdlib.h>
void addArray(int arr[], int brr[], int crr[], int n);
int main()
{
    int *arr;
    int *brr;
    int *crr;
    int n, i;

    printf("Enter size of arrays : ");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));
    brr = (int *)malloc(n * sizeof(int));
    crr = (int *)malloc(n * sizeof(int));

    if(arr == NULL || brr == NULL || crr == NULL)
    {
        printf("Memory allocation failed");
        return 0;
    }

    printf("Enter first array elements : ");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter second array elements : ");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &brr[i]);
    }

    addArray(arr, brr, crr, n);

    printf("Third array : ");

    for(i = 0; i < n; i++)
    {
        printf("%d ", crr[i]);
    }

    free(arr);
    free(brr);
    free(crr);

    return 0;
}
void addArray(int arr[], int brr[], int crr[], int n)
{
    int i;

    for(i = 0; i < n; i++)
    {
        crr[i] = arr[i] + brr[i];
    }
}

// 8. Merge Two Arrays
#include <stdio.h>
#include <stdlib.h>
void mergeArray(int arr[], int brr[], int crr[], int n);
int main()
{
    int *arr;
    int *brr;
    int *crr;
    int n, i;

    printf("Enter size of arrays : ");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));
    brr = (int *)malloc(n * sizeof(int));
    crr = (int *)malloc(2 * n * sizeof(int));

    if(arr == NULL || brr == NULL || crr == NULL)
    {
        printf("Memory allocation failed");
        return 0;
    }

    printf("Enter first array elements : ");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter second array elements : ");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &brr[i]);
    }

    mergeArray(arr, brr, crr, n);

    printf("Merged array : ");

    for(i = 0; i < 2 * n; i++)
    {
        printf("%d ", crr[i]);
    }

    free(arr);
    free(brr);
    free(crr);

    return 0;
}
void mergeArray(int arr[], int brr[], int crr[], int n)
{
    int i;

    for(i = 0; i < n; i++)
    {
        crr[i] = arr[i];
    }
    for(i = 0; i < n; i++)
    {
        crr[i + n] = brr[i];
    }
}

// 9. Reverse the Array
#include <stdio.h>
#include <stdlib.h>
void reverseArray(int arr[], int n);
int main()
{
    int *arr;
    int n, i;

    printf("Enter size of array : ");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));

    if(arr == NULL)
    {
        printf("Memory allocation failed");
        return 0;
    }

    printf("Enter array elements : ");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    reverseArray(arr, n);

    free(arr);

    return 0;
}
void reverseArray(int arr[], int n)
{
    int i;

    printf("Reverse array : ");

    for(i = n - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
}

// 10. Sort the Array
#include <stdio.h>
#include <stdlib.h>
void sortArray(int arr[], int n);
int main()
{
    int *arr;
    int n, i;

    printf("Enter size of array : ");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));

    if(arr == NULL)
    {
        printf("Memory allocation failed");
        return 0;
    }

    printf("Enter array elements : ");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    sortArray(arr, n);

    printf("Sorted array : ");

    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    free(arr);

    return 0;
}
void sortArray(int arr[], int n)
{
    int i, j;
    int temp;

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
}