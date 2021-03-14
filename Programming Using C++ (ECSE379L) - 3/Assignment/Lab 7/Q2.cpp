#include <bits/stdc++.h>

using namespace std;

double* solution(int N1,int N2)
{
    double ans = float(N1)*20 + 34/float(N2);
    double* c = &ans;
    return c;
}
int main()
{
    float a=5;
    float b=10;
    cout<<*solution(a,b);
    return 0;
}
