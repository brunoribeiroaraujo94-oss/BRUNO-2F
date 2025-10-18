#include <bits/stdc++.h>
using namespace std;
int main(){
double a,b,c;
if(!(cin >> a >> b >> c)) return 0;
double delta = b*b - 4*a*c;
cout << fixed << setprecision(4);
if(a == 0){
cout << "Coeficiente a = 0: nao eh equacao do 2o grau" << endl;
} else if(delta < 0){
cout << "A equacao nao possui raizes reais" << endl;
} else {
double r1 = (-b + sqrt(delta)) / (2*a);
double r2 = (-b - sqrt(delta)) / (2*a);
cout << "x1 = " << r1 << endl;
cout << "x2 = " << r2 << endl;
}
return 0;
}