#include <iostream>

using namespace std;

int sum_proper_div(int n) {
	int s = 1;
	for (int d = 2; d <= n / 2; d++)
		if (n % d == 0)s += d;
	return s;
}

int main() {

	return 0;
}


//E gresit. O fac cu map.
/*int main() {
	int a[100001];
	for (int i = 1; i <= 100000; i++)
		a[i] = sum_proper_div(i);

	int s = 0;
	for (int i = 1; i <= 100000; i++)
			if (a[i] == a[a[i]])s += a[i];
	cout << (float)s;
	return 0;
}*/

