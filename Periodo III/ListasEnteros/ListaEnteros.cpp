#include "lista.h"
#include <iostream>

using namespace std;

int main(){

    ListaEnteros lin1(10);

    lin1.adjuntar(12);
    lin1.adjuntar(7);
    lin1.adjuntar(19);
    lin1.imprimirLista();

    lin1.adjuntar(30);
    lin1.imprimirLista();

    lin1.insertar(1,41);
    lin1.imprimirLista();
    
    lin1.remover(2);
    lin1.imprimirLista();

    return 0;
}