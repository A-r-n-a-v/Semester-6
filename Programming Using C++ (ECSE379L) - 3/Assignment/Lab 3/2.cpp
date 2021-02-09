#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <iterator>

using namespace std;

int main() {
    int n=5;
    cin >> n;
    vector< pair<int, int>> v;
    int a, b;
    
    for(int i=0; i<n; i++){
        cin >> a >> b;
       v.push_back( make_pair(a,b) ); 
    }

    cout << "\nPart (a)" << endl;
    int c1=0;

    for(int i=0; i<n-1; i++){
        if(v[i].first < v[i+1].first && v[i].second > v[i+1].second){
            cout << "{(" << v[i].first << "," << v[i].second << "), (" << v[i+1].first << "," << v[i+1].second << ")}";
            cout << endl;
            c1++; 
        }
    }
    cout << "total number of pairs : " << c1 << endl;

    cout << "\nPart (b)" << endl;
    int c2=0;

    for(int i=0; i<n; i++){
        if(v[i].first > v[i+1].first && v[i].second < v[i+1].second){
            cout << "{(" << v[i].first << "," << v[i].second << "), (" << v[i+1].first << "," << v[i+1].second << ")}";
            cout << endl;
            c2++; 
        }
    }
    cout << "total number of pairs : " << c2;

    return 0;
}