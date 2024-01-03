#include "lists.h"
#include <stdlib.h>

/**
 * check_cycle - This  function will check for a loop in a linked list
 * @list: This is the data type listint_t pointer of list
 * Return: 0 if no cycle and 1 if there is cycle
 */
int check_cycle(listint_t *list)
{
	listint_t *loop_a;
	listint_t *loop_b;

	if (list == NULL || list->next == NULL)
		return  (0);

	loop_a = list->next;
	loop_b = list->next->next;

	while (loop_a && loop_b && loop_b->next)
	{
		if (loop_a == loop_b->next)
		{
			return (1);
		}
		loop_a = loop_a->next;
		loop_b = loop_b->next->next;
	}
	return (0);
}
