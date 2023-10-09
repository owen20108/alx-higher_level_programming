#include "lists.h"
/**
 * reverse_list - reverse  list
 * @head: pointer to list
 * Return: add of new head
 */
listint_t *reverse_list(listint_t **head)
{
	listint_t *prev = NULL, *next;

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;
	return (*head);
}
/**
 * is_palindrome - tests if list is a palindrome
 * @head: pointer to list
 * Return: 1 if palindrome, 0 if not
 */
int is_palindrome(listint_t **head)
{
	listint_t *slower = *head, *faster = *head, *one, *two;

	if (!(head && *head) || (*head)->next == NULL)
		return (1);
	while (faster != NULL && faster->next != NULL)
	{
		faster = faster->next->next;
		one = slower;
		slower = slower->next;
	}

	slower = reverse_list(&slower);
	two = slower;
	faster = *head;
	while (faster && slower)
	{
		if (faster->n != slower->n)
			return (0);
		faster = faster->next;
		slower = slower->next;
	}
	slower = reverse_list(&two);
	one->next = slower;
	return (1);
}
