#include <algorithm>
#include <iostream>
#include <thread>
#include <vector>
#include <chrono>
#include <functional>

using namespace std;

std::function<void()> Fun;

void callBack(std::function<void()> fun) {
	cout << "This is a callback. \n";
	fun();
}

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
	//int c = [](int m) {
	//	return [m](int n) {
	//	return m + n;
	//	}(1);
	//}(2);
	//cout << c << endl;

	// Formula adder = kn.(kx.(+ x n))
	//auto f = [](int n) {
	//	return [n](int x) {
	//		return n + x;
	//	};
	//};

	//int c = f(1)(2);

	//cout << c << endl;

	// Lambda executed as a thread parameter
	//string s = "test";
	//thread f = thread([&s](int a, int b) {
	//	cout << s << endl;
	//	cout << a + b << endl;
	//}, 2, 3);
	//f.join();
	
	// Lambda callBack
	callBack([]() {
		cout << "This is a lambda. \n" <<endl;
	});
	system("pause");
}

