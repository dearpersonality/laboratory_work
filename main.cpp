#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a;
    cout << "input a: ";
    cin >> a;
    cout << fixed << "V = " << (double)a * a * a << endl;
    cout << "S = " << 4.0 * (a * a) << endl;
    return 0;
}