#include <iostream>
#include <iomanip>  
#include <cmath>    
using namespace std;
int main() {
    double r, area;
    cout << "Digite o valor do raio: ";
    cin >> r;
    area = M_PI * pow(r, 2);
    cout << fixed << setprecision(3);
    cout << "AREA = " << area << endl;
    return 0;
}
