/*
Write a function called is_within() that takes a character and a string pointer as
its two function parameters. Have the function return a nonzero value (true) if the
character is in the string and zero (false) otherwise. Test the function in a
complete program that uses a loop to provide input values for feeding to the
function
*/


#include <stdio.h>
#include <string.h>
#define SIZE 25

int is_within(char str[], char ch_to_find);


int main(){
    char string[SIZE]; 
    char find;

    while(1) {// run loop until break
    printf("\nEnter a string (or type 'exit' to quit): ");
    fgets(string, SIZE, stdin); 
     // Remove the newline character if present
     string[strcspn(string, "\n")] = '\0';

     if (strcmp(string, "exit") == 0) { //exit input
            break;
    }
    printf("Enter a character to find:");
    scanf("%c", &find);
    while (getchar() != '\n');  // Clear input buffer
    

if (is_within(string,find ))  {

    printf("Character '%c' found in the string. \n", find);

}  else {

    printf("Character '%c'is NOT found in the string. \n",find);
    }
    }
 printf("Exited program\n");
    return 0;
}


int is_within(char str[], char ch_to_find) {
 if (strchr(str, ch_to_find) != NULL)
 {
   return 1;
 } else {

    return 0;
 }


 
}