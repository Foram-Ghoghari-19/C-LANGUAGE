#include <stdio.h>
int main()
{
    char string1, string2;
    int len1 = 0, len2 = 0, com = 0, i;

    printf("Enter First string : ");
    scanf("%[^\n]", &string1);
    printf("Enter Secoend string : ");
    scanf("%[^\n]", &string2);

    for (i = 0; string1 != NULL; i++)
        len1++;
    for (i = 0; string2 != NULL; i++)
        len2++;

    if (len1 == len2)
    {
        for (i = 0; i < len1; i++)
        {
            if (string1[i] == string2[i])
                com++;
        }

        (len1 == com)
            ? printf("Given string is same !!")
            : printf("Given string is not same !!");
    }

    else
        printf("Given string is not same !!");

    return 0;
}
