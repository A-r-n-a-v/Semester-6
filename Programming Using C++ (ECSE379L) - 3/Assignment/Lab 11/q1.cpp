#include<iostream>
using namespace std;
class student {
    
protected:
    int r, m1, m2;
public:

    void get() {
        cin>>r;
        cin >> m1>>m2;
    }
};

class sports {
protected:
    int s;
public:
    void getsm() {
        cin>>s;

    }
};

class statement : public student, public sports {
    int total, avg;
public:

    void display() {
        total = (m1 + m2 + s);
        avg = total / 3;
        cout << "Roll No: " << r <<endl;
        cout<< "Total marks: " << total<<endl;
        cout << "Average marks: " << avg<<endl;
    }
};

int main() {
    statement obj;
    obj.get();
    obj.getsm();
    obj.display();
    return 0;
}