#include "pch.h"
#include <iostream>

using namespace std;

bool e_pal(int n) {
	int nrn = 0, aux = n;
	while (aux) {
		nrn = nrn * 10 + aux % 10;
		aux /= 10;
	}
	return (nrn == n);
}

int main() {
	int a[901], p = 0;
	for (int i = 100; i <= 999; i++)
		a[++p] = i;

	int max_pal = 0;
	for (int i = 1; i < p; i++)
		for (int j = i; j < p; j++) {
			if (a[i] * a[j] < max_pal)break;
			if (e_pal(a[i] * a[j]))max_pal = a[i] * a[j];
		}
	cout << max_pal;
	return 0;
}