#include <iostream>
#include <string.h>

using namespace std;

class Strings {

public:
    string s;
	
	Strings() {}

	Strings(string s)
	{
		this->s = s;
	}

	Strings operator+(Strings &str2)
	{
		Strings temp;
        this->s.append(str2.s);
        temp.s = this->s;
        return temp;
	}
};

int main()
{
	string str1, str2, str3;
    cin >> str1 >> str2 >> str3;
    Strings s1(str1);
    Strings s2(str2);
    Strings s3(str3);
    Strings result;
    result = str1 + str2 + str3;
    cout << "The Concatenated String is    :  " << result.s;
	return 0;
}