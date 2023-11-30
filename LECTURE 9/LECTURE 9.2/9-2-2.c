#include <stdio.h>

int main()
{
    char desired_email[] = "admin@gmail.com";
    char desired_password[] = "123456";

    char user_email[100];
    char user_password[100];

    printf("ENTER YOUR EMAIL= ");
    scanf("%s", user_email);
    printf("ENTER YOUR PASSWORD= ");
    scanf("%s", user_password);

    int email_match = 1;
    int password_match = 1;

    for (int i = 0; desired_email[i] != '\0' || user_email[i] != '\0'; i++)
    {
        if (desired_email[i] != user_email[i])
        {
            email_match = 0;
            break;
        }
    }

    for (int i = 0; desired_password[i] != '\0' || user_password[i] != '\0'; i++)
    {
        if (desired_password[i] != user_password[i])
        {
            password_match = 0;
            break;
        }
    }

    if (email_match && password_match)
    {
        printf("login SUCCESSFULL...\n");
    }
    else
    {
        printf("Login Failed!. INVELID CREDINTIAL\n");
    }
}
