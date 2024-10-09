#include <iostream>
#include <cmath>
#include <vector>

using namespace std;
int main()
{
    float C_0; // the intial capital 
    float r; // the invest rate per year (annual)
    float m; // the compounding period 
    float t; // the interest period -> time
    float C_1; // final investment sum
    cout << "The interest calculator. \n Type in annual rate of compounding in %: " << endl;
    cin >> r;
    r /= 100.0;
    cout << "Type in the interest period: " << endl;
    cin >> t;
    cout << "Type in the compaunding period: " << endl;
    cin >> m;
    cout << "Type in the intial captial: " << endl;
    cin >> C_0;
    C_1 = C_0;
    try
    {
        for (int i = 0; i < m / t; i++)
        {
            C_1 *= (1 + r / 12 * m);
            cout << C_1 << endl;
        }
        cout << "The final result is: " << C_1 << endl;
    }
    catch (exception& e)
    {
        cout << "You entered the wrong type data." << endl;
    }
    return 0;
}