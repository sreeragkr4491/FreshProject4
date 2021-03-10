#include<iostream>
#include<conio.h>
#include"guess.h"
using namespace std;

int main()
{
    guess g;
    int ch;
    cout << "Press 1. Start 2.Instruction 3.Exit" << endl;
    cin >> ch;
    if (ch == 1)
    {
        cout << "***************WELCOME TO GUESS THE WORD GAME******************" << endl;
        cout << "\n\nEach letter is represented by a star.";
        cout << "\n\nEvery word contains 5 letters.";
        cout << "\n\nYou have only one try and guess the word.";
        cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        cout << "\nYou can quit anytime by entering : q \n\n";
        g.check();
    }
    else if (ch == 2)
    {
        cout << "This is a c++ word guessing game. In this game a 5 digit random word and a question will be displayed to the screen. Two positions will be kept blank & Then user will guesses that word. If he/she guesses the correct word then he/she will get a 10 point." << endl;
        cout << endl;

        cout << "***************WELCOME TO GUESS THE WORD GAME******************" << endl;
        cout << "\n\nEach letter is represented by a star.";
        cout << "\n\nEvery word contains 5 letters.";
        cout << "\n\nYou have only one try and guess the word.";
        cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        cout << "\nYou can quit anytime by entering : q \n\n";
        g.check();
    }
    else if (ch == 3)
    {
        cout << "Your score=" << g.score << endl;
        _getch();
    }
    return 0;
}
