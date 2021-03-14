#include <bits/stdc++.h>

using namespace std;

int main()
{
    int difficulty[5]={2,4,6,8,10};
    int marks[5]={10,20,30,40,50};
    int student[4]={4,5,6,7};
    int* difficultyp=difficulty;
    int* marksp=marks;
    int* studentp=student;
    int i,j,sum1=0;
    for(i=0;i<sizeof(student)/sizeof(student[0]);i++)
    {
        int flag=0;
        for(j=0;j<sizeof(difficulty)/sizeof(difficulty[0]);j++)
        {
            if(*(studentp+i)<*(difficultyp+j))
            {
                flag=j;
                break;
            }
        }
        sum1=sum1+*(marksp+flag-1);
    }
    cout<<sum1<<endl;

    return 0;
}
