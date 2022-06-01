// Online C compiler to run C program online
#include <stdio.h>
#include<stdbool.h>
int main() {
    // Write C code here
    printf("enter two numbe  :");
    int a , b;
    int gcd = 0 ;
    scanf("%d %d" , &a , &b) ;
    while(a !=  0) {
        int rem = b % a ;
        b = a ;
        a = rem ;
        printf("%d %d\n" , a , b);
    };
    
    printf("%d",b );
    return 0;
}