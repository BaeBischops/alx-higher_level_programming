#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>

/*
 * Struct Definition:
 * defining the structure named `listint_s`
 * 
 * Each node of the linked list contains an integer `n` 
 * and a pointer `next` that points to the next node in the list.
 *
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

/*
 * Function Declarations:
 * declaring a function named `print_listint` that takes a pointer to a `listint_t`
 *
 * 
 */
size_t print_listint(const listint_t *h);

/*
 * declares a function named `add_nodeint` that takes a double pointer to a `listint_t`
 * and an integer `n`
 */
listint_t *add_nodeint(listint_t **head, const int n);

/*
 * declares a function named `free_listint` that takes a pointer to the head of a linked list 
 * and frees the memory allocated for the entire list.
 */
void free_listint(listint_t *head);

/*
 * This declares a function named `check_cycle` that takes a pointer to a `listint_t`
 * and returns an int
 */
int check_cycle(listint_t *list);

#endif /* LISTS_H */
