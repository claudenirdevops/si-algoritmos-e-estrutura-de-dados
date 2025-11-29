#include <stdio.h>
#include <stdlib.h>

int dado;

// Inserção de um novo nó no início da lista

struct Node* newNode = criarNovoNode(dado);
    newNode->proximo = primeiroNode;
    primeiroNode = newNode;


// Inserção de um novo nó no meio da lista




    //Adciocionar nó no final da lista