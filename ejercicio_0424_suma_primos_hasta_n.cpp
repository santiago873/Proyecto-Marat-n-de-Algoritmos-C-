// Nombre: ejercicio_0424_suma_primos_hasta_n
// Descripción: Lee un entero y muestra si es par o impar.
#include <iostream>
using namespace std;
int main() {
    long n;
    if(!(cin>>n)) return 0;
    cout << ( (n%2==0) ? "par" : "impar" ) << '\n';
    return 0;
}
