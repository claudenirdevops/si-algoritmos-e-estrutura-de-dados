#include<stdio.h>
#include<stdlib.h>

// Estrutura do nó da lista ligada

struct Node {
    int data;
    struct Node* next;
};

// Função para percorrer e buscar um ele elemento na lista ligada

struct Node* buscarElemento(struct Node* head, int elemento) {
    struct Node* current = head;
    while (current != NULL) {
        if (current->data == valor) {
            return current; // Elemento encontrado
        }
        current = current->next;
    }
    return NULL; // Elemento não encontrado
}