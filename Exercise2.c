/*

Modify and test the function in exercise 1 so that it stops after n characters or
after the first blank, tab, or newline, whichever comes first. (Don't just use
scanf().)
*/


#include <stdio.h>
#include <string.h> // Include string.h for strlen
#define SIZE 40

void findcharacter(char *arr, int n) {
    int i;
    char ch;

    for ( i = 0; i < n; i++) {

        ch = getchar(); //read one character at a time
    
            if (ch == '\n' || ch == ' ' || ch == '\t') {
                break; // Stop at the first match
            }

            arr[i] = ch; //store that character


    
        }

        arr[i] = '\0'; // null terminate the string

    }

int main() {
    char string[SIZE];
    int n;

    printf("Enter the number of characters to read: ");
    fgets(string, sizeof(string), stdin);  // Read number as a string
    n = atoi(string);
    printf("Enter text: ");
    findcharacter(string, n); // Read the characters into the string
    printf("Stored characters: %s\n", string); // Print the result

    return 0;
}
