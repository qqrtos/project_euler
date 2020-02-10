#include "pch.h"
#include <iostream>

using namespace std;

//Calculeaza cel mai mare factor al lui n.
int mare_factor(long long n) {
	int f = 3, m = 2;
	while (n % 2 == 0)n /= 2;
	while (n != 1) {
		while (n % f == 0)n /= f;
		m = f;
		f += 2;
	}
	return m;
}

int main() {
	long long nr;
	cin >> nr;
	cout << mare_factor(nr);
	return 0;
}