// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
     int s,t,x;
    scanf("%d %d %d",&s,&t,&x);
    if(s <= t && t > x){
        printf("Yes");
    }else if(s > t && s <= x){
        printf("Yes");
    }else if(s > t && x < t){
        printf("Yes");
    }else {
        printf("No");
    }
    
    return 0;
}