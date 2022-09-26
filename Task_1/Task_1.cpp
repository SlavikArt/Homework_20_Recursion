#include <iostream>
using namespace std;

void Foo(int n)
{
	cout << n << "\n";
	if (n != 0)
		Foo(char(255) + n);
}

int main()
{
	Foo(10);
}