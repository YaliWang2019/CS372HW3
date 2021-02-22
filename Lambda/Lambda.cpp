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
	int c = [](int a, int b) -> int { // int on the latter part is the returning type
	return a + b;

	}(1, 2);

	auto f = [](int a, int b) -> int { // int on the latter part is the returning type
		return a + b;
	};
	c = f(1, 2);
	cout << c << endl;


}

