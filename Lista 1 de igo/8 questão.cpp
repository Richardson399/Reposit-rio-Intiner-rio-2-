#include <iostream>
#include <iomanip>  // para usar setprecision
using namespace std;
int main() {
    double distancia, combustivel, consumoMedio;
    cout << "Distancia percorrida (km): ";
    cin >> distancia;
    cout << "Combustivel gasto (litros): ";
    cin >> combustivel;
    consumoMedio = distancia / combustivel;
    cout << fixed << setprecision(3);
    cout << "Consumo medio = " << consumoMedio << " km/l" << endl;
    return 0;
}
