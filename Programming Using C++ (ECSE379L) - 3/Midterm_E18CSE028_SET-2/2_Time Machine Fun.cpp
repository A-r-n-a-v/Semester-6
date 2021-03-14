#include <iostream>

using namespace std;

int main()
{
    int l;
    int arr[l];
    int n;
    
    cin >> l;
    for(int i=0; i<l; i++){
        cin >> arr[i];
    }
    cin >> n;
    
    int m=arr[0];
    for(int i=1; i<l; i++){
        if(arr[i]>m){
            m = arr[i];
        }
    }
    
    if(n>=m){
        cout << "Yes";
    }
    else{
        cout << "No";
    }

    return 0;
}
