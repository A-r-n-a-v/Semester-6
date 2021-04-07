#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

//write your code here
class Time{
    private:
        int hour;
        int minute;
        int second;
    
    public:
        Time(long int t){
            hour = t/(60*60);
            t = t%(60*60);
            minute = t/60;
            // t -= minute*60;
            second = t%minute;
        }
    
        string getTime(){
            string h = to_string(hour);
            if(h.length() == 1){
                h = "0"+h;
            }
            string m = to_string(minute);
            if(h.length() == 1){
                h = "0"+h;
            }
            string s = to_string(second);
            if(s.length() == 1){
                s = "0"+s;
            }
            string time = h + ":" + m + ":" + s;
            return time;
        }
};

//Your program will be evaluated by this main method and several test cases.
int main()
{
    long int N;
    cin >> N;
    Time currentTime(N);
    cout << currentTime.getTime();
    return 0;
}