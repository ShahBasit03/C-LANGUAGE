#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

// 1. FUNCTION TO ALLOCATE MEMORY FOR A NEW NODE
struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

// 2. HELPER TO BUILD A CIRCULAR LINKED LIST
struct Node* insertEnd(struct Node* head, int value) {
    struct Node* newNode = createNode(value);
    
    if (head == NULL) {
        head = newNode;
        newNode->next = head; // Point to itself to make it circular
        return head;
    }
    
    struct Node* temp = head;
    while (temp->next != head) {
        temp = temp->next;
    }
    
    temp->next = newNode;
    newNode->next = head; // Complete the circle
    return head;
}

// 3. YOUR REMOVE FUNCTION
struct Node* removeElementsCircular(struct Node* head, int data) {
    if (head == NULL) {
        return NULL;
    }

    struct Node* last = head;
    while (last->next != head) {
        last = last->next;
    }

    while (head != NULL && head->data == data) {
        struct Node* temp = head;
        if (head == head->next) { 
            free(temp);
            return NULL;
        }
        head = head->next;
        last->next = head; 
        free(temp);
    }

    if (head == NULL) {
        return NULL;
    }

    struct Node* p = head;
    while (p->next != head) {
        if (p->next->data == data) {
            struct Node* q = p->next;
            p->next = q->next;
            free(q); 
        } else {
            p = p->next; 
        }
    }

    return head;
}

// 4. HELPER TO PRINT THE CIRCULAR LIST
void printCircularList(struct Node* head) {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }
    struct Node* temp = head;
    do {
        printf("%d -> ", temp->data);
        temp = temp->next;
    } while (temp != head);
    printf("(back to head: %d)\n", head->data);
}

// 5. MAIN EXECUTION
int main() {
    struct Node* head = NULL;

    // Create a circular list: 2 -> 3 -> 2 -> 4 -> 2 -> (loops back to 2)
    head = insertEnd(head, 2);
    head = insertEnd(head, 3);
    head = insertEnd(head, 2);
    head = insertEnd(head, 4);
    head = insertEnd(head, 2);

    printf("Original List:\n");
    printCircularList(head);

    // Remove all occurrences of 2
    head = removeElementsCircular(head, 2);

    printf("\nList after removing all 2s:\n");
    printCircularList(head);

    return 0;
}