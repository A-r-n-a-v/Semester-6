#include <iostream>
#include <string>

using namespace std;

class Team {
    private:
        string players[11];
        int goals[11];
    
    public:
        string teamName;
        int totalGoals=0;
        
        Team(string name) {
            teamName = name;
        }
        
        void inputDetails();
        void getDetails();
        
        int operator - (Team t) {
            return totalGoals - t.totalGoals;
        }
};

void Team::inputDetails() {
    for(int i=0; i<11; i++) {
        cin >> players[i];
        cin >> goals[i];
        totalGoals += goals[i];
    }
}

void Team::getDetails(){
    cout << teamName << " Player's Name and No. of goal scored by them:-" << endl;
    for(int i=0; i<11; i++){
        cout << " Player name is " << players[i] << " and he has scored " << goals[i] << " goal." << endl;
    }
}

int main()
{
    Team Ind("Indian");
    Team Bel("Belgium");
    
    Ind.inputDetails();
    Bel.inputDetails();
    Ind.getDetails();
    Bel.getDetails();
    
    cout << Ind.teamName << " Team has scored total " << Ind.totalGoals << " goals." <<endl;
    cout << Bel.teamName << " Team has scored total " << Bel.totalGoals << " goals." <<endl;

    int res = Ind-Bel;
    
    if (res == 0 ){
        cout << "Match tie." << endl;
    }
    else if (res>0){
        cout << "India win the match by " << res << " goals." << endl;
    }
    else {
        cout << "Belgium win the match by " << -res << " goals." << endl;
    }
    
    return 0;
}
