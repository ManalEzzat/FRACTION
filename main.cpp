#include <iostream>
#include "fraction.h"
using namespace std;
int main() {
    fraction f1, f2;
    do {
        cout << "Enter first fraction (a/b): ";
        cin >> f1;
        if (f1.getDenominator() == 0) {
            cout << "Error: Denominator cannot be zero. Please try again." << endl;
        }
    } while (f1.getDenominator() == 0);

    do {
        cout << "Enter second fraction (a/b): ";
        cin >> f2;
        if (f2.getDenominator() == 0) {
            cout << "Error: Denominator cannot be zero. Please try again." << endl;
        }
    } while (f2.getDenominator() == 0);

    cout << "Sum: " << (f1 + f2) << endl;
    cout << "Product: " << (f1 * f2) << endl;
  
    if (f1 >= f2) cout <<f1 << "is grater than or equal"<<f2 << endl;
    if (f1 < f2) cout << f1 <<"less than"<<f2 << endl;
    if (f1 > f2) cout << f1 <<"greater than"<<f2 << endl;
    if (f1 == f2) cout << "Fractions are equal" << endl;
    else cout << "Fractions are not equal" << endl;

    return 0;
}
