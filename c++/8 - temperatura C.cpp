#include <iostream>
#include <iomanip>
#include <cctype>
using namespace std;
int main(){
char escala; double valor;
if(!(cin >> escala >> valor)) return 0;
escala = toupper(escala);
cout << fixed << setprecision(2);
if(escala == 'C'){
double f = (valor * 9.0/5.0) + 32.0;
cout << f << " F" << endl;
} else if(escala == 'F'){
double c = (valor - 32.0) * 5.0/9.0;
cout << c << " C" << endl;
} else {
cout << "Escala invalida" << endl;
}
return 0;
}