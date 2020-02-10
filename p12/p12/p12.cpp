#include "pch.h"
#include <iostream>

using namespace std;

//Descompun in factori primi.
//Divizorii se obtin ca un fel de produs cartezian intre multimile factorilor primi la diversi exponenti.
//Inmultesc cu (e+1), nu cu e, deoarece vreau sa iau si cazurile in care exponentul e 0.
int n_div(int t) {
	int nd = 1, d = 2;
	while (t != 1) {
		int e = 0;
		while (t%d == 0) {
			t /= d;
			++e;
		}
		nd *= (e + 1);
		++d;
	}
	return nd;
}

int main() {
	int nrd;
	cin >> nrd;

	int t = 1;
	while (n_div(t*(t + 1) / 2) < nrd) {
		++t;
	}
	cout << t * (t + 1) / 2;
	return 0;
}