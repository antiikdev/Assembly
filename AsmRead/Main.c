/*
 * Assembly x64 "Intel" (MASM) testing with C
 * Read standard input from user
 * @author Antiik.dev
 * @version 2 September 2023
 */
#include <stdio.h>

extern int readMyInput(FILE * input);


// Main for testing
int main(int argc, char **argv) {

	// Read from user standard input (external Assembly method reading.asm)
	int result = readMyInput(stdin);

	// Test for errors
	if (result == -1) {
		perror("Error opening file");
		return 1;
	}

	printf("Your input character read: %c\n", (char)result);

	return 0;
}

/*
 * Sources for issues solved
 * - Issue with LNK2019: Macro assembler was not selected as a type. https://stackoverflow.com/questions/33751509/external-assembly-file-in-visual-studio
 *
 */