#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    string str[n];
    string *ptr = str;
    cin.get();
    for(int i=0;i<n;i++)
    {
        getline(cin,str[i]);
    }
    int c=0;
    for(int i=0;i<n;i++)
    {
       if(*ptr=="Amitabh"||*ptr=="amitabh")
       {
        break;
       }
       ptr++;
       c++;

    }
    cout<<"\nPresent at number "<<c+1;

    return 0;
}
