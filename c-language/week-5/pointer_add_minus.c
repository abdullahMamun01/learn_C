// Online C compiler to run C program online
#include <stdio.h>

int main() {
    //pointer is add minus
    // pointer add and minus work as data type btyes 
    // like int is 8 byte so its address will be change as a 8 bytes
    double a = 12.00 ;
    double* pval = &a ;
    printf("%lld \n" , pval , a);
    pval++ ;
     printf("%lld\n" , pval , a);
    return 0;
}