/*
 * Assembly x64 "Intel" testing with C++
 * Return function in Assembly (return.asm)
 */
#include <iostream>

using namespace std;
// External function to this file with "C" calling convention:
extern "C" int TestReturnFunction();


// Main for testing
int main() {
	cout << "Result is: " << TestReturnFunction() << endl;
	return 0;

}

