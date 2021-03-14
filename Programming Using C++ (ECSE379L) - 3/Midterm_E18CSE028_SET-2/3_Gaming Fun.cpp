/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int r, c;
    string choice;
    cin >> r >> c >> choice;
    
    int a[r][c];
    
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cin >> a[i][j];
        }
    }
    
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cout << a[i][j] << " ";
        }
        cout<<endl;
    }
    if(choice == "z"){
        cout << "Z traversal"<<endl;
        int y;
        for(y=0; y<c; y++){
            cout << a[0][y] << " ";
        }
        
        y = c-2;
        int x;
        for(x=1; x<r; x++){
            cout << a[x][y] << " ";
            y -= 1;
            if(y<0)
                break;
        }
        for(int k=y+2; k<c; k++)
            cout << a[x][k] << " ";
    }
        
    else if(choice == "zig"){
        cout << "ZigZag Traversal"<<endl;
        int x;
        for(x=0; x<r; x++){
            int y;
            if(x%2 == 0)
                for(y=0; y<c; y++)
                    cout << a[x][y] << " ";
            else
                for(y=c-1; y>-1; y--)
                    cout << a[x][y] << " ";
        }
    }
        
    else
        cout << "Invalid choice";

    return 0;
}
