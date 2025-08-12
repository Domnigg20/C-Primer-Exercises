
/*


Write a program that takes two command-line arguments. The first is a string;
the second is the name of a file. The program should then search the file, printing
all lines containing the string. Because this task is line oriented rather than
character oriented, use fgets() instead of getc(). Use the standard C library
function strstr() (briefly described in exercise 7 of Chapter 11) to search each
line for the string.
*/

#include <stdio.h>
#include<string.h>
#include <stdlib.h>
#define LEN 256


// 2 CMD LINE 1 string, another name of file
int main(int argc, char *argv[]) {

char line[LEN];

    if (argc != 3)
	{
		printf("Usage: %s <char> [file1] [file2] ...\n", argv[0]);
		exit(EXIT_FAILURE);
	}

	char *search = argv[1];
    FILE *fp;

 for (int i = 2; i < argc; i++)
		{
			
			if ((fp = fopen(argv[2], "r")) == NULL)
			{
				fprintf(stderr, "Can't open file %s\n", argv[2]);
				continue;
			}


            while (( fgets(line, LEN, fp )) != NULL) {
                  if (strstr(line, argv[1]) != NULL) {
                    printf("%s", line);
        // print line or do something

            }

			fclose(fp);
		}




}
}
