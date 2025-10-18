#include <iostream>
#include <iomanip>
using namespace std;
int main(){
double glicose;
if(!(cin >> glicose)) return 0;
cout << fixed << setprecision(0);
if(glicose <= 100.0) cout << "Classificacao: Normal" << endl;
else if(glicose <= 140.0) cout << "Classificacao: Elevado" << endl;
else cout << "Classificacao: Diabetes" << endl;
return 0;
}