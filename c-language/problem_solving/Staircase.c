#include <stdio.h>

/*Birthday Cake Candles Code in C*/
int main()
{
    int i ,j,r;
    int n ;
    scanf("%d" , &n);
    for (i = 1; i <= n; i++){
        int t = n - (i);
        for(r= 1 ; r <=t ; r++){
            printf(" ");
        }
        int pattern = i;
        for(j = 1 ; j<=pattern ; j++){
            printf("#") ;
        }
    
        printf("\n");
    }


    return 0;
}
