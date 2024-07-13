#include <bits/stdc++.h>
using namespace std;
main()
{
	int a = 25, b, c;

	// Unary Operator
	c = -a;
	b = +a;
	c = ~a;
	c = a++;
	c = b--;
	c = !b;

	// binary Operator
	c = a + b;
	c = a - b;
	c = a * b;
	c = a / b;
	c = a % b;
	c = a << b;
	c = a >> b;
	c = a ^ b;
	c = a & b;
	c = a | b;
	c = a < b;
	c = a > b;
	c = a <= b;
	c = a >= b;

	// Ternary Operator
	c = a + b > c ? a : b;
}