#include<stdio.h>
main()
{
    char name[5];
    printf("ENTER NAME= ");
    scanf("%s",&name);
    for (int i = 0; i < 5; i++)
    {
        if (name[i]>=97 && name[i]<=122)
        {
            name[i]=name[i]-32;
        }
    }
    printf("UPPERCASE STRING = %s",name);
}
