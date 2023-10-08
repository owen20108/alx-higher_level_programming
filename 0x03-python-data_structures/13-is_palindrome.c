#include "lists.h"

/**
 * is_palindrome - func calls check_palndrm to know  list is palindrome
 * @head: pointer to the begin of the list
 * Return: 0 if not , else 1
 */
int is_palindrome(listint_t **head)
{
	if (head == NULL || *head == NULL)
		return (1);
	return (check_palndrm(head, *head));
}

/**
 * check_palndrm - func to test  list is palindrome
 * @head: pointer to the begin of the list
 * @last: pointer to the end of the list
 * Return: 0 if not,else 1
 */
int check_palndrm(listint_t **head, listint_t *last)
{
	if (last == NULL)
		return (1);
	if (check_palndrm(head, last->next) && (*head)->n == last->n)
	{
		*head = (*head)->next;
		return (1);
	}
	return (0);
}
