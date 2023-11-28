#include "lists.h"
/**
 * check_cycle - A function to check if a loop exists in a linked list
 * @list: A pointer to the start of the list
 * Return: (1) on success, (0) on failure
 */
int check_cycle(listint_t *list)
{
	listint_t *slowP = list, *fastP = list;

	while (slowP != NULL && fastP != NULL && fastP->next != NULL)
	{
		slowP = slowP->next;
		fastP = fastP->next->next;
		if (slowP == fastP)
		{
			return (1);
		}
	}
	return (0);
}
