/* C Programs for All Operations on a Singly Linked List

Below are the **9 C programs** from your classroom question. Each program includes a function for the required operation and a `main()` function to call it.

**Important:** Positions start from `1`. Each program uses a singly linked list and handles an empty list where necessary.

## 1. Insertion at the Beginning

This function inserts a new node at the beginning of the linked list. */


#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;

void insert_begin(int value) {
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));

    newnode->data = value;
    newnode->next = head;
    head = newnode;
}

void display() {
    struct node *temp = head;

    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    insert_begin(30);
    insert_begin(20);
    insert_begin(10);

    display();
    return 0;
}
```

/* *Output:**

```text
10 -> 20 -> 30 -> NULL */


// 2. Insertion at the End

//This function inserts a new node at the end of the linked list.

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;

void insert_end(int value) {
    struct node *newnode, *temp;

    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = value;
    newnode->next = NULL;

    if (head == NULL) {
        head = newnode;
        return;
    }

    temp = head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newnode;
}

void display() {
    struct node *temp = head;

    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    insert_end(10);
    insert_end(20);
    insert_end(30);

    display();
    return 0;
}


**Output:**

```text
10 -> 20 -> 30 -> NULL
```

## 3. Insertion at a Given Position

This function inserts a new node at the specified position.

```c
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;

void insert_pos(int value, int pos) {
    struct node *newnode, *temp;
    int i;

    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = value;

    if (pos < 1) {
        printf("Invalid position\n");
        free(newnode);
        return;
    }

    if (pos == 1) {
        newnode->next = head;
        head = newnode;
        return;
    }

    temp = head;

    for (i = 1; i < pos - 1 && temp != NULL; i++)
        temp = temp->next;

    if (temp == NULL) {
        printf("Invalid position\n");
        free(newnode);
        return;
    }

    newnode->next = temp->next;
    temp->next = newnode;
}

void display() {
    struct node *temp = head;

    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    insert_pos(10, 1);
    insert_pos(30, 2);
    insert_pos(20, 2);

    display();
    return 0;
}
```

**Output:**

```text
10 -> 20 -> 30 -> NULL
```

## 4. Traversal of a Linked List

Traversal means visiting and displaying every node of the linked list.

```c
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;

void insert_end(int value) {
    struct node *newnode, *temp;

    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = value;
    newnode->next = NULL;

    if (head == NULL) {
        head = newnode;
        return;
    }

    temp = head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newnode;
}

void traversal() {
    struct node *temp = head;

    if (head == NULL) {
        printf("List is empty\n");
        return;
    }

    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    insert_end(10);
    insert_end(20);
    insert_end(30);

    traversal();
    return 0;
}
```

**Output:**

```text
10 20 30
```

## 5. Deletion at the Beginning

This function deletes the first node of the linked list.

```c
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;

void insert_end(int value) {
    struct node *newnode, *temp;

    newnode = malloc(sizeof(struct node));
    newnode->data = value;
    newnode->next = NULL;

    if (head == NULL) {
        head = newnode;
        return;
    }

    temp = head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newnode;
}

void delete_begin() {
    struct node *temp;

    if (head == NULL) {
        printf("List is empty\n");
        return;
    }

    temp = head;
    head = head->next;
    free(temp);
}

void display() {
    struct node *temp = head;

    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    insert_end(10);
    insert_end(20);
    insert_end(30);

    delete_begin();
    display();

    return 0;
}
```

**Output:**

```text
20 -> 30 -> NULL
```

## 6. Deletion at the End

This function deletes the last node of the linked list.

```c
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;

void insert_end(int value) {
    struct node *newnode, *temp;

    newnode = malloc(sizeof(struct node));
    newnode->data = value;
    newnode->next = NULL;

    if (head == NULL) {
        head = newnode;
        return;
    }

    temp = head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newnode;
}

void delete_end() {
    struct node *temp, *prev;

    if (head == NULL) {
        printf("List is empty\n");
        return;
    }

    if (head->next == NULL) {
        free(head);
        head = NULL;
        return;
    }

    temp = head;

    while (temp->next != NULL) {
        prev = temp;
        temp = temp->next;
    }

    prev->next = NULL;
    free(temp);
}

void display() {
    struct node *temp = head;

    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    insert_end(10);
    insert_end(20);
    insert_end(30);

    delete_end();
    display();

    return 0;
}
```

