#include "pch.h"
#include <iostream>

using namespace std;

int ap[50];

//Ridicare la putere.
int powR(int a, int e) {
	int rez = 1;
	while (e)
		if (e % 2 == 0) {
			a *= a;
			e /= 2;
		}
		else {
			rez *= a;
			--e;
		}
	return rez;
}


//Pun intr-un array exponentul cel mai mare al unui factor prim gasit in numerele pana la n.
//Ex: pt 10 nu schimb nimic in array, pt ca am pus deja 2^3 de la 8 si 5^1 de la 5.
void array_div(int n) {
	for (int i = 2; i <= n; i++) {
		int aux = i, d = 2;
		while (aux != 1) {
			int e = 0;
			while (aux % d == 0) {
				++e;
				aux /= d;
			}
			if (e > ap[d])ap[d] = e;
			++d;
		}
	}
}

int main() {
	int n; cin >> n;
	array_div(n);

	/**for (int i = 1; i <= n; i++)
		cout << ap[i] << "  ";
	cout << "\n\n";**/

	//Calculez cel mai mic nr divizibil cu toate nr mai mici decat n.
	int rez = 1;
	for (int i = 2; i <= n; i++)
		rez *= powR(i, ap[i]);
	cout << rez;
	return 0;
}