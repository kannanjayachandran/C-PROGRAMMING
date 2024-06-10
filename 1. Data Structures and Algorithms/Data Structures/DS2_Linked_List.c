#include <stdio.h>
#include <stdlib.h>

// Node
struct Node {
    int data;
    struct Node* next;
};

// creating a new node with data
struct Node* createNode( int data ) {

    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        perror("Memory allocation failed..");
        exit(EXIT_FAILURE);
    }else{
        newNode -> data = data;
        newNode -> next = NULL;
        return newNode;
    }
}

// Insert at the beginning
void prepend( struct Node** head, int data ) {
    
    struct Node* newNode = createNode(data);
    newNode -> next = *head;
    *head = newNode;
}

// Display list
void show(struct Node* head){
    
    struct Node* current = head;
    while(current != NULL) {
        printf("%d -> ", current -> data);
        current = current -> next;
    }
    printf("NULL\n");
}

int main() {

    struct Node* head = NULL;

    // Insert elements at the beginning
    prepend(&head, 3);
    prepend(&head, 2);
    prepend(&head, 1);

    // Display the linked list
    printf("Linked List: ");
    show(head);

    // Clean up and free memory
    while (head != NULL) {
        struct Node* temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}