#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a = 5;
    cout << fixed << "V = " << (double)a * a * a << endl;
    cout << "S = " << 4.0 * (a * a) << endl;
    return 0;
}