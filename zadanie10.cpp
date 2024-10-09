#include <iostream>
#include <cmath>
#include <vector>

using namespace std;
int main()
{
    vector <string> numberOne;
    vector <string> numberTwo;
    string sentence { "" };
    int switchNumber = 0;
    cout << "Enter expression to solve: " << endl;
    cin >> sentence;
    for (int i = 0; i < sentence.size(); i++)
    {
        if (sentence[i] != ' ')
        {
            if (sentence[i] == '+')
            {
                switchNumber = 1;
            }
            if (!switchNumber)
            {
                numberOne.push_back(sentence[i]);
            }
            else
            {
                numberTwo.push_back(sentence[i]);
            }
        }
    }
    int one;
    int two;
    for (int i = 0; i < numberOne.size(); i++)
    {
        one += numberOne[i] * pow(10, i);
    }
     for (int i = 0; i < numberTwo.size(); i++)
        {
         two += numberOne[i] * pow(10, i);
        }

     cout << "The solution to expression is equal to: " << (one + two) << endl;
    return 0;
}