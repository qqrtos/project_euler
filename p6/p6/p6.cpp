#include "pch.h"
#include <iostream>

using namespace std;

int suma_patratelor(int n) {
	return (n * (n + 1) * (2 * n + 1)) / 6;
}

int patratul_sumei(int n) {
	return (n * (n + 1) * n * (n + 1)) / 4;
}

int main() {
	int n; cin >> n;
	cout << patratul_sumei(n) - suma_patratelor(n);
	return 0;
}