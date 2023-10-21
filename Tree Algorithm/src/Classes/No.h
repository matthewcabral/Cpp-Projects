/*
 * No.h
 *
 *  Created on: Oct 20, 2023
 *      Author: matheuscabral
 */
#include <iostream>
#include <locale.h>
using namespace std;

#ifndef NO_H_
#define NO_H_

class No {
	private: // Assim como no JAVA, podemos declarar variáveis do tipo PRIVADO
        No *esq, *dir; // Ponteiro para o nó a esquerda e nó a direita
        int num; // Número que será inserido pelo usuário

    public: // Assim como no JAVA, podemos declarar variáveis do tipo PUBLICO

        // CONSTRUTOR da classe Nó
		No(int num){
			this->num = num; // Inicialmente num vai receber ele mesmo, ou seja, um valor NULL

			/* Ao iniciar o Construtor os ponteiros esq e dir devem ser
			nulos, pois não estão apontando para nenhum filho da classe No */
			esq = NULL;
			dir = NULL;
		}

		// Métodos SET e GET
		int getNum(){ // Retorna o Número que foi inserido
			return num;
		}

		No* getEsq(){ // Retorna o nó a Esquerda
			return esq;
		}
		void setEsq(No* esq){ // Seta o nó a Esquerda
			this->esq = esq;
		}

		No* getDir(){ // Retorna o nó a Direita
			return dir;
		}
		void setDir(No* dir){ // Seta o nó a Direira
			this->dir = dir;
		}
};

#endif /* NO_H_ */
