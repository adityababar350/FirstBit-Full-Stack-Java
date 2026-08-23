#include <stdio.h>
/* Function declarations */

void mystrcpy(char str1[], char str2[]);
int mystrlen(char str[]);
int mystrcmp(char str1[], char str2[]);
void mystrcat(char str1[], char str2[]);
void mystrncpy(char str1[], char str2[], int n);
void mystrupper(char str[]);
void mystrlower(char str[]);
void mystrrev(char str[]);
char *mystrstr(char str1[], char str2[]);
int mystrcasecmp(char str1[], char str2[]);
char *mystrchr(char str[], char ch);
char *mystrrchr(char str[], char ch);
int mystrncmp(char str1[], char str2[], int n);
char *mystrnstr(char str1[], char str2[], int n);
void mystrncat(char str1[], char str2[], int n);
int mystrncasecmp(char str1[], char str2[], int n);

int main()
{
    char str1[100] = "Aditya";
    char str2[100] = "Avinash";
    char str3[100];
    char str4[100];

    int result;
    char *ptr;

    // 1. mystrcpy()
    mystrcpy(str3, str1);
    printf("1. mystrcpy : %s\n", str3);

    // 2. mystrlen()
    result = mystrlen(str1);
    printf("2. mystrlen : %d\n", result);

    // 3. mystrcmp()
    result = mystrcmp(str1, str2);
    printf("3. mystrcmp : %d\n", result);

    // 4. mystrcat() 
    mystrcpy(str3, str1);
    mystrcat(str3, str2);
    printf("4. mystrcat : %s\n", str3);

    // 5. mystrncpy()
    mystrncpy(str4, str2, 3);
    printf("5. mystrncpy : %s\n", str4);

    // 6. mystrupper() 
    mystrcpy(str3, str1);
    mystrupper(str3);
    printf("6. mystrupper : %s\n", str3);

    // 7. mystrlower()
    mystrcpy(str3, "HELLO");
    mystrlower(str3);
    printf("7. mystrlower : %s\n", str3);

    // 8. mystrrev() 
    mystrcpy(str3, str1);
    mystrrev(str3);
    printf("8. mystrrev : %s\n", str3);

    // 9. mystrstr() 
    ptr = mystrstr("Aditya Avinash", "Avinash");
    if(ptr != NULL)
        printf("9. mystrstr : %s\n", ptr);
    else
        printf("9. mystrstr : Not Found\n");

    // 10. mystrcasecmp() 
    result = mystrcasecmp("Aditya", "ADITYA");
    printf("10. mystrcasecmp : %d\n", result);

    // 11. mystrchr() 
    ptr = mystrchr("Aditya", 'i');
    if(ptr != NULL)
        printf("11. mystrchr : %s\n", ptr);
    else
        printf("11. mystrchr : Not Found\n");

    // 12. mystrrchr() 
    ptr = mystrrchr("Aditya", 'i');
    if(ptr != NULL)
        printf("12. mystrrchr : %s\n", ptr);
    else
        printf("12. mystrrchr : Not Found\n");

    // 13. mystrncmp() 
    result = mystrncmp("Aditya", "Aditya", 3);
    printf("13. mystrncmp : %d\n", result);

    // 14. mystrnstr() 
    ptr = mystrnstr("Aditya", "Avinash", 11);
    if(ptr != NULL)
        printf("14. mystrnstr : %s\n", ptr);
    else
        printf("14. mystrnstr : Not Found\n");

    // 15. mystrncat() 
    mystrcpy(str3, "Aditya");
    mystrncat(str3, "Avinash", 3);
    printf("15. mystrncat : %s\n", str3);

    // 16. mystrncasecmp() 
    result = mystrncasecmp("Aditya", "ADITYA", 5);
    printf("16. mystrncasecmp : %d\n", result);

    return 0;
}

// 1. mystrcpy() 
void mystrcpy(char str1[], char str2[])
{
    int i = 0;

    while(str2[i] != '\0')
    {
        str1[i] = str2[i];
        i++;
    }
    str1[i] = '\0';
}

// 2. mystrlen() 
int mystrlen(char str[])
{
    int i = 0;

    while(str[i] != '\0')
    {
        i++;
    }
    return i;
}

// 3. mystrcmp() 
int mystrcmp(char str1[], char str2[])
{
    int i = 0;

    while(str1[i] != '\0' && str2[i] != '\0')
    {
        if(str1[i] != str2[i])
        {
            return str1[i] - str2[i];
        }
        i++;
    }
    return str1[i] - str2[i];
}

