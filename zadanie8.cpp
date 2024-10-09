#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    char operatorArt{ '+' };
    float numberOne, numberTwo{ 0 };
    float result{ 0 };
    int safetyTest{ 0 };
    try
    {
        do
        {
            cout << "Please enter artemtical operator (+, -, /, *):" << endl;
            cin >> operatorArt;
            if (operatorArt == 'q')
            {
                continue;
            }
            cout << "Please enter number one for operation: " << operatorArt << endl;
            cin >> numberOne;
            cout << "Please enter number two for operation: " << operatorArt << endl;
            cin >> numberTwo;
            switch (operatorArt)
            {
            case '+':
                result = numberOne + numberTwo;
                break;
            case '-':
                result = numberOne - numberTwo;
                break;
            case '*':
                result = numberOne * numberTwo;
                break;
            case '/':
                result = numberOne / numberTwo;
                break;
            default:
                cout << "You entered wrong operator." << endl;
                safetyTest = 1;
                break;
            }
            if (!safetyTest)
            {
                cout << "The result of equalation is: " << result << endl;
            }
            else
            {
                safetyTest = 0;
            }


        } while (operatorArt != 'q');
    }
    catch (exception& e)
    {
        cout << "You entered the wrong-type data." << endl;
    }

    return 0;
}