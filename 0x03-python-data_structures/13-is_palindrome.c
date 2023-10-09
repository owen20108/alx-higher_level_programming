#include "lists.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/** * 
is_palindrome - tests if list is a palindrome
* @head: pointer to list
* Return: 1 if palindrome, 0 if not
*/
int is_palindrome(listint_t **head)
{
	listint_t *tmpo = *head;
	int nodez = 0, i = 0, *array = NULL;

	if (*head == NULL || head == NULL || (*head)->next == NULL)
		return (1);
	while (tmpo)
	{
		nodez++;
		tmpo = tmpo->next;
	}
	array = malloc(sizeof(int) * nodez);
	tmpo = *head;
	while (tmpo)
	{
		array[i++] = tmpo->n;
		tmpo = tmpo->next;
	}
	for (i = 0; i < nodez / 2; i++)
	{
		if (array[i] != array[nodez - 1 - i])
		{
			free(array);
			return (0);
		}
	}
	free(array);
	return (1);
}
