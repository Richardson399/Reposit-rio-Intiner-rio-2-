#include <iostream>
#include <iomanip>  
#include <string>   
using namespace std;
int main() {
    string nome;
    double valorHora, horasTrabalhadas, pagamento;
    cout << "Nome do funcionario: ";
    getline(cin, nome);
    cout << "Valor por hora: ";
    cin >> valorHora;
    cout << "Horas trabalhadas: ";
    cin >> horasTrabalhadas;
    pagamento = valorHora * horasTrabalhadas;
    cout << fixed << setprecision(2);
    cout << "O pagamento para " << nome << " deve ser " << pagamento << endl;
    return 0;
}
