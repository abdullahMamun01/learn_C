// #include <stdio.h>

// int main()
// {
//     // const double PI = 3.14159;
//     // double radius;
//     // printf("enter radisu value :");
//     // scanf("%lf", &radius);
//     // double v =( 4 / 3.0 * PI * radius * radius * radius );
//     // printf("VOLUME = %.3f", v);
//     // int height,width;
//     // printf("Enter height of rectangle: ");
//     // scanf("%d" , &height);
//     // printf("Enter width of rectangle:");
//     // scanf("%d" , &width);
//     // printf("Area is %d\n", height * width);

//     // printf("peremeter is %d", 2*(height+width));
//     int a, b, sum;
//     printf("enter two digit number :");
//     scanf("%d %d", &a , &b);
//     sum = a + b ;
//     printf("total sum  = %d", sum);

//     return 0;
// }

#include <stdio.h>

int main()
{
    int harry, larry;
    int total_can = 10;
    scanf("%d %d", &harry , &larry) ;
    printf("%d %d \n", total_can - harry , total_can - larry);
    return 0;
}