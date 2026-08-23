/*1.  Write a program to scan string from user then scan a single character and search it 
in a accepted string. */ 
#include <stdio.h>
int main()
{
    char str[100];
    char ch;
    int i, found = 0;

    printf("Enter string : ");
    scanf(" %[^\n]", str);

    printf("Enter character to search : ");
    scanf(" %c", &ch);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ch)
        {
            printf("Character found at index %d\n", i);
            found = 1;
            break;
        }
    }
    if(found == 0)
    {
        printf("Character not found");
    }

    return 0;
}

// 2. WAP Replace all Occurrences of ‘a’ with $ in a String
#include <stdio.h>
int main()
{
    char str[100];
    int i;

    printf("Enter string : ");
    scanf(" %[^\n]", str);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == 'a')
        {
            str[i] = '$';
        }
    }
    printf("New string : %s", str);

    return 0;
}


// 3. WAP to Remove the nth Index Character from a Non-Empty String 
#include <stdio.h>
int main()
{
    char str[100];
    int n, i;

    printf("Enter string : ");
    scanf(" %[^\n]", str);

    printf("Enter index to remove : ");
    scanf("%d", &n);

    for(i = n; str[i] != '\0'; i++)
    {
        str[i] = str[i + 1];
    }
    printf("New string : %s", str);

    return 0;
}

// 4. WAP to Form a New String where the First Character and the Last Character have been Exchanged 
#include <stdio.h>
int main()
{
    char str[100];
    char temp;
    int i, len = 0;

    printf("Enter string : ");
    scanf(" %[^\n]", str);

    while(str[len] != '\0')
    {
        len++;
    }

    temp = str[0];
    str[0] = str[len - 1];
    str[len - 1] = temp;

    printf("New string : %s", str);

    return 0;
}

// 5. WAP to Count the Number of Vowels in a String 
#include <stdio.h>

int main()
{
    char str[100];
    int i;
    int count = 0;

    printf("Enter string : ");
    scanf(" %[^\n]", str);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == 'a' || str[i] == 'e' ||
           str[i] == 'i' || str[i] == 'o' ||
           str[i] == 'u' ||
           str[i] == 'A' || str[i] == 'E' ||
           str[i] == 'I' || str[i] == 'O' ||
           str[i] == 'U')
        {
            count++;
        }
    }
    printf("Number of vowels = %d", count);

    return 0;
}

// 6. WAP to Take in a String and Replace Every Blank Space with special symbol. 
#include <stdio.h>
int main()
{
    char str[100];
    int i;

    printf("Enter string : ");
    scanf(" %[^\n]", str);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ' ')
        {
            str[i] = '*';
        }
    }
    printf("New string : %s", str);

    return 0;
}

// 7. WAP to Remove the Characters of Odd Index Values in a String 
#include <stdio.h>
int main()
{
    char str[100];
    int i, j = 0;

    printf("Enter string : ");
    scanf(" %[^\n]", str);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(i % 2 == 0)
        {
            str[j] = str[i];
            j++;
        }
    }

    str[j] = '\0';
    printf("New string : %s", str);

    return 0;
}

//8. WAP to Calculate the Number of Words Present in a String 
#include <stdio.h>
int main()
{
    char str[100];
    int i;
    int count = 0;

    printf("Enter string : ");
    scanf(" %[^\n]", str);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] != ' ' &&
           (i == 0 || str[i - 1] == ' '))
        {
            count++;
        }
    }
    printf("Number of words = %d", count);

    return 0;
}

//9. WAP to Take in Two Strings and Display the Larger String without Using Built-in Functions 
#include <stdio.h>
int main()
{
    char str1[100];
    char str2[100];

    int i;
    int len1 = 0;
    int len2 = 0;

    printf("Enter first string : ");
    scanf(" %[^\n]", str1);

    printf("Enter second string : ");
    scanf(" %[^\n]", str2);

    for(i = 0; str1[i] != '\0'; i++)
    {
        len1++;
    }

    for(i = 0; str2[i] != '\0'; i++)
    {
        len2++;
    }

    if(len1 > len2)
    {
        printf("Larger string = %s", str1);
    }
    else if(len2 > len1)
    {
        printf("Larger string = %s", str2);
    }
    else
    {
        printf("Both strings are of same length");
    }

    return 0;
}

//10.  Write a program to check the string is palindrome or not. 
#include <stdio.h>
int main()
{
    char str[100];
    int i, j;
    int flag = 1;

    printf("Enter string : ");
    scanf(" %[^\n]", str);

    for(i = 0; str[i] != '\0'; i++)
        j = i - 1;
        i = 0;
    while(i < j)
    {
        if(str[i] != str[j])
        {
            flag = 0;
            break;
        }

        i++;
        j--;
    }
    if(flag == 1)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }

    return 0;
}