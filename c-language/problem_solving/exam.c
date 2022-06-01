// Online C compiler to run C program online
#include <stdio.h>

int main()
{
    // Write C code here
    int a = 10;

    int b = 20;

    int *p = &a;

    printf("% d % d % d\n", a, b, *p); 

    *p = 30; // a = 30  p =30

    printf("% d % d % d\n", a, b, *p); // a= 30 , b= 30 , p=30

    *p = 20; // a= 20 , p= 20

    a = 50;  // a = 50 p = 50

    b = 10; 

    printf("% d % d % d\n", a, b, *p); // 50 10 50

    p = &b;   // adress shift

    printf("% d % d % d\n", a, b, *p); // 50 10 10 

    a = 20 ; 

    b = 100;

    printf("% d % d % d\n", a, b, *p); // 20 100 100

    return 0;
}