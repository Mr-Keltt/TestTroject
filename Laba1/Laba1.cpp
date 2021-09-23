#define _USE_MATH_DEFINES
#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;
    
int main()
{
    setlocale(0, "");
    double a;
    cout << "Введите длину стороны квадрата: ";
    cin >> a;
    cout << setprecision(3) << (a * a - (a / 2) * (a / 2) * M_PI) / 2;
}