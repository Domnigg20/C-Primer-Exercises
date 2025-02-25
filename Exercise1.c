/*

Design and test a function that fetches the next n characters from input (including
blanks, tabs, and newlines), storing the results in an array whose address is
passed as an argument.


*/

#include <stdio.h>
#define SIZE 40


void storeCharacters(char *arr, int n) {

    if (fgets(arr, n + 1, stdin) )// Read n characters (+1 for null terminator)
    {
 
     size_t len = strlen(arr);
 
     if ( len  > 0 && arr[len - 1] == '\n'  ) {
         arr[len - 1] = '\0';// Replace newline with null terminator
 
    }
}
}

int main()

{
    char string[SIZE];
    int n;
    printf("Enter the number of characters to read: ");
    scanf("%d", &n);
    getchar(); // Clear the newline character from the input buffer
    storeCharacters(string, n);
    printf("Stored characters: %s\n", string); // Print the result
    return 0;



}