#include "pch.h"
#include <iostream>

using namespace std;

struct v_marcat {
	int val;
	bool viz = 0;
}a[500000];

int main() {
	//Generez primele 1000000 de numere [mai putin multiplii de 2, care nu sunt primi) - didn't work.]
	//Sper ca al 10001-lea nr. prim e intre primele 500000-1 numere...
	int p = 0, i = 2;
	while (p < 500000) {
		a[++p].val = i;
		i++;
	}

	//Parcurg toate elementele si le marchez multiplii ca fiind vizitati.
	for (int i = 1; i <= p; i++) {
		int r = a[i].val;
		for (int j = i + r; j <= p; j+=r)
			a[j].viz = 1;
	}

	int k = 0;
	for (int i = 1; i <= p; i++) {
		if (a[i].viz == 0) k++;
		if (k == 10001) { cout << "\n" << a[i].val << "\n"; return 0; }
	}
	return 0;
}