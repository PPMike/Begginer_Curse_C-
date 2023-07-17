#include <iostream>

using namespace std;

int main()
{
    int secretNum = 7;
    int guess;
    int guessCount = 0;
    int guessLimit = 3;
    bool outOfGuesses = false;

    while(secretNum != guess && !outOfGuesses){
        if (guessCount < guessLimit){
            cout << "Enter your number: ";
            cin >> guess;
            guessCount++;
        } else {
            outOfGuesses = true;
        }
    }

    if(outOfGuesses){
        cout << "You Lose!" << endl;
        cout << "You try " << guessCount << " times" << endl;
    } else {
        cout << "You Win!" << endl;
        cout << "You try " << guessCount << " times" << endl;
    }

    return 0;
}