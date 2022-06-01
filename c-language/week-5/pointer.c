// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int a = 20 ;
    int* pval = &a ;
    printf("%p address has %d\n", pval , *pval);
    a = 50 ;
    printf("%p address has %d\n", pval , *pval);
    int val2 = 100 ;
    pval = &val2 ; // adress change
    printf("%d\n" ,a) ;
     printf("%p address has %d\n", pval , *pval);
      a= 22 ;
     *pval = 5000 ; 
     
     printf("%d\n" ,a) ;
     printf("%p address has %d\n", pval , *pval);
    return 0;
}