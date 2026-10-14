#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double peso, USD, Euro, Yuan;
    double Koruna, Krone, Shegel, Dinar;

    cout << "Enter Philippine peso amount: ";
    cin >> peso;

    USD = peso / 43.33089;
    Euro = USD * 0.734719;
    Yuan = USD * 6.346934;
    Koruna = USD * 18.77263;
    Krone = USD * 5.449007;
    Shegel = USD * 3.726334;
    Dinar = USD * 0.274588;

    cout << endl << "The Amount's equivalent to: " << endl;
    cout << left;
    cout << endl;

    cout << setw(14) << "US Dollar " << ": "
         << fixed << setprecision(2) << USD << endl;

    cout << defaultfloat << setprecision(7);
    cout << setw(14) << "Euro " << ": " << Euro << endl;
    cout << setw(14) << "Yuan " << ": " << Yuan << endl;
    cout << setw(14) << "Koruna " << ": " << Koruna << endl;
    cout << setw(14) << "Krone " << ": " << Krone << endl;
    cout << setw(14) << "Shegel " << ": " << Shegel << endl;
    cout << setw(14) << "Dinar " << ": " << Dinar << endl;

    return 0;
}
