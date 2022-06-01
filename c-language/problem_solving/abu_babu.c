// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int n ;
    scanf("%d" , &n) ;
    int p , q ;
    int count = 0 ;
    int both = 2 ;
    int check =0 ;
    for(int i =1 ; i<= n ; i++){
        scanf("%d %d" , &p , &q);
        check = q - p ;
        if(both <= check ){
            count ++ ;
        }else{
            count = count ;
        }
    }
   printf("%d" , count) ;
    
    return 0;
}