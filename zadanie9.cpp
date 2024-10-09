#include <iostream>
#include <cmath>

using namespace std;

void divider(int n, int m)
{

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0 && n / i < m && n / i > 0)
        {
            cout << n / i << endl;
        }
    }
}

int main()
{
    int n, m{ 0 };
    try
    {
        cout << "Enter number n: \n";
        cin >> n;
        cout << "Enter number m: \n";
        cin >> m;
        divider(n, m);
    }
    catch (exception& e)
    {
        cout << "You entered the wrong-type data." << endl;
    }

    return 0;
}