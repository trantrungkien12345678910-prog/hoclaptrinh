#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double xA,yA,xB,yB,xC,yC;
    cout << "Toa do diem A la: ";
    cin >> xA >> yA;
    cout << "Toa do diem B la: ";
    cin >> xB >> yB;
    cout << "Toa do diem C la: ";
    cin >> xC >> yC;
    cout << "Do dai doan thang AB= " << sqrt(pow(xB-xA,2)+pow(yB-yA,2)) << endl;
    cout << "Do dai doan thang AC= " << sqrt(pow(xC-xA,2)+pow(yC-yA,2)) << endl;
    cout << "Do dai doan thang BC= " << sqrt(pow(xC-xB,2)+pow(yC-yB,2)) << endl;
    return 0;
}
