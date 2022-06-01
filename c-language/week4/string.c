/*
  string is a all of character

  *A string is any series of characters that are interpreted literally by a script

 */
//\0  = null  ;
    #include <stdio.h>

    int main()
{
    char str[] = "This is a String" ;
    printf("%s\n", str);
    int sizeOfStr = sizeof(str) /sizeof (str[0]);
    for(int i =0 ; i<sizeOfStr ; i++){
        printf("%c => %d\n", str[i] , str[i]);
    }

    return 0;
}