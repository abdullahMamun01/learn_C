// Online C compiler to run C program online

/* 
 strcmp(string,string2);

 1.if value is negative - 1s string is smaller
 2.if value is 0 both are equal
 3.if value if positiv - 2nd string is smaller

 */
#include <stdio.h>
#include <string.h>

int main() {
    // Write C code here
   char a[100] ,b[100] ;
   scanf("%s %s" ,a ,b);
   int val = strcmp(a ,b);
   printf("%d " , val);
    
    return 0;
}