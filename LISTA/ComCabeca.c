#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct LinkedList {
    struct Node* head;
};

int main() {
    struct LinkedList mylist;
    myList.head = (struct Node*) malloc(sizeof(struct Node));
    myList.head = NULL;
    
    // Inserção de elementos
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode->data = 40;
    newNode->next = myList.head->next;
    myList.head->next = newNode;
    
    // Remoção de elementos
    struct Node* temp = myList.head->next;
    myList.head->next = temp->next;
    free(temp);

    return 0;
}
