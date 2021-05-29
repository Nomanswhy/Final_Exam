#include <iostream>
using namespace std;

int LoopFactorial (int num) {

    if (num > 1) {

       return num * LoopFactorial(num - 1);

    }
    else {

       return 1;

    }

}

int main () { 

    int num;
    cout << "Enter a number > " << endl;
    cin >> num;

    int final = LoopFactorial (num);

    cout << "Factorial of " << num << " equals " << final << endl;

    return 0;
}