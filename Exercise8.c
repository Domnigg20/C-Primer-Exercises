/*
Write a function that replaces the contents of a string with the string reversed.
Test the function in a complete program that uses a loop to provide input values
for feeding to the function.
*/

#include <stdio.h>
#include <string.h>


char *reverse(char *destination, const char *source);
void remove_newline(char *str);


int main () {

    char first[100], second[100];
    char *result;

    while (1) {
    
    printf("Enter a string of characters: \n");
    fgets(first, sizeof(first), stdin);
    // Remove newline character from input
    remove_newline(first);
    

     // Exit condition (corrected)
        if (strcmp(first, "exit") == 0) {  
            break;
        }

    result = reverse(second, first);
    remove_newline(second);


    if (result != NULL) {
        printf("The second string is: %s\n", result);
    } else {
        printf("The first string was not reversed.\n");
    }

}

return 0;

}


char *reverse(char *destination, const char *source) {
int length = 0;
    
// Find length of the source string

while (source[length] != '\0') {
    length++;
}
    //reverse copy
    int j = 0;

    for (int i = length - 1 ; i >= 0 ; i--) {

        destination [j++] = source[i];

    }

    destination[j] = '\0';
    return destination;

    
}


//remove newline
void remove_newline(char *str) {
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';  // Remove the newline character
    }
}