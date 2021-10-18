// Lab_4.3.cpp
// < Онишківа Остапа >
// Лабораторна робота No 4.3
// Табуляція функції, заданої формулою: функція з параметрами
// Варіант 5

#include<iostream>
#include<cmath>
#include <iomanip>
using namespace std;

int main()
{
	double x, xp, xk, dx, a, b, c, F;

	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;

	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(7) << "x" << " |"
		<< setw(10) << "F" << " |" << endl;
	cout << "---------------------------" << endl;

	x = xp;

	while (x <= xk)
	{
		if (x < 0 && b != 0)
		{
			F = a - x / (10 + b);
		}
		else
			if (x > 0 && b == 0)
			{
				F = (x - a) / (x - c);
			}
			else
			{
				F = 3 * x + 2 / c;
			}

		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << F
			<< " |" << endl;

		x += dx;
	}

	cout << "---------------------------" << endl;

	return 0;
}