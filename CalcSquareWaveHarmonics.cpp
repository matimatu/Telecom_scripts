#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

void calcolaArmoniche(double f0,double A, int numArmoniche) {
    
    const double coeff = 4.0;
    cout << "Armonica\tFrequenza (Hz)\tAmpiezza (V)" << endl;

    for (int k = 1, n = 1; k <= numArmoniche; k++, n += 2) {
        double An = (coeff * A) / (n * M_PI);   //4A/pi*n
        double fn = n * f0;
        std::cout << k << "\t\t" << fn << "\t\t" << An << std::endl;
    }
}

int main() {
    double f0;
    double A;
    int numArmoniche;

    cout << "Inserisci la frequenza fondamentale (Hz): ";
    cin >> f0;
    cout << "Inserisci l'ampiezza: ";
    cin >> A;
    cout << "Inserisci il numero di armoniche da calcolare: ";
    cin >> numArmoniche;

    calcolaArmoniche(f0,A, numArmoniche);

    return 0;
}