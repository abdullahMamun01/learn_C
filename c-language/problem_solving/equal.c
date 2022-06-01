// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int n ;
    scanf("%d" , &n);
    int arr[n];
    for(int i = 0; i<n ; i++){
        scanf("%d", &arr[i]);
    }
    int largest = arr[0] ;
    for(int i = 0; i<n ; i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }
    int equal = 0 ;
    for(int i = 0 ; i< n ; i++){
        int temp = largest - arr[i];
        equal += temp ;
    }
    
    
    printf("%d",equal);
    
    
    return 0;
}