#include <bits/stdc++.h>
using namespace std;
class Test
{
	int id;
	string msg;

public:
	Test(int id, string msg) : id(id), msg(msg)
	{
		cout << "Parameterized constructor" << endl;
	}
	Test(Test &obj) : id(obj.id), msg(obj.msg)
	{
		cout << "Copy constructor" << endl;
	}
	Test operator+(Test obj)
	{
		obj.id = id + obj.id;
		obj.msg = msg + " " + obj.msg;

		return obj;
	}
	void operator++()//PreFix
	{
		id++;
	}
	void operator++(int n)//PostFix
	{
		id++;
	}
	
	void print()
	{
		cout << "id: " << id << endl;
		cout << "msg: " << msg << endl;
	}
};
int main()
{
	Test t1(1, "hello");
	t1.print();
	Test t2(t1);
	t2.print();
	(t1 + t2).print();
}