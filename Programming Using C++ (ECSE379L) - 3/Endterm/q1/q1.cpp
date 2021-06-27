// Definitions
/*
-----Answer 1-----
As the name suggests, a friend function is a “friend” of the class and is given the same access as any other method defined in that class. A class grants access to this friend function by declaring it in its class interface using `friend` keyword, but its definition is given outside the scope of class. Friend functions are used to access private and protected member variables and member functions outside class definition and can not be called using class objects because their definition is out of class’s scope.
Ways to define a member function for a particular class,
    a) Simple Function - basic member function without any keyword
    b) Static Function - member functions declared with `static` keyword which can hold their position and works for class as whole
    c) Const Function - member functions declared with `const` qualifier which cannot change any object or its related data members
    d) Inline Function - member functions that are part of the class’s member list
    e) Virtual Function - member functions declared with `virtual` keyword allowing dynamic binding of functions
    f) Friend Function - these are not specifically member function of a class but are used to provide private access outside the scope of class
*/

/*
-----Answer 2-----
Operator Overloading is a very interesting concept in computer programming, it is also termed as 'Operator ad hoc Polymorphism'. C++ gives us the ability to override functionality of builtin operators to work on user-defined data types. While definition, the symbol for operators is preceded by a keyword i.e. `operator`. Similar to any other method, an overloaded operator needs to have a return type a parameter list.
Almost every operator can be overloaded in cpp except the few mentioned below,
    a) Scope Resolution operator, :: - this operator performs a scope resolution at compile time and is not an expression evaluation operator
    b) Pointer to Member operator, .* - overloading this operator would create confusion for compiler
    c) Member Access or Dot operator, . - this operator is used to refer pointer; if its been overloaded, it would become significantly difficult for compiler to understand our code 
    d) Ternary or Conditional operator, ?: - there is no need to introduce the special case of overloading this operator
    e) Object Size operator, sizeof - built-in operations, such as incrementing a pointer into an array implicitly depends on it
    f) Object Type operator, typeid - built-in operations are highly dependent on it
*/

// Code
// including required libraries
#include <iostream>    // this library enables i/o operations
#include <string>    // this library enables string usage

// using 'std' namespace for std:: scope
using namespace std;

// declaration of class Team
class Team {
    // private members
    private:
        string players[11];    // 'players' array which stores the names of 11 players in a team as string
        int goals[11];    // 'goals' array which stored the number of goals stored by 11 respective players in a team as integer

    // public members
    public:
        string teamName;     // name of a team
        int totalGoals=0;     //total goals scored by a team
        
        // class constructor to initialize the teamName
        Team(string name) {
            teamName = name;    // teamName getting initialized
        }
        
        void inputDetails();    // function declaration, function to input team details
        void getDetails();    // function declaration, function to output team details
        
        // minus operator (-) overloaded
        int operator - (Team t) {
            return totalGoals - t.totalGoals;    // returning the difference of goals scored by two teams
        }
};

// member function definition using scope resolution
void Team::inputDetails() {
    // looping through the arrays 'players' and 'goals' to store the inputs provided by user
    for(int i=0; i<11; i++) {
        cin >> players[i];    // reading and storing the inputs as 'player' elements
        cin >> goals[i];    // reading and storing the inputs as 'goal' elements
        totalGoals += goals[i];    // updating the total goals of whole team by adding the goals scored by individual players in a team
    }
}

// member function definition using scope resolution operator
void Team::getDetails(){
    cout << teamName << " Player's Name and No. of goal scored by them:-" << endl;    // outputting the teamName
    // looping through arrays 'players' and 'goals' to output the player names and goals scored by them respectively
    for(int i=0; i<11; i++){
        cout << " Player name is " << players[i] << " and he has scored " << goals[i] << " goal." << endl;
    }
}

// main() function
int main()
{
    // declaring two object for two team along with their names
    Team Ind("Indian");
    Team Bel("Belgium");
    
    Ind.inputDetails();    // inputting details of team referenced by object 'Ind'
    Bel.inputDetails();    // inputting details of team referenced by object 'Bel'
    Ind.getDetails();    // outputting details of team referenced by object 'Ind'
    Bel.getDetails();    // outputtong details of team reference by object 'Bel'
    
    // outputting team name and total goals scored by that team
    cout << Ind.teamName << " Team has scored total " << Ind.totalGoals << " goals." <<endl;
    cout << Bel.teamName << " Team has scored total " << Bel.totalGoals << " goals." <<endl;

    // using overloaded minus(-) operator to calculate the difference between total goals scored by both teams
    int result = Ind-Bel;
    
    // outputting the result based on 'result'
    if (result == 0 ){
        cout << "Match tie." << endl;    // match is tied if both teams scored equal number of goals
    }
    else if (result>0){
        // team India wins if result is greater than 0
        cout << "India win the match by " << result << " goals." << endl;
    }
    else {
        // team Belgium wins if result is less than 0
        cout << "Belgium win the match by " << -result << " goals." << endl;
    }
    
    return 0;
}