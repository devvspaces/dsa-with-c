
#include "../../../data_structures/queue/main.h"
#include "main.h"

/**
 * test_queue_linked_list - Test queue data
 * structure implemented using a linked list
 *
 * Return: 0 on success, -1 on failure
 */
int test_queue_linked_list(void)
{
	queue_t *qcase;
	int computed, error;

	qcase = create_queue();
	if (qcase == NULL)
		return (-1);

	error = isQueueEmpty(qcase);
	if (error != 0)
		return (free_queue(qcase), -1);
	error = peekQueue(qcase, &computed);
	if (error == 0)
		return (free_queue(qcase), -1);
	error = dequeue(qcase, &computed);
	if (error == 0)
		return (free_queue(qcase), -1);
	error = enqueue(qcase, 5);
	if (error != 0)
		return (free_queue(qcase), -1);
	enqueue(qcase, 3), enqueue(qcase, 6), enqueue(qcase, 10);
	error = isQueueEmpty(qcase);
	if (error == 0)
		return (free_queue(qcase), -1);
	error = peekQueue(qcase, &computed);
	if (error != 0 || computed != 5)
		return (free_queue(qcase), -1);
	error = dequeue(qcase, &computed);
	if (error != 0 || computed != 5)
		return (free_queue(qcase), -1);
	error = dequeue(qcase, &computed);
	if (error != 0 || computed != 3)
		return (free_queue(qcase), -1);
	dequeue(qcase, &computed), dequeue(qcase, &computed);
	error = dequeue(qcase, &computed);
	if (error == 0)
		return (free_queue(qcase), -1);
	return (free_queue(qcase), 0);
}
