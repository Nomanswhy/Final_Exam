#include <iostream>
using namespace std;

class simple_fraction
{

public:
    int numerator;
    int denominator;

    void ask()
    {

        cout << "Please enter the numerator and denomiantor > " << flush;
    }

    void checker()
    {

        if (numerator < denominator)
        {

            cout << "It is a proper fraction" << endl;
        }
        else
        {

            cout << "It is an improper fraction" << endl;
        }
    }
};

int main()
{

    simple_fraction obj1;

    obj1.ask();

    cin >> obj1.numerator >> obj1.denominator;

    obj1.checker();

    return 0;
}
