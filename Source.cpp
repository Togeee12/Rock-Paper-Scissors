#include <iostream>
#include <cmath>
#include <time.h>
#include <string>
#include <cstdlib>
using namespace std;
int Scissors = 3;
int Paper = 2;
int Rock = 1;
int input = 0;
string S = "Scissors";
string P = "Paper";
string R = "Rock";
string name;
int main() {
    int wins = 0;
    int lose = 0;
    int draw = 0;
    char MoreGameplay;
    cout << "Welcome! What's your name?" << endl;
    cin >> name;
    do {
        cout << "===================================================" << endl;
        cout << " Lets play Rock, Paper, Scissors " + name << endl;
        cout << "===================================================" << endl;
        cout << "|| Press 1 --> Rock || Press 2 --> Paper || Press 3 --> Scissors ||" << endl;
        cin >> input;
        int random = rand() % 3 + 1;
        if (input == 1 || 2 || 3){
            cout << "The computer chose: ";
            if (random == Rock) {
                cout << R << endl;
            }
            else if (random == Paper) {
                cout << P << endl;
            }
            else {
                cout << S << endl;
            } //End PC choice
            if (input == Rock && random == Rock) {
                cout << "Your thing was: " + R << endl;
                cout << "It's a tie!";
                draw++;
            }
            else if (input == Rock && random == Paper) {
                cout << "Your thing was: " + R << endl;
                cout << "Computer wins!" << endl;
                lose++;
            }
            else if (input == Rock  && random == Scissors) {
                cout << "Your thing was: " + R << endl;
                cout << "You've won!" << endl;  
                wins++;
            }//End Rock
            else if (input == Paper && random == Paper) {
                cout << "Your thing was: " + P << endl;
                cout << "It's a tie!" << endl;
                draw++;
            }
            else if (input == Paper && random == Scissors) {
                cout << "Your thing was: " + P << endl;
                cout << "Computer wins" << endl;
                lose++;
            }
            else if (input == Paper && random == Rock) {
                cout << "Your thing was: " + P << endl;
                cout << "You've won!" << endl;
                wins++;
            } //End Paper
            else if (input == Scissors && random == Rock) {
                cout << "Your thing was: " + S << endl;
                cout << "Computer wins!" << endl;
                lose++;
            }
            else if (input == Scissors && random == Paper) {
                cout << "Your thing was: " + S << endl;
                cout << "You've won!" << endl;
                wins++;
            }
            else if (input == Scissors && random == Scissors) {
                cout << "Your thing was: " + S << endl;
                cout << "It's a tie!" << endl;
                draw++;
            }//End Scissors
            else {
                cout << "Please select correct number" << endl;
            }
            cout << "Wins:" << wins << endl;
            cout << "Loses: " << lose << endl;
            cout << "Draws: " << draw << endl;
        cout << "Do you want to play one more time? y/n " << endl;
        cin >> MoreGameplay;
        }
        else {
            cout << "You didnt select 1 or 2 or 3";
            return 0;
        }
    } while (MoreGameplay == 'Y' || MoreGameplay == 'y');
    return 0;
    

}
