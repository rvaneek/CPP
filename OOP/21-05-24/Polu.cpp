#include <bits/stdc++.h>
using namespace std;
class Manager
{
public:
	virtual void getDetails()
	{
		cout << "Manager getDetails" << endl;
	}
	virtual void print()
	{
		cout << "Manager print" << endl;
	}
};
class Employee : public Manager
{
public:
	void getDetails()
	{
		cout << "Employee getDetails" << endl;
	}
	void print()
	{
		cout << "Employee print" << endl;
	}
};
int main()
{
	Manager *m = new Employee();
	m->getDetails();
	m->print();
	m = new Manager();
	m->getDetails();
	m->print();
}