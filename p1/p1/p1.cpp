#include "pch.h"
#include <iostream>

using namespace std;

int main() {
	int s = 0;
	unsigned int bound;
	cin >> bound;
	for (int i = 1; i < bound; i++)
		if (i % 3 == 0 || i % 5 == 0)
			s += i;
	cout << s;
	return 0;
}