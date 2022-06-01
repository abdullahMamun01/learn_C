// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n ;
    scanf("%s", &n);
    char colors[101] ;
    scanf("%s", colors);
    int length = strlen(colors);
    // for(int i = 0 ; i<n ; i++){
    //     scanf("%s", colors[i]);
    // }
    int count = 0 ;
    for(int i = 0 ; i<length ; i++){
            if(colors[i+1] == colors[i]){
                count++ ;
            }
    }
    // printf("%s", colors);
    printf("%d", count);
    return 0;
}