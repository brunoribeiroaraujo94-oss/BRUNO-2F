#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double preco, recebido, troco;
    int quantidade;

    cout << "Preco unitario do produto: ";
    cin >> preco;
    cout << "Quantidade comprada: ";
    cin >> quantidade;
    cout << "Dinheiro recebido: ";
    cin >> recebido;

    troco = recebido - (preco * quantidade);

    cout << fixed << setprecision(2);
    cout << "TROCO = R$ " << troco << endl;

    return 0;
}