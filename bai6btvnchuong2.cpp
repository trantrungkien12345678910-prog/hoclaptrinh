#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    const double PI = 3.14159;
    double r;
    cout << "Ban kinh hinh tron la: ";
    cin >> r;
    cout << "Dien tich hinh tron co ban kinh la " << r << " = " << PI * pow(r,2) << endl;
    return 0;
}