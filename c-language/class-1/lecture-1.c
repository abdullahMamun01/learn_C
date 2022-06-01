// Introduce to c programming 

/* 
   Rule1: Variable name can only have-
   1.Uppercase character
   2.Lowercase character
   3.Underscore
   4.digit

   Role2 : Varible name can not start with digit .

   * Escape Sequence in C  : https://www.javatpoint.com/escape-sequence-in-c

   * Format Specifiers in C : https://www.freecodecamp.org/news/format-specifiers-in-c/
 */

#include <stdio.h>

int main()
{
    // Write C code here
    int price;     // int represent for integer number or vlue ;
    int marks;     // int refer for integer number or vlue
    float celcius; // float for represent decimal value
    price = 20 + 30;
    marks = 89 ;
    price = marks - price ; //89 - 50 = 39 ;
    price = marks + price ; // 89 + 39 
    printf(" %d\n ", price); // 128

    celcius = 34.89 ;
    price = marks - celcius ; 
    printf(" %d \n " , price); // show result integer value because of price is integer value


    float decimalNum = 45.44 ;

    printf("decimal value is = %f\n" , decimalNum);

    int _name = 33 ;
    printf("%d" , _name);

    return 0;
}