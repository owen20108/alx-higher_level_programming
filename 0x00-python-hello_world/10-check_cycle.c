#include <stdlib.h>
#include "lists.h"

/**
 * check_cycle - test if a singly-linked list have  cycle.
 * @list: A singly-linked list.
 *
 * Return:  is no cycle - 0.
 *          is a cycle - 1.
 */
int check_cycle(listint_t *list)
{
	listint_t *slower, *faster;

	if (list == NULL || list->next == NULL)
		return (0);

	slower = list->next;
	faster = list->next->next;

	while (slower && faster && faster->next)
	{
		if (slower == faster)
			return (1);

		slower = slower->next;
		faster = faster->next->next;
	}

	return (0);
}
