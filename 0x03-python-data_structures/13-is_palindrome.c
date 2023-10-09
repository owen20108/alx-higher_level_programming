#include "lists.h"

/**
 * reverse_list - reverse a list
 * @head: pointer  to begin of list
 *
 * Return: nothing
 */
void reverse_list(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *current = *head;
	listint_t *next = NULL;

	while (current)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}

	*head = prev;
}

/**
 * compare_list -  compare element of  list
 * @firsthlf: pointer for first hlf
 * @secondhlf: pointer for second hlf
 *
 * Return: 0 if is not palindrome otherwise 1
 */
int compare_list(listint_t *first_hlf, listint_t *second_hlf)
{
	while (first_hlf && second_hlf)
	{
		if (first_hlf->n != second_hlf->n)
			return (0);
		first_hlf = first_hlf->next;
		second_hlf = second_hlf->next;
	}
	return (1);
}

/**
 * is_palindrome - checks if a singly linked list
 * 		is a palindrome
 * @head:pointer to head of list
 * Return: 0 if list is not palindrome otherwise 1
 */
int is_palindrome(listint_t **head)
{
	listint_t *faster_ptr, *prev_of_slower_ptr, *slower_ptr, *mid_ptr;
	listint_t *firsthlf_ptr, *secondhlf_ptr;
	int reslt;

	if ((head == NULL) || (*head == NULL))
		return (1);

	faster_ptr = prev_of_slower_ptr = slower_ptr = firsthlf_ptr = *head;
	while (faster_ptr != NULL && faster_ptr->next != NULL)
	{
		faster_ptr = faster_ptr->next->next;

		prev_of_slower_ptr = slower_ptr;
		slower_ptr = slower_ptr->next;
	}
	if (faster_ptr != NULL)
	{
		mid_ptr = slower_ptr;
		secondhlf_ptr = mid_ptr->next;
	}
	else
		secondhlf_ptr = slower_ptr;

	prev_of_slower_ptr->next = NULL;
	reverse_list(&secondhlf_ptr);
	reslt = compare_list(firsthlf_ptr, secondhlf_ptr);

	reverse_list(&(secondhlf_ptr));
	if (faster_ptr != NULL)
	{
		prev_of_slower_ptr->next = mid_ptr;
		mid_ptr->next = secondhlf_ptr;
	}
	else
		prev_of_slower_ptr->next = secondhlf_ptr;

	return (reslt);
}
