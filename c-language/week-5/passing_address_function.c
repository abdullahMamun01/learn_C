// Online C compiler to run C program online
#include <stdio.h>

void swap(int *a , int *b){
    int temp = *a ;
    *a = *b ;
    *b = temp ;
}



int main() {
    // Write C code here
    int x =10 ,y= 20 ;
    swap(&x , &y);
    printf("%d %d", x , y);
    
    return 0;
}