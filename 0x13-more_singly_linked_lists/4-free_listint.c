#include "lists.h"

/**
 * free_listint - main
 * @head: var 1
 * Return: value
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while ((tmp = head) != NULL)
	{
		head = head->next;
		free(tmp);
	}
}
