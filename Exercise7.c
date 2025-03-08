/*
Write a function called string_in() that takes two string pointers as arguments.
If the second string is contained in the first string, have the function return the
address at which the contained string begins. For instance, string_in("hats",
"at") would return the address of the a in hats. Otherwise, have the function
return the null pointer. Test the function in a complete program that uses a loop
to provide input values for feeding to the function.
*/

#include <stdio.h>
#include <string.h>

char* string_in(char *first, const char *second);
void remove_newline(char *str);

int main() {
    char first[100], second[100];
    char *result;

    // Loop for user input
    while (1) {
        printf("Enter the first string (or 'exit' to quit): ");
        
        fgets(first, sizeof(first), stdin);
        // Remove newline character from input
        remove_newline(first);


      // Exit condition (corrected)
        if (strcmp(first, "exit") == 0) {  
            break;
        }
        printf("Enter the second string: ");
        fgets(second, sizeof(second), stdin);
        // Remove newline from from input
        remove_newline(second);

        result = string_in(first, second);

        if (result != NULL) {
            printf("The second string starts at: %d\n", result  - first);
        } else {
            printf("The second string was not found in the first string.\n");
        }
    }

    return 0;
}



char* string_in(char *first, const char *second) {

    return strstr(first, second);
}

//remove newline
void remove_newline(char *str) {
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';  // Remove the newline character
    }
}