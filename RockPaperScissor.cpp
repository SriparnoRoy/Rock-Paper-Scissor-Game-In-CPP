#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    srand(time(NULL));
    int user = 0;
    int computer = 0;
    cout << "Stone Paper Scissor Game" << endl;
    cout << "1) Rock" << endl;
    cout << "2) Paper" << endl;
    cout << "3) Scissor" << endl;
    cin >> user;

    if(user == 1){
        cout << "You choose Rock" << endl;
    }
    else if(user == 2){
        cout << "You choose Paper" << endl;
    }
    else{
        cout << "You choose Scissor" << endl;
    }

    computer = rand()%3+1;
    if(computer == 1){
        cout << "Computer chooses Rock" << endl;
    }
    else if(computer == 2){
        cout << "Computer chooses Paper"<< endl;
    }
    else{
        cout << "Computer chooses Scissor" << endl;
    }

    // match
    if(user == computer){
        cout << "Match Tie" << endl;
    }
    // user --> Rock
    else if(user == 1){
        if(computer == 2){
            cout << "You lose!" << endl;
        }
        if(computer == 3){
            cout << "You win!" << endl;
        }
    }
    // user --> Paper
    else if(user == 2){
        if(computer == 1){
            cout << "You win!" << endl;
        }
        if(computer == 3){
            cout << "You lose!" << endl;
        }
    }
    // user --> Scissor
    else if(user == 3){
        if(computer == 1){
            cout << "You lose!" << endl;
        }
        if(computer == 2){
            cout << "You win!" << endl;
        }
    }
    return 0;




}