// 4. mystrcat() 
void mystrcat(char str1[], char str2[])
{
    int i = 0;
    int j = 0;

    while(str1[i] != '\0')
    {
        i++;
    }
    while(str2[j] != '\0')
    {
        str1[i] = str2[j];
        i++;
        j++;
    }
    str1[i] = '\0';
}

// 5. mystrncpy() 
void mystrncpy(char str1[], char str2[], int n)
{
    int i;

    for(i = 0; i < n && str2[i] != '\0'; i++)
    {
        str1[i] = str2[i];
    }
    str1[i] = '\0';
}

// 6. mystrupper() 
void mystrupper(char str[])
{
    int i = 0;

    while(str[i] != '\0')
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
        i++;
    }
}

// 7. mystrlower() 
void mystrlower(char str[])
{
    int i = 0;

    while(str[i] != '\0')
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
        i++;
    }
}

// 8. mystrrev() 
void mystrrev(char str[])
{
    int i = 0;
    int j;
    char temp;

    while(str[i] != '\0')
    {
        i++;
    }
    j = i - 1;
    i = 0;
    while(i < j)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;

        i++;
        j--;
    }
}

// 9. mystrstr() 
char *mystrstr(char str1[], char str2[])
{
    int i, j;

    for(i = 0; str1[i] != '\0'; i++)
    {
        j = 0;

        while(str2[j] != '\0' &&
              str1[i + j] == str2[j])
        {
            j++;
        }
        if(str2[j] == '\0')
        {
            return &str1[i];
        }
    }
    return NULL;
}

// 10. mystrcasecmp()
int mystrcasecmp(char str1[], char str2[])
{
    int i = 0;
    char ch1, ch2;

    while(str1[i] != '\0' && str2[i] != '\0')
    {
        ch1 = str1[i];
        ch2 = str2[i];

        if(ch1 >= 'A' && ch1 <= 'Z')
        {
            ch1 = ch1 + 32;
        }
        if(ch2 >= 'A' && ch2 <= 'Z')
        {
            ch2 = ch2 + 32;
        }
        if(ch1 != ch2)
        {
            return ch1 - ch2;
        }
        i++;
    }
    return str1[i] - str2[i];
}

// 11. mystrchr() 
char *mystrchr(char str[], char ch)
{
    int i = 0;

    while(str[i] != '\0')
    {
        if(str[i] == ch)
        {
            return &str[i];
        }

        i++;
    }
    return NULL;
}

// 12. mystrrchr()
char *mystrrchr(char str[], char ch)
{
    int i = 0;
    char *ptr = NULL;

    while(str[i] != '\0')
    {
        if(str[i] == ch)
        {
            ptr = &str[i];
        }
        i++;
    }
    return ptr;
}

// 13. mystrncmp()
int mystrncmp(char str1[], char str2[], int n)
{
    int i;

    for(i = 0; i < n; i++)
    {
        if(str1[i] != str2[i])
        {
            return str1[i] - str2[i];
        }
        if(str1[i] == '\0' || str2[i] == '\0')
        {
            break;
        }
    }
    return 0;
}

// 14. mystrnstr() 
char *mystrnstr(char str1[], char str2[], int n)
{
    int i, j;

    for(i = 0; i < n && str1[i] != '\0'; i++)
    {
        j = 0;

        while(str2[j] != '\0' &&
              i + j < n &&
              str1[i + j] == str2[j])
        {
            j++;
        }

        if(str2[j] == '\0')
        {
            return &str1[i];
        }
    }
    return NULL;
}

// 15. mystrncat() 
void mystrncat(char str1[], char str2[], int n)
{
    int i = 0;
    int j = 0;

    while(str1[i] != '\0')
    {
        i++;
    }
    while(str2[j] != '\0' && j < n)
    {
        str1[i] = str2[j];

        i++;
        j++;
    }
    str1[i] = '\0';
}

// 16. mystrncasecmp() 
int mystrncasecmp(char str1[], char str2[], int n)
{
    int i;
    char ch1, ch2;

    for(i = 0; i < n; i++)
    {
        ch1 = str1[i];
        ch2 = str2[i];

        if(ch1 >= 'A' && ch1 <= 'Z')
        {
            ch1 = ch1 + 32;
        }
        if(ch2 >= 'A' && ch2 <= 'Z')
        {
            ch2 = ch2 + 32;
        }
        if(ch1 != ch2)
        {
            return ch1 - ch2;
        }
        if(ch1 == '\0' || ch2 == '\0')
        {
            break;
        }
    }
    return 0;
}