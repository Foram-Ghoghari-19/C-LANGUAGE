#include <stdio.h>
int main()
{
    char string[50];
    printf("Enter any string : ");
    scanf("%[^\n]", &string);

    int len = 0, count;

    for (int i = 0; string != '\0'; i++)
        len++;
    for (int i = 0; i < len; i++)
    {
        count = 1;
        for (int j = i + 1; j < len; j++)
            if (string[i] == string[j])
                count++;
        string[i] = NULL;

        printf("%s ===> %d", string[i], count);
    }

    return 0;
}
