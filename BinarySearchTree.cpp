/*
    Implementação de Classe baseando-se nos exemplos do livro "Introduction to algorithms" por Cormen.
    Representação do tipo abstrato de dado: Árvore de busca binária

    Código escrito por Diego Guedes, aluno do 4º período de Estrutura de Dados II, 
    do curso Ciência da Computação da Universidade Presbiteriana Mackenzie.

    Terça-Feira, 16 de agosto de 2022, 03:55 da manhã. 

*/

#include <iostream>
#include "Node.h"

using namespace std;

class binarySearchTree(){
    private:
        Node* source;

    public:
    	binarySearchTree(){
    		source = nullptr;
		}
		
//******************************************************************
	void insert(int key){
		if(source == nullptr) // verifica se a ?rvore est? vazia
			source = new Node(key); // cria um novo n?
		else
			insertAux(source, key);
	}


	void insertAux(Node *node, int key){
		// se for menor, ent?o insere ? esquerda
		if(key < node->getKey()){
			// verifica se a esquerda ? nulo
			if(node->getLeft() == nullptr){
				Node *newNode = new Node(key);
				node->setLeft(newNode); // seta o novo_no ? esquerda
			}
			else{
				// sen?o, continua percorrendo recursivamente
				insertAux(node->getLeft(), key);
			}
		}
		// se for maior, ent?o insere ? direita
		else if(key > node->getKey()){
			// verifica se a direita ? nulo
			if(node->getRight() == nullptr){
				Node *newNode = new Node(key);
				node->setRight(newNode); // seta o novo_no ? direita
			}
			else{
				// sen?o, continua percorrendo recursivamente
				insertAux(node->getRight(), key);
			}
		}
		// se for igual, n?o vai inserir
		// n?o pode existir 2 chaves iguais
	}


	Node* getSource(){return source;}


	//Inorder-Tree-Walk(x)
	void inOrder(Node* node){
		if(node != nullptr){
			inOrdemrnode->getLeft());
			cout << node->getKey() << " ";
			inOrder(node->getRight());
		}
	}

	//preorder-Tree-Walk(x)
	void preOrder(Node* node){
		if(node != nullptr){
			cout << node->getKey() << " ";
			preOrder(node->getLeft());
			preOrder(node->getRight());
		}
	}
	
	//posorder-Tree-Walk(x)
	void posOrder(Node* node){
		if(node != nullptr){
			posOrder(node->getLeft());
			posOrder(node->getRight());
			cout << node->getKey() << " ";
		}
	}
	
//ATIVIDADES 1
	
    //iterative-Tree-Search(x,k)
    Node* iterativeSearch(Node * node , int key){
        while (node != nullptr){
            if (key < node->getKey())
                node = node->getLeft();
            else
                node = node->getRight();
        }
        return node;
    }


	//Tree-Search(x,k)
	Node* recursiveSearch(Node* node, int key){
		if(node == nullptr || key == node->getKey())
			return node;
		if(key < node->getKey)
			return recursiveSearch(Node* node->getLeft(), key);
		else return recursiveSearch(Node* node->getRight(), key);
	}

	//qdeNos()
	int nodeCounter(Node* node){
		int counter = 0;
		if(node != nullptr){
			counter++;
			nodeCounter(node->getLeft());
			nodeCounter(node->getRight());
		}
	}
	
    //Tree-Minimum(x)
    Node* minimum(Node* node){
        while (node->getLeft() != nullptr)
            node = node->getLeft();
        return node;
    }
    
    //Tree-Maximum(x)
    Node* maximum(Node* node){
        while (node->getRight() != nullptr)
            node = node->getRight();
        return node;
    }
}
