#include <iostream>

using namespace std;

int main()
{
    int N1, N2, sum, difference, produce, remainder, quotient;

    //Input
    cout << "Enter First Number: ";
    cin >> N1;

    cout << "Enter Second Number: ";
    cin >> N2;

    //Process
    sum = N1 + N2;
    difference = N1 - N2;
    produce = N1 * N2;
    remainder = N1 % N2;
    quotient = N1 / N2;

    //Output
    cout << "Sum: " << sum << endl;
    cout << "Difference: " << difference << endl;
    cout << "Product: " << produce << endl;
    cout << "Remainder: " << remainder << endl;
    cout << "Quotient: " << quotient << endl;

    return 0;
}
