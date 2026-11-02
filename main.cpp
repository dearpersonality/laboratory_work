#include <iostream>
#include <iomanip>
#include <cmath>
#include <windows.h>
using namespace std;

const double PI = 3.141592653589793;

double fA(double alpha, double x);
double fB(double x, double y);
double fractional_part(int a, double b);

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    double alpha, x, y, B, result;
    int A;

    cout << "Введіть значення alpha (в градусах): ";
    cin >> alpha;
    cout << "Введіть значення x: ";
    cin >> x;
    cout << "Введіть значення y: ";
    cin >> y;

    if ((y - x) == 0 || x <= 0) {
        cout << "Помилка: неприпустимі значення!" << endl;
    }
    else {
        A = (int)fA(alpha, x);
        B = fB(x, y);
        result = fractional_part(A, B);

        cout << fixed << setprecision(4);
        cout << "A = " << A << endl;
        cout << "B = " << B << endl;
        cout << "A - B = " << result << endl;
    }
    return 0;
}

double fA(double alpha, double x) {
    double alphaRad = alpha * PI / 180.0;
    double term1 = pow(cos(alphaRad - 90.0 * PI / 180.0), 2);
    double term2 = pow(cos(3.0 * x / 4.0), 2);
    double term3 = sqrt(2.0 * x);
    return term1 + term2 - term3;
}

double fB(double x, double y) {
    double numerator1 = pow(pow(y, 3) - x, 2);
    double denominator1 = pow(y - x, 3);
    double numerator2 = pow(fabs(y - x), 3);
    double denominator2 = pow(x, 1.0 / 5.0);
    return numerator1 / denominator1 + numerator2 / denominator2;
}

double fractional_part(int a, double b) {
    double diff = a - b;
    int intPart = (int)diff;
    return diff - intPart;
}
