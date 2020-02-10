#include "pch.h"
#include <iostream>

using namespace std;

//Fac un vector in care pot retine daca am marcat un element.
struct vect {
	int val;
	bool marcat = false;
}a[1000000];
int l = 0; //Lungimea vectorului.

int main() {
	long long s = 0;
	int up;
	a[l++].val = 2; //Pun prima valoare (2) pt ca e singurul nr prim par.
	cin >> up;

	int i = 3;
	while (i < up) {
		a[l++].val = i;
		i += 2;
	}//Pun in vector doar valorile impare, deoarece cele pare sigur nu sunt prime. Bonus, economisesc memorie.

	for (i = 1; i < l; i++) { //Incep de la indicele al 2-lea din vector pt ca multiplii primului element (2) nu sunt primi.
		for (int j = i + a[i].val; j < l; j += a[i].val) //Multiplul lui a[i] se afla pe pozitiile din a[i] in a[i]. Adica poz unui multiplu al lui a[i] = i+a[i]*k.
			a[j].marcat = true; //Marchez multiplul ca fiind vizitat, deoarece il are divizor pe a[i].
	}

	for (int i = 0; i < l; i++)
		if (a[i].marcat == false)s += a[i].val;
	cout << s;
	return 0;
}