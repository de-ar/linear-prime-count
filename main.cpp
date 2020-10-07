#include <chrono>
#include <iostream>
using namespace std;
using namespace chrono;

const long long int& isPrime(const long long int& n) {
	for (long long int i = 2; i < n; i++) {
		if (n % i == 0)
			return false;
	}
	return true;
}

const long long int& countPrimes(const long long int& n) {
	long long int count = 0;
	bool flag = false;
	for (long long int i = 2; i <= n; i++) {
		if (isPrime(i)) count++;
	}
	return count;
}

int main() {
	auto start = high_resolution_clock::now();

	cout << "Prime Count: " << countPrimes(1000000) << "\n\n";

	auto finish = high_resolution_clock::now();

	duration<double> elapsed = finish - start;
	cout << "execution time:\t" << elapsed.count() << "\n\n";
	return 0;
}
