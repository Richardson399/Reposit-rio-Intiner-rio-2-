#include <iostream>
using namespace std;

int main() {
    int A[3][3], B[3][3], C[3][3];

    cout << "Digite os elementos da matriz A (3x3):\n";
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            cin >> A[i][j];

    cout << "Digite os elementos da matriz B (3x3):\n";
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            cin >> B[i][j];

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    cout << "Resultado da soma A + B:\n";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
