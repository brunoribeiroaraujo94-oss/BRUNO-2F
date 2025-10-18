#include <iostream>
#include <iomanip>
using namespace std;
int main(){
double n1, n2; // notas dos semestres
double finalExam; // nota final (prova)
if(!(cin >> n1 >> n2 >> finalExam)) return 0; // lê três valores (ou pode adaptar conforme pedido)
double media = (n1 + n2 + finalExam) / 3.0; // presumi média aritmética com a prova final incluída
cout << fixed << setprecision(1);
cout << "Nota final: " << media << endl;
if(media < 60.0) cout << "REPROVADO" << endl;
return 0;
}