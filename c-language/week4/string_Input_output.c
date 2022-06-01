/* 
 gets() ===> new line by line get input
 scanf ====> token by token get input
fgets  =====> remove buffer over
 */



#include <stdio.h>

int main()
{
  char str [10] ;
  fgets(str,100 ,stdin);
  printf("%s", str);
    return 0;
}