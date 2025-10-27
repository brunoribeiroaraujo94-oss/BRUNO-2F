#include <iostream>
using namespace std;

int main() {
    int vetor [10], num;
    bool encontrado = false;
    for(int i = 0; i < 10; i++) {
        cin >> vetor[i];
    }
    cin >> num;
    for(int i = 0; i < 10; i++) {
        if(vetor[i] == num) {
            encontrado = true;
            break;
        }
    }
    if(encontrado) {
        cout << "Elemento encontrado" << endl;
    } else {
        cout << "Elemento nao encontrado" << endl;
    }
    return 0;
}