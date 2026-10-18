#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x, y;
    cout << "Gia tri x la: ";
    cin >> x;
    cout << "Gia tri y la: ";
    cin >> y;
    cout << "Gia tri cua bieu thuc de bai cho = " << (2 * exp(-x+y)) / (1 + pow(x,2) + pow(y,2)) << endl;
    return 0;
}