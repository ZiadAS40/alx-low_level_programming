# Doubly Linked List

This repository contains an implementation of a doubly linked list in C. A doubly linked list is a data structure that consists of a sequence of nodes, where each node contains a reference to the previous and next node in the sequence.

## Features

- Insertion of elements at the beginning, end, or at a specific position in the list.
- Deletion of elements from the list.
- Searching for an element in the list.
- Traversing the list in both forward and backward directions.
- Counting the number of elements in the list.

## Usage

To use the doubly linked list in your C program, follow these steps:

1. Clone this repository or download the source code.
2. Include the `lists.h` header file in your program.
3. Compile your program with the `doubly_linked_list.c` source file.
4. Use the provided functions to perform operations on the doubly linked list.

## Example

Here's an example of how to use the doubly linked list:
#include <stdio.h>
#include "lists.h"

int main(void) {
    /* Create a new doubly linked list */
    List *list = create_list();

    /* Insert elements into the list */
    insert_beginning(list, 10);
    insert_end(list, 20);
    insert_position(list, 30, 1);

    /* Print the list */
    printf("List: ");
    print_list(list);

    /* Search for an element in the list */
    int search_value = 20;
    Node *search_result = search(list, search_value);
    if (search_result != NULL) {
        printf("Element %d found in the list.\n", search_value);
    } else {
        printf("Element %d not found in the list.\n", search_value);
    }

    /* Delete an element from the list */
    int delete_value = 30;
    delete(list, delete_value);

    /* Print the updated list */
    printf("Updated List: ");
    print_list(list);

    /* Count the number of elements in the list */
    int count = count_elements(list);
    printf("Number of elements in the list: %d\n", count);

    /* Free the memory allocated for the list */
    free_list(list);

    return 0;
}
