#include <iostream>
#include <cmath>
#include <vector>

using namespace std;
int main()
{
    vector <char> numberOne;
    vector <char> numberTwo;
    string sentence { "" };
    int switchNumber = 0;
    cout << "Enter expression to solve: " << endl;
    cin >> sentence;
    for (int i = 0; i < sentence.size(); i++)
    {
        if (sentence[i] != 32)
        {
            if (sentence[i] == 43)
            {
                switchNumber = 1;
            }else {
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
    }
    int one {0};
    int two {0};
    for (int i = numberOne.size()-1; i >= 0; i--)
    {
        one += (numberOne[i] - 48) * pow(10, (numberOne.size()-i-1));
    }
     for (int i = numberTwo.size()-1; i >= 0; i--)
        {
         two += (numberTwo[i] - 48) * pow(10, (numberTwo.size()-i-1));
         cout << numberTwo[i] << endl;        }

     cout << "The solution to expression is equal to: " << (one + two) << endl;
    return 0;
}