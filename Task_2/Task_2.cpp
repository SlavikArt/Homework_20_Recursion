#include <iostream>
using namespace std;

int Fibo(int index)
{
	if (index == 0)
		return 0;
	if (index == 1)
		return 1;
	return Fibo(index - 1) + Fibo(index - 2);
}

int main()
{
	cout << Fibo(2) << "\n";
	cout << Fibo(5) << "\n";
	cout << Fibo(10) << "\n";
}