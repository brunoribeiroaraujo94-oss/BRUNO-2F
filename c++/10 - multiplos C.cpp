#include <iostream>
using namespace std;
int main(){
int a,b;
if(!(cin >> a >> b)) return 0;
if(a == 0 || b == 0){
if(a==0 && b==0) cout << "Ambos sao zero: todo numero eh multiplo de 0 nao definido" << endl;
else if(b==0) cout << "Nao eh possivel verificar multiplo por zero" << endl;
else if(a==0) cout << "0 eh multiplo de qualquer numero" << endl;
} else {
if(a % b == 0) cout << a << " eh multiplo de " << b << endl;
else if(b % a == 0) cout << b << " eh multiplo de " << a << endl;
else cout << "Nenhum eh multiplo do outro" << endl;
}
return 0;
}