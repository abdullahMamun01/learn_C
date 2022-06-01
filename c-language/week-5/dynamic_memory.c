// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
int main() {
    // Write C code here
    int n ;
    scanf("%d" ,&n);
    int *a = (int*) malloc(n * sizeof(int)) ;
    
    for(int i = 0 ; i<n ; i++){
        scanf("%d" , &a[i]);
    }
    int sum = 0 ;
    for(int i = 0 ; i<n ; i++){
        sum += a[i];
    }
    printf("%d", sum);
    return 0;
}