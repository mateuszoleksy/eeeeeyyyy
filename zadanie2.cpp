#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float a,b,c;
    cout<<"Please enter coefficient a: \n";
    cin >> a;
    cout << "Please enter coefficient b: \n";
    cin >> b;
    cout << "Please enter coefficient c: \n";
    cin >> c;

    float delta {b*b-4*a*c};
    if (delta >= 0)
    {
        float result1 {(-b-sqrt(delta))/(2*a)};
        float result2 {(-b+sqrt(delta))/(2*a)};
        cout << "The result of equation ("<<a<<")*x^2+("<<b<<")*x+("<<c<<")=0, is two roots: " << result1 << " and "<< result2 <<endl;
    } else
    {
        cout << "There are no roots to the given square function."<<endl;
    }

    return 0;
}