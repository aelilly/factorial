// factorial.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int factorial, number{}, counter, staticFactorial;
    
    cout << "Input number to calculate factorial: ";
    cin >> factorial;

    while ((factorial < 0) || (factorial > 12)) {
        if (factorial < 0)
            cout << "Cannot calculate negative factorial" << endl;
        if (factorial > 12)
            cout << "Factorial too big" << endl;
        cout << "Input number to calculate factorial: ";
        cin >> factorial;
    }
    counter = factorial;
    staticFactorial = factorial;
    number = 1;
    while (counter > 1) {
        factorial = factorial * (staticFactorial - number);
        number++;
        counter--;
    }
    cout << staticFactorial << "! = " << factorial;

}

/*
Input number to calculate factorial: -4
Cannot calculate negative factorial
Input number to calculate factorial: 15
Factorial too big
Input number to calculate factorial: 8
8! = 40320
*/

/*
Input number to calculate factorial: -1
Cannot calculate negative factorial
Input number to calculate factorial: 13
Factorial too big
Input number to calculate factorial: 4
4! = 24
*/