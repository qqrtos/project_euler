#include <iostream>

using namespace std;

/*
	Fac din 2^1000 -> 4^500 ca sa inmultesc de mai putine ori.

	Basically, fac inmultire repetata pe numere mari.
*/

int cif[500], l;

int main() {
	int s = 0;
	cif[++l] = 1;

	for (int k = 1; k <= 500; k++) {
		int r = 0;
		for (int i = 1; i <= l; i++) {
			int nr = cif[i] * 4 + r;
			cif[i] = nr % 10;
			r = nr / 10;
		}
		if (r)cif[++l] = r;
	}

	for (int i = 1; i <= l; i++)
		s += cif[i];
	cout << s;
	return 0;
}