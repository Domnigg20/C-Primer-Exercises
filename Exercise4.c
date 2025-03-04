/*
Design and test a function that searches the string specified by the first function
parameter for the first occurrence of a character specified by the second function
parameter. Have the function return a pointer to the character if successful, and a
null if the character is not found in the string. (This duplicates the way that the
library strchr() function works.) Test the function in a complete program that
uses a loop to provide input values for feeding to the function.
*/


#include <stdio.h>
#include <string.h>

const char* comp_1() {
    return"Hello world";

}



const *find_char(char target) {
    const char* str = comp_1(); //call comp_1 to get string
    char* result = strchr(str, target);

   if (result != NULL) {

    printf("The location of the character %c is at %ld\n", target,  result - str);
   }

   else {
    printf("Character %c not found. \n", target);
   }
}



int main ()

 {
find_char('o'); 

find_char('e');

 return 0;
 }
