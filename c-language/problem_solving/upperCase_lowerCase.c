// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
int main()
{
    // Write C code here
    char s[100];
    scanf("%s", s);
    char s2[100];
    scanf("%s", s2);
    int length = strlen(s);
    // printf("%d\n" ,length);
    for (int i = 0; i < length; i++)
    {
        if (s[i] >= 65 && s[i] <= 90)
        {
            s[i] = s[i] + 32;
        }
        if (s2[i] >= 65 && s2[i] <= 90)
        {
            s2[i] = s2[i] + 32;
        }
    }

    // for (int i = 0; i < length; i++)
    // {
    //     if (s2[i] >= 65 && s2[i] <= 90)
    //     {
    //         s2[i] = s2[i] + 32;
    //     }
    // }

    int compare = strcmp(s, s2);
    if (compare == 0)
    {
        printf("0");
    }
    else if (compare < 0)
    {
        printf("-1");
    }
    else
    {
        printf("1");
    }

    return 0;
}