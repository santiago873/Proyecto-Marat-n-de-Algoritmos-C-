// Ejercicio 148: numero abundante (avanzado)
// Lee una línea y la invierte
#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    getline(cin,s);
    if(s.size()==0) getline(cin,s);
    reverse(s.begin(), s.end());
    cout<<s<<endl;
    return 0;
}