// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int n ;
    scanf("%d" , &n);
    int fiboNacci[n] ;
    fiboNacci[0] = 0 ;
    fiboNacci[1] = 1 ;
    
    for(int i = 2 ; i<n ; i++){
        fiboNacci[i] = fiboNacci[i-1] + fiboNacci[i-2];
    }
    
    
    for(int i = 0 ; i<n ; i++){
        printf("%d " , fiboNacci[i]);
    }
    return 0;
}