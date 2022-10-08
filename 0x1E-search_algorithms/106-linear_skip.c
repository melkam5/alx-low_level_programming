#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * linear_skip - Searches for a for a value in a ssl using linear skip
 * @list: Pointer to the head
 * @value: The value to be searched
 *
 * Return: If the value is not present or the head of the list is NULL, NULL.
 *         Otherwise, a pointer to the first node where the value is located.
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *node, *tmp;

	if (list == NULL)
		return (NULL);

	for (node = tmp = list; tmp->next != NULL && tmp->n < value;)
	{
		node = tmp;
		if (tmp->express != NULL)
		{
			tmp = tmp->express;
			printf("Value checked at index [%ld] = [%d]\n",
					tmp->index, tmp->n);
		}
		else
		{
			while (tmp->next != NULL)
				tmp = tmp->next;
		}
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
			node->index, tmp->index);

	for (; node->index < tmp->index && node->n < value; node = node->next)
		printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);
	printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);

	return (node->n == value ? node : NULL);
}
