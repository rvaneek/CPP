#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a = 2, b = 3;
	a += ++a + b++;
	cout << a << " " << b << endl;

	a = 2;
	a = ++a + a++ + ++a;
	cout << a << endl;

	a = 2, b = 3;
	a *= --a + b-- + a--;
	cout << a << b << endl;

	a = 3, b = 5;
	a %= a++ - b-- - ++a;
	cout << a << b << endl;

	a = 5, b = -6;
	cout << a % b << " " << b % a << endl;
}