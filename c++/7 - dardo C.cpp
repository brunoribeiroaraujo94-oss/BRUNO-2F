#include <iostream>
using namespace std;
int main(){
double t1,t2,t3;
if(!(cin >> t1 >> t2 >> t3)) return 0;
double maior = max(t1, max(t2,t3));
cout << maior << endl;
return 0;
}