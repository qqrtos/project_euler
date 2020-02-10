#include <iostream>
#include <vector>
#define MIL 999999

using namespace std;

/*
	Vectorul v[] retine la indicele x
	care e lungimea secventei date de numarul x.

	In cazul in care numarul x n-a mai aparut
	in secventa, calculeaza lungimea secventei din x 
	si o retine in v[x].

	Daca obtin un numar a carui lungime am calculat-o
	deja il adun la lungimea curenta si ma opresc din
	calcul.
*/

int v[MIL];

int collatz_length(long long x) {
	int l = 0;
	while (x != 1) {
		if (x > MIL) { //Caz special ca fac figuri indicii.
			if (x % 2 == 0)x /= 2;
			else x = x * 3 + 1;
			++l;
		}
		else {
			if (v[x] == 0) {
				if (x % 2 == 0)x /= 2;
				else x = x * 3 + 1;
				++l;
			}
			else {
				l += v[x];
				return l;
			}
		}
	}
	return l + 1; //+1 pt ca nu numar pct de plecare (primul x)
}

int main() {
	int m = 0, nr;
	v[1] = 0;
	for (int i = 2; i <= MIL; i++) {
		int current = collatz_length(i);
		v[i] = current;
		if (current > m) {
			m = current;
			nr = i;
		}
	}
	cout << nr << " with length:   " << m << "\n";
	return 0;
}