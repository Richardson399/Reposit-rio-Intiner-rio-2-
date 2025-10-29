#include <iostream>
#include <iomanip>  
using namespace std;
int main() {
    int totalSegundos;

    cout << "Digite a duracao em segundos: ";
    cin >> totalSegundos;

    int horas = totalSegundos / 3600;
    int minutos = (totalSegundos % 3600) / 60;
    int segundos = totalSegundos % 60
    cout << setfill('0') << setw(2) << horas << ":"
         << setfill('0') << setw(2) << minutos << ":"
         << setfill('0') << setw(2) << segundos << endl;

    return 0;
}
