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
	listint_t *ptr2;
	listint_t *prevos;

	ptr2 = list;
	prevos = list;
	while (list && ptr2 && ptr2->next)
	{
		list = list->next;
		ptr2 = ptr2->next->next;

		if (list == ptr2)
		{
			list = prevos;
			prevos =  ptr2;
			while (1)
			{
				ptr2 = prevos;
				while (ptr2->next != list && ptr2->next != prevos)
				{
					ptr2 = ptr2->next;
				}
				if (ptr2->next == list)
					break;

				list = list->next;
			}
			return (1);
		}
	}

	return (0);
}
