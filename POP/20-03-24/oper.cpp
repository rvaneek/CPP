#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a = 2;
	a = a++;
	cout << a << endl;
	a = ++a;
	cout << a << endl;

	int b = 2;
	b = b++ + b++;
	cout << b << endl;

	a = 2;
	a = a++ + ++a;
	cout << a << endl;

	a = 2;
	a = ++a + a++;

	a = 2;
	a = ++a + ++a;
	cout << a << endl;

	a = 2;
	a = a + a++;
	cout << a << endl;

	a = 2;
	a = a + ++a;
	cout << a << endl;

	
}