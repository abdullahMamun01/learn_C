// Online C compiler to run C program online
#include <stdio.h>



int max (int a , int b){
    if(a < b){
        return b ;
    }else{
        return a ;
    }
}



int getMax(int n , int arr[]){
    int ans = arr[0] ;
    for(int i = 0 ; i<n ; i++){
        ans = max(ans , arr[i]);
    }
    return ans ;
}


int main() {
    // Write C code here
    int n ;
    scanf("%d" , &n);
    int arr[n] ;
    for(int i = 0 ; i<n ; i++){
        scanf("%d" , &arr[i]);
    }
    
    int max = getMax(n , arr);
    
    printf("%d" , max);
    return 0;
}