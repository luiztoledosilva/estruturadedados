#include <iostream>
#include "fila.h"

using namespace std;

int main(){
    fila fila1;
    TipoItem item;
    int opcao;
    cout << "Programa gerador de pilha:\n";

    do {
        cout << "Digite 0 para parar o programa!\n";
        cout << "Digite 1 para inserir um elemento!\n";
        cout << "Digite 2 para remover um elemento!\n";
        cout << "Digite 3 para imprimir a pilha!\n";
        cin >> opcao;
        if (opcao == 1){
            cout << "Digite o elemento a ser inserido:\n";
            cin >> item;
            fila1.inserir(item);
        } else if (opcao == 2){
            item = fila1.remover();
            cout << "Elemento Removido: " << item << endl;
        } else if (opcao == 3){
            fila1.imprimir();
        }

    } while(opcao != 0);

    return 0;
}

///g++ main_fila.cpp fila.cpp -o fila.exe
