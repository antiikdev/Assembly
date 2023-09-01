/*
 * Assembly x64 "Intel" testing with C++
 * Array testing
 * @author Antiik.dev
 * @version 28 August 2023
 */
#include <iostream>

extern "C" void initialiseArray(int[]);

void initialiseArrayTwo(int array[]) {
	for (int i = 0; i < 5; i++) {
		array[i] = 0;
	}
}


// Main for testing
int main() {
	const int size = 5;
	int arrayOne[size];
	int arrayTwo[size];

	// TODO: array size given as a function variable
	initialiseArray(arrayOne);
	initialiseArrayTwo(arrayTwo);

	std::cout << "ArrayOne indexes are ";
	for (int i = 0; i < size; i++) {
		std::cout << arrayOne[i] << " ";
	}

	std::cout << "\n";

	std::cout << "ArrayTwo indexes are ";
	for (int i = 0; i < 5; i++) {
		std::cout << arrayTwo[i] << " ";
	}

	return 0;

}


