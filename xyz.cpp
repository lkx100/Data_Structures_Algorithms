#include <iostream>
#include <stdio.h>
#include <chrono>

using namespace std;

// Naive recursive Fibonacci function
int fib(int n) {
    if (n <= 1)return n;
    return fib(n - 1) + fib(n - 2);
}

// Constexpr version of the fibonacci function
constexpr int fibConstexpr(int n) {
	return n <= 1 ? n : fibConstexpr(n - 1) + fibConstexpr(n - 2);
}

int main() {

	auto start = chrono::high_resolution_clock::now();
	constexpr int num = 25;

	constexpr int result_c = fibConstexpr(num);

	cout << "Fibonacci of " << num << " is " << result_c << endl;
	cout << "Time Taken: " << chrono::duration_cast<chrono::microseconds>(chrono::high_resolution_clock::now() - start).count() << "ms" << endl;

	start = chrono::high_resolution_clock::now();

	int result = fib(num);

	cout << "Fibonacci of " << num << " is " << result << endl;
	cout << "Time Taken: " << chrono::duration_cast<chrono::microseconds>(chrono::high_resolution_clock::now() - start).count() << "ms" << endl;

	return 0;
}