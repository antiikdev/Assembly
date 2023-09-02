/*
 * Assembly x64 "Intel" (MASM) testing with C++
 * Array initialisation
 * @author Antiik.dev
 * @version 28 August 2023
 */
#include <iostream>

// Declaration of external C function:
extern "C" void initialiseArray(int array[], int size);


// Initialises an array
void initialiseArrayTwo(int array[], int size) {
	for (int i = 0; i < size; i++) {
		array[i] = 0;
	}
}


// Prints an array
void printArray(int array[], int size) {
	std::cout << "Array indexes are ";
	for (int i = 0; i < size; i++) {
		std::cout << array[i] << " ";
	}

	// \n into output stream and flush beffer
	std::cout << std::endl;
}


// Main for testing
int main() {
	const int size = 5;
	int arrayOne[size];
	int arrayTwo[size];

	// Initialises an array with Assembly method:
	initialiseArray(arrayOne, size);
	// Initialises an array with C++ method:
	initialiseArrayTwo(arrayTwo, size);

	// Print the two arrays:
	printArray(arrayOne, size);
	printArray(arrayTwo, size);

}


