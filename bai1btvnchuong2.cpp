#include <iostream>
using namespace std;

int main()
{
    int x;
    cout << "Nhap so nguyen duong co 3 chu so la: ";
    cin >> x;
    cout << "Chu so hang tram la: " << x/100 << endl;
    cout << "Chu so hang chuc la: " << (x / 10) % 10 << endl;
    cout << "Chu so hang don vi la: " << x % 10 << endl;
    return 0;
}