#include "pch.h"
#include <iostream>

using namespace std;

int main() {
	int sum;
	cin >> sum;
	for (int a = 1; a < sum; a++)
		for (int b = a + 1; b < sum - a; b++) { //b merge de la a pana la sum-a, ca altfel depaseste.
			int c = sum - a - b; //Calculez c in fct de a,b ca sa obt complexitate mai buna.
			if (a * a + b * b == c * c) {
				cout << a << " " << b << " " << c << "\n" << a * b * c;
				return 0;
			}
		}
	return 0;
}