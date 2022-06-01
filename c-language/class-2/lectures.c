
/*
 Class 2

   modulas operator does not exist on floating point value ;

   example:   double a = 10 ;
              double b = 3 ;
              double c = a % b ;
              printf("modulas %lf ", c ); // error throw

  Assignment Operators : = ;
  Arethmethic assignment operator =  += ,-= , /= , *=  ;

 */

#include <stdio.h>

int main()
{
    int a = 10;
    int b = 3;
    double c = (double)a / (double)b; // tupe convertion
    printf("vagshesh = %d / %d =  %lf \n", a, b, c);
    printf("vagshesh %lf / %lf = %lf\n", (double)a, (double)b, c); // type convertion
    printf("total number = 3 + 3 ") ;

    return 0;
}