#include <stdlib.h>
#include "lists.h"

/**
 * is_palindrome - is a list s palindrome or not
 * @head:  ponter to head
 *
 * Return: 1 on success
 */
int is_palindrome(listint_t **head)
{
	listint_t *curnt;
	int countr, i;
	int num[10000];

	curnt = *head;
	countr = 0;

	if (*head == NULL)
		return (1);

	while (curnt != NULL)
	{
		num[countr] = curnt->n;
		curnt = curnt->next;
		countr++;
	}

	for (i = 0; i < countr; i++)
	{
		if (num[i] == num[countr - 1])
			countr--;
		else
			return (0);
	} return (1);
}
