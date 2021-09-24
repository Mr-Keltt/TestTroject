#define _USE_MATH_DEFINES
#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;
    
double s(double a)
{
    return (a * a - (a / 2) * (a / 2) * M_PI) / 2;
}

void inputAndOutput()
{
    double a;
    cout << "Введите длину стороны квадрата: ";
    cin >> a;
    cout << setprecision(3) << s(a) << endl;
}

void inteface()
{
    while (true)
    {
        char check;
        cout << "Вы хотите произвести рассчет? (да: 1, нет: 0): ";
        cin >> check;

        if (check == 48)
        {
            break;
        }
        else if (check == 49)
        {
            inputAndOutput();
        }
        else
        {
            cout << "Введены не коректные значения, попробуйте еще раз." << endl;
        }
    }
}

int main()
{
    setlocale(0, "");
    inteface();
}