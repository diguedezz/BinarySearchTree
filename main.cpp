#include <iostream>
#include "binarySearchTree.cpp"
#include "Node.h"

using namespace std;

int main(int argc, char *argv[])
{
	binarySearchTree tree;
    int option, x;
    cout << ("\nTestando o TAD BST (Elementos do tipo int)\n");

	do {
    	cout << "\n\n";
            <<  "\n***********************************"
            <<  "\n\tMenu - Arvore BST\n"
            <<  "\nEntre com a opcao:"
		    <<  "\n ----1: Inserir"
		    <<  "\n ----2: Excluir"
		    <<  "\n ----3: Pesquisar"
		    <<  "\n ----4: Imprimir em ordem"
		    <<  "\n ----5: Sair do programa\n"
		    <<  "\n***********************************"
		    <<  "\n-> ";
		cin >> option;
        
		switch(option) {
	 		case 1: {
		       cout << "\n Informe o valor (int) -> ";
		       cin >> x;
		       tree.insert(x);
		       break;
			}
			case 2: {
		       cout << "\n Ainda nao implementado! ";

		       break;
			}
			case 3: {
		       cout << "\n Ainda nao implementado! ";
		       break;
			}
			case 4: {
                cout << "Percorrendo em ordem...\n";
                tree.inOrder(tree.getSource());
                break;
			}
			case 5:{
                break;
			}

			default:
				cout << "\n Opcao invalida! \n\n\n";
        } // fim switch
    } while(option != 5);


	return 0;
}