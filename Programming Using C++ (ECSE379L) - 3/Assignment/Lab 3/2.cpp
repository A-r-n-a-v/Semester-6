#include <iostream>
#include <vector>
#include <array>
#include <utility>

using namespace std;

int main() {
    // int n=5;
    // cin >> n;
    // vector< pair<int, int>, n> v;
    // int a, b;
    // for(int i=0; i<n; i++){
    //     cin >> a >> b;
    //    vector_.push_back( make_pair(a,b) ); 
    // }

    // array< int, n > a{1,2,3,4,5};
   
    // for(int i=0; i<n; i++){
    //     cout << a[i] << " ";
    //     // cout << a[i].first << " " << a[i].second << endl;
    // }

    int n=5;
    array<int,n> myarray{ 0 }; 
    cout << myarray.size(); 

    for(int i=0; i<n; i++){
        cout << myarray[i];
    }
    return 0; 



//     int flag = 0;

//     for (int i=0; i<n; i++) 
//     { 
//         // "first" and "second" are used to access 
//         // 1st and 2nd element of pair respectively 
//         cout << v[i].first << " "
//              << v[i].second << endl; 
//     }

    // for(int i=0; i<n; i++){
    //     for(int j=0; j<n; j++){
    //         if(i==j){
    //             continue;
    //         }
    //         if(a[i].first < a[j].first && a[i].second > a[j].second){
    //             cout << a[i]
    //         }
    //     }
    // }

    return 0;
}