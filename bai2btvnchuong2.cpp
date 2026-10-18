#include <iostream> 
#include <cmath>
using namespace std;

int main()
{
    double xA,yA,xB,yB;
    cout << "Toa do diem A la: ";
    cin >> xA >> yA;
    cout << "Toa do diem B la: ";
    cin >> xB >> yB;
    cout << "Do dai doan AB la: " << sqrt(pow(xB-xA,2)+pow(yB-yA,2)) << endl;
    return 0;
}
