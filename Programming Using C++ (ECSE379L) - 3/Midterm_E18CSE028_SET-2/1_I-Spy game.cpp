#include <iostream> 
#include <vector> 
#include <cmath> 
  
using namespace std; 

int main() 
{ 
    int n, k;
    cin >> n >> k;
    char arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
  
    int c = 0; 
    vector<int> t; 
    vector<int> s; 
  
    for (int i = 0; i<n; i++) { 
        if (arr[i] == 'S') 
            s.push_back(i); 
        else if (arr[i] == 'T') 
            t.push_back(i); 
    }    
  
    int l = 0, r = 0; 
    while (l<t.size() && r<s.size()) { 
  
        if (abs(t[l] - s[r]) <= k) { 
            c++; 
            l++; 
            r++; 
        } 
  
        else if (t[l] < s[r]) 
            l++; 
        else
            r++; 
    } 
  
    cout << c; 
  
    return 0; 
} 