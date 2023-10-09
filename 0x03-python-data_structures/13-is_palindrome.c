#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * is_palindrome - checks for list is palindrome
 * @head: head of  list
 * Return:  boolean
 */
int is_palindrome(listint_t **head)
{
	int length = 0, i = 0;
	listint_t *tmpo;
	int *Ns;

	tmpo = *head;
	if ((*head) == NULL)
		return (1);
	while (tmpo->next != NULL)
	{
		length++;
		tmpo = tmpo->next;
	}
	if (length == 1)
		return (1);
	Ns = malloc(sizeof(int) * length);
	tmpo = *head;
	while (tmpo != NULL)
	{
		Ns[i] = tmpo->n;
		tmpo = tmpo->next;
		i++;
	}
	for (i = 0; i <= length / 2; i++)
	{
		if(Ns[i] != Ns[length - i])
			return (0);
	}
	return (1);
}
