#include <iostream>
#define MACCS 10000

using namespace std;

/*
	Nimic de explicat aici. E o inmultire pe nr. mari.
*/

void inm_nr_mari(int coef, int v[], int& l) {
	int r = 0;
	for (int i = 1; i <= l; i++) {
		int nr = v[i] * coef;
		v[i] = (nr + r) % 10;
		r = (nr + r) / 10;
	}
	while (r) {
		v[++l] = r % 10;
		r /= 10;
	}
}

int main() {
	int nr; cin >> nr;
	int cif[MACCS], l = 0; 

	cif[++l] = 1;
	for (int i = 2; i <= nr; i++) {
		inm_nr_mari(i, cif, l);
	}

	int s = 0;
	for (int i = 1; i <= l; i++)s += cif[i];
	cout << s;
	return 0;
}