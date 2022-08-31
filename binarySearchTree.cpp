/*
    Implementa��o de Classe baseando-se nos exemplos do livro "Introduction to algorithms" por Cormen.
    Representa��o do tipo abstrato de dado: �rvore de busca bin�ria

    C�digo escrito por Diego Guedes, aluno do 4� per�odo de Estrutura de Dados II, 
    do curso Ci�ncia da Computa��o da Universidade Presbiteriana Mackenzie.

    Ter�a-Feira, 16 de agosto de 2022, 03:55 da manh�. 

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
	
    
    //Tree-Search(x,k)
    //pesquisarRec(int chave)
	Node* recursiveSearch(int key){
        Node* node = this->source;
		if(node == nullptr || key == node->getKey())
			return node;
		if(key < node->getKey)
			return recursiveSearch(Node* node->getLeft(), key);
		else return recursiveSearch(Node* node->getRight(), key);
	}

    //iterative-Tree-Search(x,k)
    //pesquisarIter(int chave)
    Node* iterativeSearch(int key){
        Node* node = this->source;
        while (node != nullptr){
            if (key < node->getKey())
                node = node->getLeft();
            else
                node = node->getRight();
        }
        return node;
    }

	//qdeNos()
	int nodeCounter(){
        Node* node = this->source;
        if(node == nullptr)
            return 0;
		int counter = 0;
		if(node != nullptr){
			counter++;
			nodeCounter(node->getLeft());
			nodeCounter(node->getRight());
		}
	}
	
    //alturaBST()
    int treeHeight(){
    }

    //Tree-Minimum(x)
    //min()
    Node* minimumNode(){
        Node* node = this->source;
        while (node->getLeft() != nullptr)
            node = node->getLeft();
        return node;
    }
    
    //Tree-Maximum(x)
    //max()
    Node* maximumNode(){
        Node* node = this->source;
        while (node->getRight() != nullptr)
            node = node->getRight();
        return node;
    }

    //folhas()
    int keyLeafs(){}
    
    //removerFolha(int chave)
    void deleteLeaf(int key){}
}