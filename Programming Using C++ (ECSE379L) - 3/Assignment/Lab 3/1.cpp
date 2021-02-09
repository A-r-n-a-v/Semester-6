#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
	int r1, r2;
    cin >> r1 >> r2;
    int a1 = 3.14*r1*r1, a2 = 3.14*r2*r2;
    cout << "AC1 = " << a1 << endl;
    cout << "AC2 = " << a2 << endl;
    cout << "radius of third circle = " << fixed << setprecision(2) << sqrt((a1+a2)/(3.14)) << endl;
    
    return 0;
}
