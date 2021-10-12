#include "lists.h"

/**
 * add_nodeint - main
 *
 * @head: var 1
 * @n: var 2
 *
 * Return: value
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	if (*head == NULL)
		new->next = NULL;
	else
		new->next = *head;

	new->n = n;
	*head = new;

	return (*head);
}
