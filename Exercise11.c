/*


Write a program that reads input up to EOF and reports the number of words, the
number of uppercase letters, the number of lowercase letters, the number of
punctuation characters, and the number of digits. Use the ctype.h family of
functions.


*/


#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    int UPPER = 0;
    int LOWER = 0;
    int digits = 0 ;
    int punct = 0 ;

    char ch;

    printf("Enter a set of words:\n");
    while ((ch = getchar()) != EOF)
	{
			
                //count upper
                if (isupper(ch)) {

                    UPPER++;
                }
                else if (islower(ch)) {

                //count lower
                    LOWER ++;
                }
                //count digits
                else if (isdigit(ch)) {

                    digits ++;

                }

                // coun number of punctuations.
                 if (ispunct(ch)) {

                    punct ++;
                }

            }

printf("Input  has %d upper character(s))\n", UPPER);
printf("Input has %d lower character(s)\n", LOWER);
printf("Input  has %d punctuated character(s)\n", punct);
printf("Input has %d number of digit(s)\n",  digits);


return 0;
}