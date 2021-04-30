#include <iostream>
using namespace std;

class Numbers{
public:
    int num;
    Numbers(int num){
        this->num=num;
    }
    
    virtual int compute()=0;
};

class Square: public Numbers{
public:
    Square(int num): Numbers(num){}
    
    int compute(){
        return num*num;
    }
};

class Cube: public Numbers{
public:
    Cube(int num): Numbers(num){}
    
    int compute(){
        return num*num*num;
    }
};
int main(){
    int a, b;
    cin>> a >> b;
    
    Numbers *n;
    Square s(a);
    Cube c(b);
    
    n = &s;
    cout<< "Square is: " << n->compute() << endl;
    n=&c;
    cout<< "Cube is: " << n->compute() << endl;
    
    return 0;
}