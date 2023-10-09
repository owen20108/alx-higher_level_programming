#include "lists.h"
listint_t *reverse_listint(listint_t **head);
int is_palindrome(listint_t **head);
/**
 * reverse_listint - Reverse  single-linked listint_t list.
 * @head:  pointer begin node of the list that reverse.
 * Return: A pointer for the head  the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *node = *head, *next, *prev = NULL;
while (node)
{
next = node->next;
node->next = prev;
prev = node;
node = next;
}
*head = prev;
return (*head);
}
/**
 * is_palindrome - Checks if a singly linked list is a palindrome.
 * @head: A pointer to the head of the linked list.
 * Return: If the linked list is not a palindrome - 0.
 * If the linked list is a palindrome - 1.
 */
int is_palindrome(listint_t **head)
{
listint_t *tmpo, *revs, *mid;
size_t size = 0, i;
if (*head == NULL || (*head)->next == NULL)
return (1);
tmpo = *head;
while (tmpo)
{
size++;
tmpo = tmpo->next;
}
tmpo = *head;
for (i = 0; i < (size / 2) - 1; i++)
tmpo = tmpo->next;
if ((size % 2) == 0 && tmpo->n != tmpo->next->n)
return (0);
tmpo = tmpo->next->next;
revs = reverse_listint(&tmpo);
mid = revs;
tmpo = *head;
while (revs)
{
if (tmpo->n != revs->n)
return (0);
tmpo = tmpo->next;
revs = revs->next;
}
reverse_listint(&mid);
return (1);
}
