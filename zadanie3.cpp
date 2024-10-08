#include <iostream>
#include <time.h>
#include <cmath>

using namespace std;

int main()
{
    srand( time(NULL) );
    int randomNumber {rand()%101};
    cout<<randomNumber<<endl;
    int numberOfTrials {5};
    int guess {0};

    try
    {
    do
    {
        cout << "Take a guess (number): \n";
        cin >> guess;
        if (randomNumber == guess)
        {
            cout << "You guessed the number! Congrats! \n";
            break;
        }
        numberOfTrials--;
        cout << "You don\'t guessed the number. Try once again. \n";
    } while (numberOfTrials > 0);
    } catch (exception &e)
    {
        cout << "You entered the wrong type data." << endl;
    }

    return 0;
}