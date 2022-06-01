/* 
Zafir started to attend programming lessons. On the first lesson his task was to write a simple program. The program was supposed to do the following: in the given string, consisting if uppercase and lowercase Latin letters, it:

deletes all the vowels,
inserts a character "." before each consonant,
replaces all uppercase consonants with corresponding lowercase ones.
Vowels are letters "A", "O", "Y", "E", "U", "I", and the rest are consonants. The program's input is exactly one string, it should return the output as a single string, resulting after the program's processing the initial string.

Help Zafir cope with this easy task.


 */


// Online C compiler to run C program online
#include <stdio.h>
#include<string.h>
int main() {
    /*
     "A", "O", "Y", "E", "U", "I"
    //  .c.d.f.r.c.s
    */
    // Write C code here
   char a[100];
   scanf("%s" , a);
   int len = strlen(a) ;
  for(int i = 0 ;i<len ; i++){
        if (a[i] >= 65 && a[i] <= 90)
        {
            a[i] = a[i] + 32;
        }
  }
   
  for(int i =0 ; i < len ; i++){
      if((a[i] == 'a' || a[i] == 'o' || a[i]=='y' ||a[i] =='u'|| a[i] =='e' ||a[i]=='i' )){
          continue ;
      }
      
      
     printf(".%c" , a[i]);
       
  }
  
    return 0;
}