#include <bits/stdc++.h>
using namespace std;
main()
{
	int Days;
	cout << "Enter No. of Days : ";
	cin >> Days;

	int years = Days / 365;
	Days %= 365;

	int months = Days / 30;
	Days %= 30;

	int weeks = Days / 7;
	Days %= 7;

	cout << "Years : " << years << endl;
	cout << "Months : " << months << endl;
	cout << "Weeks : " << weeks << endl;
	cout << "Days : " << Days << endl;
}