/*
 * Arvore.h
 *
 *  Created on: Oct 20, 2023
 *      Author: matheuscabral
 */

#ifndef ARVORE_H_
#define ARVORE_H_
#include <iostream>
#include <locale.h>
#include "No.cpp"
using namespace std;

class Arvore {
private:
    No* raiz; // Ponteiro que indica a raiz da Árvore

public:

    int primeiroNum = 0;

    // Construtor da classe Árvore
    Arvore(){
        raiz = NULL; // Inicialmente a raiz é Vazia ou NULL (Nula) pois não há nenhum valor inserido
    }

    // Função GET E SET
    No* getRaiz(){ // Retorna o Numero da Raiz
        return raiz;
    }

    // Função para inserir um valor
    void inserir(int num){
        if(raiz == NULL){ // Se a raiz for igual a NULL, quer dizer que a árvore está vazia
            raiz = new No(num); // e então criamos um novo nó passando a num
            primeiroNum = num;

        } else { // Se a raiz NÃO for NULL, quer dizer qua a árvore não está vazia
            /* Então, chama-se uma função auxiliar abaixo, que servirá para começar uma verificação
             a partir da raiz e saber onde que o nó será inserido */
            inserirAux(raiz, num); // Aqui passamos o Número da Raiz e o novo número a ser inserido
        }
    }

    // Função Auxiliar que irá fazer uma varredura na árvore e descobrir onde será inserido o novo Número
    void inserirAux(No* no, int num){

        if(num < no->getNum()){ // Se o NUM (Numero) for MENOR que a raiz (Número RAIZ), vamos inserir esse Número a ESQUERDA. Se não, vá para o próximo ELSE IF

            // Primeiro verificamos se tem um nó a esquerda.
            if(no->getEsq() == NULL) { // Se o nó a esquerda for NULL
                No* novo_no = new No(num); // criamos um novo Nó
                no->setEsq(novo_no); // e dizemos que esse novo Nó criado vai receber o número que foi digitado

            } else { // Se não, se o nó a esquerda for diferente de NULL, então continuamos buscando esse nó a esquerda até que ele seja NULL
                // Basicamente ele vai repetir a função inserirAux até que o nó seja igual a NULL
                inserirAux(no->getEsq(), num);
            }

        } else if (num > no->getNum()){ // Se o NUM (Número) for MAIOR que a raiz (Número RAIZ), vamos inserir esse Numero a DIREITA

            if(no->getDir() == NULL) {
                No* novo_no = new No(num);
                no->setDir(novo_no);
            } else {
                inserirAux(no->getDir(), num);
            }
        }
    }

    void emOrdem(No* no) { // Função para percorrer a Árvore em ordem
        if(no != NULL){ // Se o nó for diferente de NULL
            emOrdem(no->getEsq());{ // Primeiro percorremos a árvore a esquerda
                cout << no->getNum() << " "; // Mostramos o valor que será percorrido
                emOrdem(no->getDir()); // e depois percorremos a árvore a direita
            }
        }
    }
};

#endif /* ARVORE_H_ */
