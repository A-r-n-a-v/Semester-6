#include <iostream>
#include <string>

using namespace std;

class FATHER {
    public:
        string q1, q2, q3;

        FATHER() {
            getline(cin, q1);
            getline(cin, q2);
            getline(cin, q3);
        }
        
        void father_quality() {
            cout << q1 << endl;
            cout << q2 << endl;
            cout << q3 << endl;
        }
};

class MOTHER {
    public:
        string q4, q5, q6;

        MOTHER() {
            getline(cin, q4);
            getline(cin, q5);
            getline(cin, q6);
        }
    
        void mother_quality() {
            cout << q4 << endl;
            cout << q5 << endl;
            cout << q6 << endl;
        }
};

class CHILD: public FATHER, public MOTHER {
    public:
        void child_quality() {
            father_quality();    
            mother_quality();    
            cout << " CHILD has all the qualities of their parents.";
        }
};

int main()
{
    CHILD c;
    c.child_quality();

    return 0;
}
