#include "lists.h"

/**
 *free_list - Frees a list
 *@head: A pointer to the list head
 *Return: nothing
 */
void free_list(list_t *head)
{
	list_t *current;

	while (head)
	{
		/* Assign the head in a current */
		current = head;
		/* Assign the head point to the next node */
		head = head->next;

		free(current->str);
			free(current);
	}
}
