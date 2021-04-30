#include <iostream>

using namespace std;


class Complex{
public:
  float real;
  float imgnry;

  Complex(){
    this->real = 0.0;
    this->imgnry = 0.0;
  }

  Complex(float real, float imgnry){
    this->real = real;
    this->imgnry = imgnry;
  }

  Complex operator+(const Complex &obj){
    Complex temp;
    temp.imgnry = this->imgnry + obj.imgnry;
    temp.real = this->real + obj.real;
    return temp;
  }

  Complex operator-(const Complex &obj){
    Complex temp;
    temp.imgnry = this->imgnry - obj.imgnry;
    temp.real = this->real - obj.real;
    return temp;
  }

  void display(){
    cout << this->real << "+" << this->imgnry << "i" << endl;
  }
    
};
 
int main()
{
    Complex num1, num2, temp;
    float r, i;
    cin >> r >> i;

    num1.real = r;
    num1.imgnry = i;
    cin >> r >> i;
    
    num2.real = r;
    num2.imgnry = i;
    cout << "Input Values:" << endl;
    
    num1.display();
    num2.display();
    cout << "Result:" << endl;
    
    temp = num1 + num2;
    temp.display();
    
    temp = num1 - num2;
    temp.display();
    
    return 0;
}