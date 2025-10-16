#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double n1, n2, notaFinal;
    cout << "Digite as duas notas: ";
    cin >> n1 >> n2;

    notaFinal = n1 + n2;
    cout << fixed << setprecision(1);
    cout << "NOTA FINAL = " << notaFinal << endl;

    if (notaFinal < 60.0)
        cout << "REPROVADO" << endl;

    return 0;
}