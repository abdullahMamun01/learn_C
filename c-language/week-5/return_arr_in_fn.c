// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int * square(int n ){
    int * arr = (int *) malloc(n * sizeof(int));
    for(int i = 0 ; i<n ; i++){
        arr[i] = i * i  ;
    }
    return arr;
}
int main() {
    // Write C code here
    int n ;
    scanf("%d" ,&n);
    int* sq;
    sq = square(n) ;
    for(int i = 0 ; i<n ; i++){
        printf("%d " ,sq[i]);
    }
    
    
    return 0;
}