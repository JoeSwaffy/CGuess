#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

int main()
{
    //setting up the variables
    int guesses = 5;
    int guess;
    int secret = rand() % 20 + 1;
    string userName;

    //prompt the user for their userName
    cout << "What's your name?" << endl;

    //gather input for the name
    cin >> userName;

    //run the game loop
    while (guesses > 0)
    {
        cout << "Guess a number between 1 and 20" << endl;
        cin >> guess;
        if(guess > secret)
        {
            cout << "You guessed too high, try again " << endl;
            guesses -= 1;
            cout << "Guesses Left: " + guesses << endl;
        }else if(guess < secret)
        {
            cout << "You guessed too low, try again!" << endl;
            guesses -= 1;
            cout << "Guesses Left: " + guesses << endl;
        }else
        {
            cout << "Congratulations you've won!" << endl;
            guesses = 0;
        }

    }
}
