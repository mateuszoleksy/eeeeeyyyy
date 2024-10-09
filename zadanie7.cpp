#include <iostream>
#include <cmath>

using namespace std;

int divider(int n)
{

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return n / i;
        }
    }
    return n;
}

int main()
{
    int enter;
    try
    {
        cout << "Enter number : \n";
        cin >> enter;
        cout << divider(enter) << endl;
    }
    catch (exception& e)
    {
        cout << "You entered the wrong-type data." << endl;
    }

    return 0;
}