#include <iostream>
using namespace std;

int somaLinha5x5(int m[5][5], int linha) { // linha: 0..4
    int soma = 0;
    for(int j=0;j<5;j++) soma += m[linha][j];
    return soma;
}

int main(){
    int m[5][5];
    cout << "Digite 25 inteiros para a matriz 5x5:\n";
    for(int i=0;i<5;i++)
        for(int j=0;j<5;j++)
            cin >> m[i][j];

    int linha;
    cout << "Digite o numero da linha (1 a 5) para somar: ";
    cin >> linha;
    if(linha < 1 || linha > 5) {
        cout << "Linha invalida.\n";
        return 0;
    }
    cout << "Soma da linha " << linha << ": " << somaLinha5x5(m, linha-1) << endl;
    return 0;
}
