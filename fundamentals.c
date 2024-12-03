#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE		80
#define NUM_INPUT_SIZE	10
#include "fundamentals.h"

void fundamentals()
{
/* Version 1 */
	printf("*** Start of Indexing Strings Demo ***\n");
	char	buffer1[BUFFER_SIZE];
	char	numInput[NUM_INPUT_SIZE];
	size_t	position;
	do {
		printf("Type not empty string (q - to quit):\n");
		fgets(buffer1, BUFFER_SIZE, stdin);
		buffer1[strlen(buffer1) - 1] = '\0';

		//checks if user has quit the program (typed "q")
		if (strcmp(buffer1, "q") != 0) {
			printf("Type the character position within the string:\n");
			fgets(numInput, NUM_INPUT_SIZE, stdin);
			numInput[strlen(numInput) - 1] = '\0';
			position = atoi(numInput);

			//checks if the position entered is a valid location in the string, if it is not the last charcter in the entered string is picked instead
			if (position >= strlen(buffer1)) {
				position = strlen(buffer1) - 1;
				printf("Too big... Position reduced to max. available\n");
			}
			printf("The character found at %d position is \'%c\'\n", (int)position, buffer1[position]);
		}

	//compares the value of buffer1 to "q" and prints "End of Indexing Strings Demo" if they are not the same
	} while (strcmp(buffer1, "q") != 0);
	printf("*** End of Indexing Strings Demo ***\n\n");


/* Version 2 */
	printf("*** Start of Measuring Strings Demo ***\n");
	char buffer2[BUFFER_SIZE];
	do {
		printf("Type a string (q - to quit):\n");

		//gets the length of user input
		fgets(buffer2, BUFFER_SIZE, stdin);
		buffer2[strlen(buffer2) - 1] = '\0';

		//checks if user quit program, if not the length of their input is displayed
		if (strcmp(buffer2, "q") != 0)
			printf("The length of \'%s\' is %d characters\n", buffer2, (int)strlen(buffer2));	


	} while (strcmp(buffer2, "q") !=0);
	printf("*** End of Measuring Strings Demo ***\n\n");

/* Version 3 */
	printf("*** Start of Copying Strings Demo ***\n");

	// create location to store original user input and copy
	char destination[BUFFER_SIZE];
	char source[BUFFER_SIZE];
	do {
		destination[0] = '\0';
		printf("Destination string is reset to empty\n");
		printf("Type the source string (q - to quit):\n");

		//stores user input in source
		fgets(source, BUFFER_SIZE, stdin);

		// add null terminator to end of the coppied source value
		source[strlen(source) - 1] = '\0';

		//checks if user entered q to quit program
		if (strcmp(source, "q") != 0) {
			strcpy(destination, source);
			printf("New destination string is \'%s\'\n", destination);
		}
	} while (strcmp(source, "q") != 0);
	printf("***End of Copying Strings Demo ***\n\n");
} 
