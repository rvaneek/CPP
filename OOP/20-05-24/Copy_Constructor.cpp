#include <bits/stdc++.h>
using namespace std;
// class Test
// {
// 	int id;
// 	string msg;

// public:
// 	Test(int id, string msg) : id(id), msg(msg)
// 	{
// 		cout << "Parameterized constructor" << endl;
// 	}
// 	Test(Test &obj) : id(obj.id), msg(obj.msg)
// 	{
// 		cout << "Copy constructor" << endl;
// 	}
// 	void print()
// 	{
// 		cout << "id: " << id << endl;
// 		cout << "msg: " << msg << endl;
// 	}
// };

class Int
{
	int *a;

public:
	Int(int a) : a(new int[a]) {}
	int operator[](int a)
	{
		return (this->a)[a - 1];
	}
	void input(int i)
	{
		cin >> a[i];
	}
	friend istream& operator>>(std::istream &in, Int &arr, int i)
	{
		in >> a[i];
	}
};

int main()
{
	Int arr(8);
	for (int i = 1; i <= 8; i++)
		cin >> arr;

	for (int i = 1; i <= 8; i++)
		cin >> arr[i];
}