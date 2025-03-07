/*


The strncpy(s1,s2,n) function copies exactly n characters from s2 to s1,
truncating s2 or padding it with extra null characters as necessary. The target
string may not be null-terminated if the length of s2 is n or more. The function
returns s1. Write your own version of this function. Test the function in a
complete program that uses a loop to provide input values for feeding to the
function.
*/  

#include <stdio.h>
#include <string.h>
#define SIZE 25


char *str_2_cpy(char *destination, const char *source, size_t n);


int main () {

    while (1) {
    char S1[SIZE];
    char S2[SIZE];

    printf("Enter a value: \n");

    fgets(S2, SIZE, stdin); 
    // Remove the newline character if present
    S2[strcspn(S2, "\n")] = '\0';
    if (strcmp(S2, "exit") == 0) { //exit input
        break;
    }
    str_2_cpy(S1, S2, SIZE-1);
    printf("Copied string: %s\n", S1);

}

return 0;

}

char *str_2_cpy(char *destination, const char *source, size_t n){

    size_t i;
    
for ( i = 0; i < n && source[i] != '\0'; i++) {

    
    destination[i] = source[i];


}
//padding with null chars

while (i < n) {

    destination[i++] = '\0';
}


return destination;

}

