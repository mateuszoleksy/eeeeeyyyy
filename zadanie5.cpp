#include <iostream>
#include <time.h>
#include <cmath>
#include <tuple>
#include <vector>

using namespace std;

// function returning standard deviation and average of passed table
tuple <float, float> func(vector<float>* tab)
{
    float average, standard{ 0 };
    float sum;

    for (iterator i = tab->begin(); i < tab->end(); i++)
    {
        sum += *i;
    }
    average = sum / tab->size();
    sum = 0;
    for (auto i = tab->begin(); i < tab->end() - 1; i++)
    {
        sum += pow((*i - average), 2.0);
    }
    standard = sqrt(sum / tab->size());

    return { average, standard };
}


// *** main function ***
int main()
{
    srand(time(NULL));

    vector <float> liczby;
    // initialization of random numbers to vector
    for (int i = 0; i < 16; i++)
    {
        liczby.push_back((rand() % 101) / 50 - 1);
    }

    // calling the function
    auto [average, standard] = func(&liczby);
    cout << "Average = " << average << " and standard deviation = " << standard;

    return 0;
}