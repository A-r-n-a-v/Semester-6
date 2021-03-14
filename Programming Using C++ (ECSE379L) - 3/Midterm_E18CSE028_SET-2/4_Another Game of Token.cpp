#include <stdio.h>
#include<time.h>
#include<stdlib.h>
#include<cmath>
#include<iostream>
using namespace std;

int main()
{
    srand(time(0));
    int n=0;
    cin>>n;
    int num = 0;
    int total = 100;
    int token = 0;
    int loss = 0;
    for(int i=0;i<n;i++){
        num = rand()%2;
        cout<<num;
        if(num==1){
            if(loss!=0){
                token = 10;
            }
            else{
                token+=10;
            }
            loss=0;
            
        }
        else{
            double result = pow(2, loss);
            token-=result*10;
            loss+=1;
        }
        
    }
    
    total = total+token;
    if(total<0){
        cout<<"\n"<<-1;
    }
    else{
        cout<<"\n"<<total;
    }
    
    return 0;
}