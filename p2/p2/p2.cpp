#include "pch.h"
#include <iostream>
#include <math.h>

using namespace std;

//Fi e ratia de aur, inv_fi e conjugata ei.
double fi = (1 + sqrt(5)) / 2;
double inv_fi = (1 - sqrt(5)) / 2;

double power(double a, int e) {
	double rez = 1;
	while (e) {
		if (e % 2 == 0) {
			a *= a;
			e /= 2;
		}
		else {
			rez *= a;
			e--;
		}
	}
	return rez;
}

//Calculez al n-lea Fibonacci cu ratia de aur. 
int fib(int n) {
	return round((power(fi, n) - power(inv_fi, n)) / sqrt(5));
}

//Numerele pare apar din 3 in 3.
int main() {
	int f, r = 3, s = 0;
	unsigned int bound, ind = 3;
	cin >> bound;
	f = fib(ind);
	while (f < bound) {
		cout << f << " ";
		s += f;
		ind += r;
		f = fib(ind);
	}
	cout << "\n" << s;
	return 0;
}