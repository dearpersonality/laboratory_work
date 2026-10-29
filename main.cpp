#include <iostream>
#include <iomanip>
#include <cmath>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    double x, y, z;
    double sum = 0, mul = 1;

    cout << "Введіть x: ";
    cin >> x;
    for (int k = 1; k <= 5; k++)
    {
        sum += k + pow(x, 4);
    }
    y = (pow(x, 3) + pow(sin(x), 2) - 3) / sum;
    cout << "Y = " << y << endl;

    cout << "Введіть y: ";
    cin >> y;
    for (int m = 1; m <= 5; m++)
    {
        mul *= m;
    }
    z = tan(mul) + pow(y, 5);
    cout << "Z = " << z << endl;

    return 0;
}
