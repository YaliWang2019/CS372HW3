#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int Foo(int a, int b) {
	return a + b;
}

int main() {

	// Lambda functions are similar to anonymous functions
	
	// Simple example
	//int c = [](int a, int b) -> int { // int on the latter part is the returning type
	//return a + b;

	//}(1, 2);

	//auto f = [](int a, int b) -> int { // int on the latter part is the returning type
	//	return a + b;
	//};
	//c = f(1, 2);
	//cout << c << endl;

	// Function nested in another function
	// Could be used in multithreading and parallel
	int c = [](int m) {
		return [m](int n) {
		return m + n;
		}(1);
	}(2);
	cout << c << endl;


}