**Output:**

```text
10 -> 20 -> NULL
```

## 7. Deletion at a Given Position

This function deletes the node at the specified position.

```c
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;

void insert_end(int value) {
    struct node *newnode, *temp;

    newnode = malloc(sizeof(struct node));
    newnode->data = value;
    newnode->next = NULL;

    if (head == NULL) {
        head = newnode;
        return;
    }

    temp = head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newnode;
}

void delete_pos(int pos) {
    struct node *temp, *prev;
    int i;

    if (pos < 1 || head == NULL) {
        printf("Invalid position\n");
        return;
    }

    temp = head;

    if (pos == 1) {
        head = head->next;
        free(temp);
        return;
    }

    for (i = 1; i < pos && temp != NULL; i++) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Invalid position\n");
        return;
    }

    prev->next = temp->next;
    free(temp);
}

void display() {
    struct node *temp = head;

    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    insert_end(10);
    insert_end(20);
    insert_end(30);
    insert_end(40);

    delete_pos(2);
    display();

    return 0;
}
```

**Output:**

```text
10 -> 30 -> 40 -> NULL
```

## 8. Deletion of a Certain Value

This function deletes the **first occurrence** of the given value from the linked list.

```c
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;

void insert_end(int value) {
    struct node *newnode, *temp;

    newnode = malloc(sizeof(struct node));
    newnode->data = value;
    newnode->next = NULL;

    if (head == NULL) {
        head = newnode;
        return;
    }

    temp = head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newnode;
}

void delete_value(int value) {
    struct node *temp = head, *prev = NULL;

    while (temp != NULL && temp->data != value) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Value not found\n");
        return;
    }

    if (prev == NULL)
        head = temp->next;
    else
        prev->next = temp->next;

    free(temp);
}

void display() {
    struct node *temp = head;

    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    insert_end(10);
    insert_end(20);
    insert_end(30);
    insert_end(20);

    delete_value(20);
    display();

    return 0;
}
```

**Output:**

```text
10 -> 30 -> 20 -> NULL
```

## 9. Deletion of All Occurrences of a Certain Value

This function deletes **every node containing the given value** from the linked list.

```c
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;

void insert_end(int value) {
    struct node *newnode, *temp;

    newnode = malloc(sizeof(struct node));
    newnode->data = value;
    newnode->next = NULL;

    if (head == NULL) {
        head = newnode;
        return;
    }

    temp = head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newnode;
}

void delete_all(int value) {
    struct node *temp, *prev;

    while (head != NULL && head->data == value) {
        temp = head;
        head = head->next;
        free(temp);
    }

    prev = head;

    if (prev == NULL)
        return;

    temp = head->next;

    while (temp != NULL) {
        if (temp->data == value) {
            prev->next = temp->next;
            free(temp);
            temp = prev->next;
        } else {
            prev = temp;
            temp = temp->next;
        }
    }
}

void display() {
    struct node *temp = head;

    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    insert_end(10);
    insert_end(20);
    insert_end(30);
    insert_end(20);
    insert_end(40);
    insert_end(20);

    delete_all(20);
    display();

    return 0;
}
```

**Output:**

```text
10 -> 30 -> 40 -> NULL
```

---

## Quick Revision for Your Exam

| No. | Operation                   | Function name    |
| --- | --------------------------- | ---------------- |
| 1   | Insertion at beginning      | `insert_begin()` |
| 2   | Insertion at end            | `insert_end()`   |
| 3   | Insertion at a position     | `insert_pos()`   |
| 4   | Traversal                   | `traversal()`    |
| 5   | Deletion at beginning       | `delete_begin()` |
| 6   | Deletion at end             | `delete_end()`   |
| 7   | Deletion at a position      | `delete_pos()`   |
| 8   | Deletion of a certain value | `delete_value()` |
| 9   | Deletion of all occurrences | `delete_all()`   |

**Exam tip:** You do not need to memorise nine completely different linked-list structures. The `struct node`, `head` pointer, and `display()` function are similar in most programs. Focus on understanding how each operation changes the `next` pointer.

One useful next step is to practise writing these programs with **user input using `scanf()`**, since your teacher may ask you to enter values and positions during a practical exam.