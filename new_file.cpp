#include <iostream>
#include <iomanip>
#include <cmath>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(65001);
	SetConsoleCP(65001);

	double a, b, h;
	cout << "Введіть початкове x: = ";
	cin >> a;
	cout << "Введіть кінцеве x: = ";
	cin >> b;
	cout << "Введіть крок x: = ";
	cin >> h;

	double y, x;
	cout << fixed << setprecision(3);

	cout << "\nwhile:" << endl;
	x = a;
	while (x <= b)
	{
		y = tan(x * x) - 3 + 2 * x;
		cout << "x = " << x << setw(10) << "y = " << y << endl;
		x += h;
	}
	cout << "\ndo while:" << endl;
	x = a;
	do
	{
		y = tan(x * x) - 3 + 2 * x;
		cout << "x = " << x << setw(10) << "y = " << y << endl;
		x += h;
	} while (x <= b);

	system("pause");
	return 0;
}