// Use around 21 built-in functions of string in program.
#include <stdio.h>
#include <string.h>
int main()
{
    char str1[50] = "Hello";
    char str2[50] = "World";
    char str3[50];
    char str4[50];

    printf("String 1 : %s\n", str1);
    printf("String 2 : %s\n\n", str2);

    // 1. strlen()
    printf("1. strlen  : %lu\n", strlen(str1));

    // 2. strcpy()
    strcpy(str3, str1);
    printf("2. strcpy  : %s\n", str3);

    // 3. strcat()
    strcpy(str3, str1);
    strcat(str3, str2);
    printf("3. strcat  : %s\n", str3);

    // 4. strcmp()
    printf("4. strcmp : %d\n", strcmp(str1, str2));

    // 5. strncpy()
    strncpy(str4, str2, 3);
    str4[3] = '\0';
    printf("5. strncpy : %s\n", str4);

    // 6. strncat()
    strcpy(str3, str1);
    strncat(str3, str2, 3);
    printf("6. strncat : %s\n", str3);

    // 7. strncmp()
    printf("7. strncmp : %d\n", strncmp(str1, str2, 3));

    // 8. strchr()
    printf("8. strchr : %s\n", strchr(str1, 'l'));

    // 9. strrchr()
    printf("9. strrchr : %s\n", strrchr(str1, 'l'));

    // 10. strstr()
    printf("10. strstr : %s\n", strstr("Hello World", "World"));

    // 11. strpbrk()
    printf("11. strpbrk : %s\n", strpbrk("Hello", "aeiou"));

    // 12. strspn()
    printf("12. strspn : %lu\n", strspn("12345abc", "1234567890"));

    // 13. strcspn()
    printf("13. strcspn : %lu\n", strcspn("Hello123", "1234567890"));

    // 14. strcoll()
    printf("14. strcoll : %d\n", strcoll("abc", "xyz"));

    // 15. strxfrm()
    char temp[50];
    printf("15. strxfrm : %lu\n", strxfrm(temp, "Hello", 50));

    // 16. strtok()
    char data[] = "Hello World C";
    char *token;

    printf("16. strtok     : ");
    token = strtok(data, " ");

    while(token != NULL)
    {
        printf("%s ", token);
        token = strtok(NULL, " ");
    }

    printf("\n");

    // 17. memset()
    char arr[20] = "Hello";
    memset(arr, '*', 3);
    printf("17. memset  : %s\n", arr);

    // 18. memcopy()
    char source[] = "FirstBit";
    char destination[20];

    memcpy(destination, source, strlen(source) + 1);
    printf("18. memcpy : %s\n", destination);

    // 19. memmove()
    char moveStr[20] = "ABCDE";

    memmove(moveStr + 2, moveStr, 3);
    moveStr[5] = '\0';

    printf("19. memmove  : %s\n", moveStr);

    // 20. memcmp()
    printf("20. memcmp  : %d\n", memcmp("ABC", "ABC", 3));

    // 21. memchr()
    char text[] = "FirstBit";

    printf("21. memchr   : %s\n",
           (char *)memchr(text, 'B', strlen(text)));

    return 0;
}