#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Quantos termos da sequência deseja mostrar? ";
    cin >> n;

    int a = 0, b = 1;
    cout << a << " " << b << " ";
    for (int i = 2; i < n; i++) {
        int prox = a + b;
        cout << prox << " ";
        a = b;
        b = prox;
    }
    cout << endl;
    return 0;
}
