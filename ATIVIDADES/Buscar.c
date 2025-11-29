#include<stdio.h>
#include<stdlib.h>

// Buscar um elemento na lista ligada

int main() {
    struct Node* head = NULL;
    struct Node* second = NULL;
    struct Node* third = NULL;

    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;  

    int elementoBuscado = 2;
    struct Node* resultado = buscarElemento(head, elementoBuscado);
    
    if(resultado != NULL) {
        printf("Elemento encontrado: %d\n", resultado->data);
    } else {
        printf("Elemento %d não encontrado na lista.\n", elementoBuscado);
    }
    
    return 0;
}