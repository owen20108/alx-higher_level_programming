#include "lists.h"

/**
 * insert_node - insert a number into a linked list
 * @head: pointer for  list
 * @number: add number
 * Return: address of  node , or NULL
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *oldnd, *newnd, *currentnd;

	if (head == NULL)
		return (NULL);

	newnd = malloc(sizeof(listint_t));
	if (newnd == NULL)
		return (NULL);

	newnd->n = number;
	oldnd = NULL;
	currentnd = *head;

	for (; currentnd != NULL && currentnd->n < number;)
	{
		oldnd = currentnd;
		currentnd = currentnd->next;
	}

	newnd->next = currentnd;

	if (oldnd != NULL)
		oldnd->next = newnd;
	else
		*head = newnd;

	return (newnd);
}
