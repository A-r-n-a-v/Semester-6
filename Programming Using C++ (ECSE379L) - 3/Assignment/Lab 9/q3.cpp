#include <iostream>
using namespace std;

class ProblemSolution{

	//write your code here
	public:
        ~ProblemSolution(){
            cout << "Destructor called";
        }

};

int main(){
    ProblemSolution problemSolution;
    return 0;
}