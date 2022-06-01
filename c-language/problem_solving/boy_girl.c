// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
int main()
{
    // Write C code here
    char checkId[101];
    scanf("%s", checkId);
    int length = strlen(checkId);
    int count = 0;
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (checkId[j] == checkId[i])
            {
                // printf("%c\n" , checkId[i]);
                count++;
                break;
            }
        }
    }
    int distinct = length - count;
    if (distinct % 2 == 0)
    {
        printf("CHAT WITH HER!");
    }
    else
    {
        printf("IGNORE HIM!");
    }
    return 0;
}