#include "lists.h"

/**
 * reverse - reverse 2nd half of the list
 *
 * @h_r: point of the second list
 * Return: no return
 */
void reverse(listint_t **h_r)
{
	listint_t *prvs;
	listint_t *crrnt;
	listint_t *nxt;

	prvs = NULL;
	crrnt = *h_r;

	while (crrnt != NULL)
	{
		nxt = crrnt->next;
		crrnt->next = prvs;
		prvs = crrnt;
		crrnt = nxt;
	}

	*h_r = prvs;
}

/**
 * compare - compares  int  the list
 *
 * @h1: pointer of the first half
 * @h2: pointer of the second half
 * Return: 1 if equals, 0 if not
 */
int compare(listint_t *h1, listint_t *h2)
{
	listint_t *tmpo1;
	listint_t *tmpo2;

	tmpo1 = h1;
	tmpo2 = h2;

	while (tmpo1 != NULL && tmpo2 != NULL)
	{
		if (tmpo1->n == tmpo2->n)
		{
			tmpo1 = tmpo1->next;
			tmpo2 = tmpo2->next;
		}
		else
		{
			return (0);
		}
	}

	if (tmpo1 == NULL && tmpo2 == NULL)
	{
		return (1);
	}

	return (0);
}

/**
 * is_palindrome - test  a single linked list
 * is a palindrome
 * @head: pointer for head  list
 * Return: 0 if it is not a palindrome,
 * 1 if it is a palndrome
 */
int is_palindrome(listint_t **head)
{
	listint_t *slower, *faster, *prev_slower;
	listint_t *scn_half, *middle;
	int isplndrm;

	slower = faster = prev_slower = *head;
	middle = NULL;
	isplndrm = 1;

	if (*head != NULL && (*head)->next != NULL)
	{
		while (faster != NULL && faster->next != NULL)
		{
			faster = faster->next->next;
			prev_slower = slower;
			slower = slower->next;
		}

		if (faster != NULL)
		{
			middle = slower;
			slower = slower->next;
		}

		scn_half = slower;
		prev_slower->next = NULL;
		reverse(&scn_half);
		isplndrm = compare(*head, scn_half);

		if (middle != NULL)
		{
			prev_slower->next = middle;
			middle->next = scn_half;
		}
		else
		{
			prev_slower->next = scn_half;
		}
	}

	return (isplndrm);
}
