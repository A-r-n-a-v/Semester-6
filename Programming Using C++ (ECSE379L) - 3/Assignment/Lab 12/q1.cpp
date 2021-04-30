#include <iostream>

using namespace std;

class Shapes {
    public:
        double Area(double r) {
            return 3.142 * r * r;
        }
    
        int Area(int s) {
            return s * s;
        }
    
        int Area(int length, int width) {
            return length * width;
        }
    
        int Area(int length, int width, int height) {
            return 2*length*width + 2*width*height + 2*length*height;
        }   
};

int main(void) {
    double r;
    int l, w, h;
    Shapes shape;
    cin >> r;
    cout << "Area of the Circle is: " << shape.Area(r) << "sq.units" << endl;
    cin >> l;
    cout << "Area of the Square is: " << shape.Area(l) << "sq.units" << endl;
    cin >> l >> w;
    cout << "Area of the Rectangle is: " << shape.Area(l, w) << "sq.units" << endl;
    cin >> l >> w >> h;
    cout << "Area of the cuboid is: " << shape.Area(l, w, h) << "sq.units";
    return 0;
}