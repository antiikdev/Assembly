/*
 * Assembly x64 "Intel" testing with C++
 * Array testing
 * @author Antiik.dev
 * @version 28 August 2023
 */
#include <iostream>

extern "C" void initialiseArray(int[]);


// Main for testing
int main() {
	const int size = 5;
	int array[size];

	// TODO: array size as a function variable
	initialiseArray(array);

	std::cout << "Array indexes are ";
	for (int i = 0; i < size; i++) {
		std::cout << array[i] << " ";
	}


	return 0;

}

