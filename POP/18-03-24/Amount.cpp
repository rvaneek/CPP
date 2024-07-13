#include <bits/stdc++.h>
using namespace std;
main()
{
	int amount;
	cout << "Enter the Amount : ";
	cin >> amount;

	cout << "2000 Notes : " << amount / 2000 << endl;
	amount %= 2000;
	cout << "1000 Notes : " << amount / 1000 << endl;
	amount %= 1000;
	cout << "500 Notes : " << amount / 500 << endl;
	amount %= 500;
	cout << "200 Notes : " << amount / 200 << endl;
	amount %= 200;
	cout << "100 Notes : " << amount / 100 << endl;
	amount %= 100;
	cout << "50 Notes : " << amount / 50 << endl;
	amount %= 50;
	cout << "Remaining : " << amount << endl;
}