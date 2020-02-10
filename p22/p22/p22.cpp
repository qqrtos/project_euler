#include <iostream>
#include <fstream>
#include <string.h>
#pragma warning(disable:4996)

using namespace std;

ifstream fin("p022_names.txt");

int main() {
	char m[5000][40]; int l = 0;
	char s[50000];
	fin >> s;
	
	int i = 0;
	while (i != strlen(s)) {
		int subl = 0; char sub[40];
		while (s[i] != '"' && s[i] != ',') {
			sub[subl++] = s[i];
			++i;
		}
		if (subl != 0)
			strcpy(m[l++], sub);
		++i;
	}
	return 0;
}