#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double preco, dinheiro;
    int qtd;

    cout << "Preco unitario do produto: ";
    cin >> preco;
    cout << "Quantidade comprada: ";
    cin >> qtd;
    cout << "Dinheiro recebido: ";
    cin >> dinheiro;

    double total = preco * qtd;

    if (dinheiro >= total)
        cout << "TROCO = " << fixed << setprecision(2) << dinheiro - total << endl;
    else
        cout << "DINHEIRO INSUFICIENTE. FALTAM " << fixed << setprecision(2) << total - dinheiro << endl;

    return 0;
}
