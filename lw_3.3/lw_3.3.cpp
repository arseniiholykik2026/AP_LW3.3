// Голик Арсеній
// Лабораторна робота № 3.3
// Розгалуження, задане графіком функції.
// Варіант 4


#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x;
    double y;
    double R;

    cout << "x = ";
    cin >> x;
    cout << "R = ";
    cin >> R;

    if (x < 0) {
        y = (-R / 6) * (x + 6);
    }
    else if (x >= 0 && x < R) {
        y = -sqrt(R * R - x * x);
    }
    else if (x >= R && x < 2 * R) {
        y = sqrt(R * R - pow(x - 2 * R, 2));
    }
    else {
        y = R;
    }

    cout << "y = " << y;
    return 0;
}

