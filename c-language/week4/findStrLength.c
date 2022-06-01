/*
 gets() ===> new line by line get input
 scanf ====> token by token get input
fgets  =====> remove buffer over
strcpy(wherecopy,whichCopy);
strncpy(wherecopy,whichCopy,length);

**strncpy is safe .

if sure str characert is perfect use strcpy otherwise strncpy

** without null('\0') string can not end ;
 */

#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = "Hello shakib";
    int len = 0;

    while (str[len] != '\0')
    {
        len++;
    }

    printf("length = %d\n", len);

    // using build in function

    int stringLength = strlen(str);

    printf("length2 = %d\n", stringLength);

    return 0;
}
