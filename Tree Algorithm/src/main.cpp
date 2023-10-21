#include <iostream>
#include <locale.h>
#include "mainMenu.h"
#include "Classes/No.cpp"
#include "Classes/Arvore.cpp"

using namespace std;

// --------------------------- PROGRAMA PRINCIPAL ---------------------------
int main() {
    setlocale(LC_ALL, "Portuguese"); // Definição do idioma do programa

    Arvore arvore; // Fazemos a referência a classe Arvore

    int op;
    int num;

    do {
        cout << endl << endl << endl;
        menuPrincipal();
        cin >> op;
        cout << endl << endl << endl;

        if(op == 0){
        	break;
        }

        switch (op){
            case 1:
                cout << "Digite um Número: ";
                cin >> num;
                arvore.inserir(num);
                break;
            case 2:
                cout << "Percorrendo a Árvore em Ordem..." << endl << endl;
                cout << "Resultado: ";
                arvore.emOrdem(arvore.getRaiz());
                break;
            case 3:
                cout << "Raiz: " << arvore.primeiroNum;
                break;
            default:
                continue;
        }

    } while(true);

    return 0;
}
// ------------------------ FIM DO PROGRAMA PRINCIPAL -----------------------
