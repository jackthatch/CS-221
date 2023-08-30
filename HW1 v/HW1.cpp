#include <iostream>

using namespace std;

class playerClass {
    public: 
        string firstName;
        string lastName;
        int gamesPlayed { 0 };
        int minutesPlayed { 0 };
        int fieldGoals { 0 };
        int threePointers { 0 };
        int freeThrows { 0 };
        int rebounds { 0 };
        int assists { 0 };
        int steals { 0 };
};

string splitString(string input) {

    for (int i = 0; i++; i < input.length()) {

        if (input[i] == ' ') {
            cout << 'split here' << endl;
        }

    }

}

int main (void) {

    // bool runningTF = true;
    // int playerCount = 0;

    // while (runningTF = true) {

    //     cout << "Please enter player data (First Last Games Minutes FG 3P FT Rebounds Assists Steals)" << endl;
    //     // cin >> //add string comprehension method here (split at space)

    //     playerClass playerCount;


    // }

    playerClass jack {"Jack", "Thatcher", 1, 2, 3, 4, 5, 6, 7, 8};

    cout << 'steals = ' << jack.steals << '   rebounds = ' << jack.rebounds << endl;

    

}