#include "main.h"

/**
 * create_queue - create a queue
 *
 * Return: pointer to a new queue or NULL
 */
queue_t *create_queue(void)
{
	queue_t *qcase;

	qcase = malloc(sizeof(queue_t));
	if (qcase == NULL)
		return (free(qcase), NULL);

	qcase->head = NULL, qcase->tail = NULL;
	return (qcase);
}
