#include <stdio.h>
#include <stdlib.h>

int dado;

// Inserção de um novo nó no início da lista

struct Node* newNode = criarNovoNode(dado);
    newNode->proximo = primeiroNode;
    primeiroNode = newNode;


// Inserção de um novo nó no meio da lista

struct Node* newNode = criarNovoNode(dado);
newNode->proximo = nodeAnterior->proximo;
nodeAnterior->proximo = newNode;

//Adciocionar nó no final da lista

struct Node* newNode = criarNovoNode(dado);
newNode->proximo = NULL;
ultimoNode->proximo = newNode;
ultimoNode = newNode;

