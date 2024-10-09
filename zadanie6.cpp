#include <iostream>
#include <cmath>

using namespace std;

void bin(long long n)
{

    if (n > 1)
        bin(n >> 1);

    cout << (n % 2);
}

int main()
{
    long long enter;
    try
    {
        while (1)
        {
            cout << "Enter number to see binary representation: \n";
            cin >> enter;
            bin(enter);
            cout << endl;
        }
    }
    catch (exception& e)
    {
        cout << "You entered the wrong-type data." << endl;
    }

    return 0;
}