#include "pch.h"
#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

ifstream fin("citire.txt");

//Citesc matricea ca string, pt ca sunt legate cifrele intre ele.
//Iau elementele ca intr-un queue si le calculez produsul, determinandu-l pe cal mai mare.
void citire(char a[20][50], int p) {
	int prod_m = 0, cif[1001];
	for (int i = 0; i < 20; i++) {
		/**for (int k = 0; k < p; k++) {
			fin >> a[i][k];
			cif[k] = a[i][k] - '0';
		}**/
		fin >> a[i][0] >> a[i][1] >> a[i][2];
		for (int j = p - 1; j < 50; j++) {
			fin >> a[i][j];
			int m = a[i][j] - '0', n = a[i][j - 1] - '0', p = a[i][j - 2] - '0', q = a[i][j - 3] - '0';
			
			if (m*n*p*q > prod_m) {
				//cout << m << " " << n << " " << p << " " << q << "\n";
				prod_m = m*n*p*q;
			}
		}
		fin.get();
	}
	cout << prod_m;
}

int main() {
	char a[20][50];
	int p;
	cin >> p;
	citire(a, p);

	return 0;
}