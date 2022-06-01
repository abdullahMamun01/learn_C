#include <stdio.h>
#include <stdlib.h>
// #include <stdbool.h>
int main() {
    // Write C code here
    srand(time(0)) ;
    int hidden = rand() % 100 + 1 ;
    printf("%d\n" , hidden);
    int total_guess = 0 ;
    while(total_guess < 5){
        printf("remaining guess : %d\n" , 5 -total_guess) ;
        int input ;
        scanf("%d" , &input);
        if(input == hidden){
            printf("congratulation you are win hidden value is = %d\n" , hidden);
            break ;
        }else if(input > hidden){
            printf("Guess smaller\n");
        }else{
            printf("Guess bigger\n");
        }
        total_guess ++ ;
        if(total_guess == 5){
            printf("your limit is 0 you are lose\n");
            printf("hidden value is = %d" ,hidden);
        }
        
    }
    
    
    return 0;
}