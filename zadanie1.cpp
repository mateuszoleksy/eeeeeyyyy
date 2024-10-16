#include <iostream>
#include <cmath>
#include <random>
#include <chrono>
#include <vector>

using namespace std;

// task no. 1
class Point2D
{
    public:
        double x;
        double y;
        Point2D();
        Point2D (const Point2D &point);
        double get_x (void) const;
        double get_y (void) const;
        void set_x (double x1);
        void set_y (double y1);

};

Point2D::Point2D ()
    {
        x = 10.0;
        y = 10.0;
    };

    double Point2D::get_x (void)const  {return x;};
    double Point2D::get_y (void) const {return y;};

    void Point2D::set_x (double x1) {x = x1;};
    void Point2D::set_y (double y1) {y = y1;};

    Point2D::Point2D (const Point2D& point) : x(point.x), y(point.y)
        {
        }

    // task no. 2
    class Circle
    {
        public:
            double r, x, y;
            Circle():r(10),x(0),y(0){};
            bool is_inside(const Point2D& p);
    };

   bool Circle::is_inside(const Point2D& p)
    {
        double result {0};
        result = sqrt(pow((x - p.get_x()), 2) + pow((y - p.get_y()), 2));
        if (r >= result)
            return true;
        else
            return false;
    };

// task no.3
double monteCarlo(Circle& kolko, vector <Point2D> numbers)
    {
        double pi;
        double iter {0};
        for (int i = 0; i < numbers.size() ; i++)
        {
            if (kolko.is_inside( numbers[i] ))
                iter++;
        }
        pi = (kolko.r*2.0*kolko.r*2.0)*(iter/numbers.size());
        return pi/(kolko.r*kolko.r);
    };


int main()
{
    mt19937 gen(chrono::system_clock::now().time_since_epoch().count());
    uniform_real_distribution<double>distribution{-1.0,1.0};

    vector <Point2D> numbers;
    Point2D point;
    Circle kolo;

    for(int i=0; i< 10000000; i++)
    {
        point.set_x(distribution(gen) *kolo.r);
        point.set_y(distribution(gen) *kolo.r);
        numbers.push_back(point);
    }
    cout << monteCarlo(kolo, numbers);

    return 0;
}