#include <iostream>
#include <iomanip>
using namespace std;
int main(){
int minutos;
if(!(cin >> minutos)) return 0;
const double plano = 50.0;
const int franquia = 100;
const double excedente_por_minuto = 2.0;
double valor = plano;
if(minutos > franquia) valor += (minutos - franquia) * excedente_por_minuto;
cout << fixed << setprecision(2);
cout << "Valor a pagar: R$ " << valor << endl;
return 0;
}