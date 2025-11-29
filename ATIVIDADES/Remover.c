#include <stdio.h>
#include <stdlib.h>

 struct Node {
    int data;
    struct Node* next;
};

// Função para remover um elemento da lista ligada

void removerElemto(struct Node* head, int elemento) {
    struct Node* temp = head;
    struct Node* prev = NULL;

    // Se o nó a ser removido é o nó cabeça
    if (temp != NULL && temp->data == elemento) {
        head = temp->next; // Muda a cabeça
        free(temp); // Libera a memória do nó removido
        return;
    }

    // Procura o nó a ser removido, mantendo o nó anterior
    while (temp != NULL && temp->data != elemento) {
        prev = temp;
        temp = temp->next;
    }

    // Se o valor não foi encontrado na lista
    if (temp == NULL) return;

    // Desconecta o nó do linked list
    prev->next = temp->next;

    free(temp); // Libera a memória do nó removido
}