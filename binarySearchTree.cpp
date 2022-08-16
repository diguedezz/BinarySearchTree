/*
    Implementação de Classe baseando-se nos exemplos do livro "Introduction to algorithms" por Cormen.
    Representação do tipo abstrato de dado: Árvore de busca binária

    Código escrito por Diego Guedes, aluno do 4º período de Estrutura de Dados II, 
    do curso Ciência da Computação da Universidade Presbiteriana Mackenzie.

    Terça-Feira, 16 de agosto de 2022, 03:55 da manhã. 

*/

#include <iostream>
using namespace std;

class binarySearchTree(){
    private:
        Key key;
        int left;
        int right;

    public:
    Key getKey(){return this->key;}
    void setKey(Key key){this->key = key;}
    int getLeft(){return this->left;}
    void setLeft(int left){this->left = left;}
    int getRight(){return this->right;}
    void setRight(int Right){this->right = right;}

    //iterative-Tree-Search(x,k)
    Node search(int * x , Key k){
        while (x != nullptr){
            if (k < x->getKey())
                x = x->getLeft();
            else
                x = x->getRight();
        }
        return x;
    }

    //Tree-Minimum(x)
    Node minimum(int * x){
        while (x->getLeft() != nullptr)
            x = x->getLeft();
        return x;
    }
    
    //Tree-Maximum(x)
    Node maximum(int * x){
        while (x->getRight() != nullptr)
            x = x->getRight();
        return x;
    }
}