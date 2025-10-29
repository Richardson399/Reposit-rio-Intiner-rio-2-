#include <iostream>
using namespace std;

int main() {
    int matriz[4][4], numero, cont = 0;

    cout << "Digite os elementos da matriz 4x4:\n";
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cin >> matriz[i][j];
        }
    }

    cout << "Digite o número a ser procurado: ";
    cin >> numero;

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(matriz[i][j] == numero)
                cont++;
        }
    }

    cout << "O número " << numero << " aparece " << cont << " vezes.\n";
    return 0;
}
