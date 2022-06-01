// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int n ;
    scanf("%d" , &n);
    
    int arr[n] ;
    for(int i = 1 ; i<= n ; i++){
        scanf("%d" , &arr[i]);
    }
    int count[11] = {0};
    for(int i = 1 ; i <= n ; i++){
        int x = arr[i] ;
        count[x]++ ;
        // for(int j = 0 ; j <n ; j++ ){
        //     if(temp == arr[j]){
        //         count[i] = 1 ;
        //     }else{
        //         count[i] = 0 ;
        //     }
        // }
        
    }
    int index = 0 ;
    for(int i = 1 ; i<= n ; i++){
        printf("%d " , count[i]);
        // if(min > count[i]){
        //     index = i ;
        // }
    }
    // printf("%d\n");
    // printf("%d\n" , index+1);
    return 0;
}