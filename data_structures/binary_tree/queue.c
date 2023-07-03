#include "main.h"

/**
 * free_pqueue - free a queue
 *
 * @queue: queue
 */
void free_pqueue(pqueue_t *queue)
{
	pq_item *prev, *temp;

	prev = queue->head;
	while (prev != NULL)
	{
		temp = prev->next;
		free(prev);
		prev = temp;
	}
	free(queue);
}

/**
 * p_enqueue - adds a value to the end
 * of the queue
 *
 * @queue: queue structure
 * @val: value to be added
 *
 * Return: 0 if successfull else 1
 */
int p_enqueue(pqueue_t *queue, bt_node *val)
{
	pq_item *new = malloc(sizeof(pq_item));

	if (new == NULL)
		return (free(new), 1);

	new->val = val;
	new->next = NULL;

	if (queue->tail == NULL)
	{
		queue->head = new;
		queue->tail = new;
	}
	else
	{
		queue->tail->next = new;
		queue->tail = new;
	}
	return (0);
}

/**
 * p_dequeue - removes a value from
 * the start of a queue
 *
 * @queue: queue structure
 * @val: stores value removed
 *
 * Return: 0 if successfull else 1
 */
int p_dequeue(pqueue_t *queue, bt_node **val)
{
	pq_item *temp;

	if (queue->head == NULL)
		return (1);

	*val = queue->head->val;
	temp = queue->head;
	queue->head = queue->head->next;
	if (temp == queue->tail)
		queue->tail = NULL;
	free(temp);
	return (0);
}

/**
 * create_pqueue - create a queue
 *
 * Return: pointer to a new queue or NULL
 */
pqueue_t *create_pqueue(void)
{
	pqueue_t *qcase;

	qcase = malloc(sizeof(pqueue_t));
	if (qcase == NULL)
		return (free(qcase), NULL);

	qcase->head = NULL;
	qcase->tail = NULL;
	return (qcase);
}
