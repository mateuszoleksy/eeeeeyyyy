
#include <iostream>
#include <cmath>

using namespace std;

// task no. 1
class TQuadEq
{
    public:
        double a;
        double b;
        double c;
        double delta;
        double root_1;
        double root_2;
        TQuadEq();
        TQuadEq(double a1, double b1, double c1):a(a1),b(b1),c(c1),root_1(0.0),root_2(0.0){};
        void TQuadEqSetA (double a1);
        void TQuadEqSetB (double b1);
        void TQuadEqSetC (double c1);

        double TQuadEqGetA ();
        double TQuadEqGetB ();
        double TQuadEqGetC ();

        double ComputeDelta (void) const { return a*a-4*b*c; };
        int GetNumRoots(const double delta);
        void GetRoots(double& root1, double& root2);

};

void TQuadEq::GetRoots(double& root1, double& root2)
{
    root1 = root_1;
    root2 = root_2;
};

TQuadEq::TQuadEq()
{
    a = 1.0;
    b = 2.0;
    c = 1.0;
    root_1 = 0;
    root_2 = 0;
};


int TQuadEq::GetNumRoots(const double delta)
{
    if (sqrt(delta) > 0)
    {
        root_1 = (-b + sqrt(delta))/2*a;
        root_2 = (-b - sqrt(delta))/2*a;
        return 2;
    } else if (sqrt(delta) == 0)
    {
        root_1 = -b/(2*a);
        root_1 = root_2;
        return 1;
    } else
    {
        return 0;
    }
    return 0;
};

void TQuadEq::TQuadEqSetA(double a1)
{
    a = a1;
};

void TQuadEq::TQuadEqSetB(double b1)
{
    b = b1;
};

void TQuadEq::TQuadEqSetC(double c1)
{
    c = c1;
};

double TQuadEq::TQuadEqGetA()
{
    return a;
};

double TQuadEq::TQuadEqGetB()
{
    return b;
};

double TQuadEq::TQuadEqGetC()
{
    return c;
};



int main()
{
   //todo funkcja testujaca

    return 0;
}
