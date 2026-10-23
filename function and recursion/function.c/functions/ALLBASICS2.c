
#include <stdio.h>

#define MAX 100

/* a) Traversal */
void traversal(int arr[], int n) {
    int i;

    printf("Array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

/* b1) Linear Search */
void linearSearch(int arr[], int n, int key) {
    int i;

    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            printf("Element found at index %d\n", i);
            return;
        }
    }

    printf("Element not found\n");
}

/* b2) Binary Search (array must be sorted) */
void binarySearch(int arr[], int n, int key) {
    int low = 0, high = n - 1, mid;

    while (low <= high) {
        mid = low + (high - low) / 2;

        if (arr[mid] == key) {
            printf("Element found at index %d\n", mid);
            return;
        }
        else if (arr[mid] < key) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    printf("Element not found\n");
}

/* c) Insertion at a given index */
int insertion(int arr[], int n, int value, int pos) {
    int i;

    if (n >= MAX || pos < 0 || pos > n) {
        printf("Invalid position or array is full\n");
        return n;
    }

    for (i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos] = value;
    n++;

    return n;
}

/* d) Deletion at a given index */
int deletion(int arr[], int n, int pos) {
    int i;

    if (pos < 0 || pos >= n) {
        printf("Invalid position\n");
        return n;
    }

    for (i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    n--;

    return n;
}

/* e) Merging two arrays */
int merging(int a[], int n, int b[], int m, int result[]) {
    int i, k = 0;

    if (n + m > MAX) {
        printf("Arrays are too large to merge\n");
        return 0;
    }

    for (i = 0; i < n; i++) {
        result[k] = a[i];
        k++;
    }

    for (i = 0; i < m; i++) {
        result[k] = b[i];
        k++;
    }

    return k;
}

/* f) Splitting an array into two halves */
void splitting(int arr[], int n) {
    int i, mid = n / 2;

    printf("First half: ");
    for (i = 0; i < mid; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nSecond half: ");
    for (i = mid; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
}

int main() {
    int arr[MAX], b[MAX], result[MAX];
    int n, m, i, choice, key, value, pos, newSize;

    printf("Enter number of elements (1-%d): ", MAX);
    scanf("%d", &n);

    if (n < 1 || n > MAX) {
        printf("Invalid array size\n");
        return 0;
    }

    printf("Enter array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    do {
        printf("\n--- ARRAY OPERATIONS ---\n");
        printf("1. Traversal\n");
        printf("2. Linear Search\n");
        printf("3. Binary Search (sorted array only)\n");
        printf("4. Insertion\n");
        printf("5. Deletion\n");
        printf("6. Merging\n");
        printf("7. Splitting\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                traversal(arr, n);
                break;

            case 2:
                printf("Enter element to search: ");
                scanf("%d", &key);
                linearSearch(arr, n, key);
                break;

            case 3:
                printf("Enter element to search: ");
                scanf("%d", &key);
                binarySearch(arr, n, key);
                break;

            case 4:
                printf("Enter value to insert: ");
                scanf("%d", &value);
                printf("Enter index (0 to %d): ", n);
                scanf("%d", &pos);

                newSize = insertion(arr, n, value, pos);
                n = newSize;

                traversal(arr, n);
                break;

            case 5:
                printf("Enter index to delete (0 to %d): ", n - 1);
                scanf("%d", &pos);

                newSize = deletion(arr, n, pos);
                n = newSize;

                traversal(arr, n);
                break;

            case 6:
                printf("Enter number of elements in second array: ");
                scanf("%d", &m);

                if (m < 0 || m > MAX - n) {
                    printf("Invalid size for second array\n");
                    break;
                }

                printf("Enter second array elements:\n");
                for (i = 0; i < m; i++) {
                    scanf("%d", &b[i]);
                }

                newSize = merging(arr, n, b, m, result);

                printf("Merged array: ");
                traversal(result, newSize);
                break;

            case 7:
                splitting(arr, n);
                break;

            case 0:
                printf("Program ended\n");
                break;

            default:
                printf("Invalid choice\n");
        }

    } while (choice != 0);

    return 0;
}
