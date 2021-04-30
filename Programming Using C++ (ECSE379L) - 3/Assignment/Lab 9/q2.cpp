#include <iostream>
#include <iomanip>

using namespace std;

class Rectangle{
    private:
        double x, y;
        int width, height;
    public:
        Rectangle(){
            x = 0;
            y = 0;
            width = 1;
            height = 1;
        }
        
        Rectangle(double x_, double y_, int w, int h){
            x = x_;
            y = y_;
            width = w;
            height = h;
        }
    
        int getArea(){
            return width*height;
        }
    
        int getPerimeter(){
            return 2*(width+height);
        }
    
        bool contains(double px, double py){
            double x1, x2, y1, y2;
            x1 = x - width/2.0;
            x2 = x + width/2.0;
            y1 = y - height/2.0;
            y2 = y + height/2.0;
            if(px>=x1 && px<=x2 && py>=y1 && py<=y2){
                return true;
            }
            return false;
        }
};

int main() 
{
    //Write your code here
    long double x_, y_, px, py;
    int w, h;
    cin >> x_ >> y_ >> w >> h >> px >> py;  
    
    Rectangle r1;
    cout << r1.getPerimeter() << endl;
    cout << r1.getArea() << endl;
    cout << boolalpha << r1.contains(0.5, 0.1) << endl;
    
    Rectangle r2(x_, y_, w, h);
    cout << r2.getPerimeter() << endl;
    cout << r2.getArea() << endl;
    cout << boolalpha << r2.contains(px, py);
}