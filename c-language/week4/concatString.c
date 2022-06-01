
/* 
 strncat(whereCopy,whichCopy,totalCopy len)

 */
#include <stdio.h>
#include <string.h>
int main()
{
    char a[] = "Hello" ;
    char b[] = "World";
    strncat(a,b,5);
    // for(int i = 0 ; i< lena ;i++){
    //     a[lena+i] = b[i];

    // }
    a[10] = '\0';
    printf("%s\n" , a);
    return 0;
}
