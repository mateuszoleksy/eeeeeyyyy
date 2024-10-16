
#include <iostream>
#include <cmath>
#include <time.h>
#include <vector>
#include <cassert>

using namespace std;

// task no. 1
class SmartArray
{
    public:
       vector <double> numbers;   
       int size;     
        SmartArray(int size1);
        SmartArray(const SmartArray& array);
        ~SmartArray();
        double at(int index);
        void set(int index, double value);
        void print();
        double max();
};

void SmartArray::print()
{
    for (int i=0; i < size; i++)
    {
        cout << "Element in array at index: " << i << " is " << numbers[i] << "." << endl;
    }
};

double SmartArray::max()
{
    double maks {numbers[0]};
     for (int i=1; i < size; i++)
    {
        if (numbers[i] > maks)
        {
            maks = numbers[i];
        }
    }
    return maks;
};

SmartArray::SmartArray(int size1)
{
    srand( time(NULL));
    size = size1;
    for (int i=0; i < size; i++)
    {
        numbers.push_back(rand()%101/50+1);
        cout << "Element in array at index: " << i << " is " << numbers[i] << "." << endl;
    }
    cout << "You've just created array with " << size << " size." << endl;
};

SmartArray::SmartArray(const SmartArray& array)
{
    numbers = array.numbers;
    cout << "You've just copied the element." << endl;
};

SmartArray::~SmartArray()
{
    cout << "You've just have called destructor." << endl;
};

double SmartArray::at(int index)
{
    assert( numbers[index] );
       return numbers[index];
};

void SmartArray::set(int index, double value)
{
    assert( numbers[index] );
    numbers[index] = value;
};

int main()
{
   //todo funkcja testujaca
    
    return 0;
}