// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
int main()
{
    // Write C code here

    // if((words[i] >= 65 && words[i] <= 90) || words[i] >= 97 && words[i] <= 122){
    //         for(int j = 0 ; )
    //     }
    int n;
    scanf("%d", &n);
    char words[101];
    scanf("%s", words);
    int length = strlen(words);
    int count = 0;
    for (int i = 0; i < length; i++)
    {

        if ((words[i] >= 65 && words[i] <= 90))
        {
            words[i] = words[i] + 32;
        }

    }


    
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (words[j] == words[i])
            {
                count++;
                // printf("%c\n" , words[i]);
                break;
            }
        }
    }

    // printf("%d", count);
    int check = length - count;
    if (check == 26)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    // printf("%d", length-count);
    return 0;
}