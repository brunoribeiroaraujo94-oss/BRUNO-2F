#include <iostream>
#include <iomanip>
using namespace std;
int main(){
double preco_unitario; int quantidade; double valor_pago;
if(!(cin >> preco_unitario >> quantidade >> valor_pago)) return 0;
double total = preco_unitario * quantidade;
cout << fixed << setprecision(2);
if(valor_pago >= total){
double troco = valor_pago - total;
cout << "Troco: R$ " << troco << endl;
} else {
double faltam = total - valor_pago;
cout << "Pagamento insuficiente. Faltam: R$ " << faltam << endl;
}
return 0;
}