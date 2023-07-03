#ifndef __QUEUE_H__
#define __QUEUE_H__

#include <stdio.h>
#include <stdlib.h>

/**
 * struct queue_item - queue data
 *
 * @val: value in data
 * @next: next data
 */
typedef struct queue_item
{
	int val;
	struct queue_item *next;
} qitem;

/**
 * struct queue - queue data
 * structure
 *
 * @head: start of the queue
 * @tail: end of the queue
 */
typedef struct queue
{
	qitem *head;
	qitem *tail;
} queue_t;

queue_t *create_queue(void);
void free_queue(queue_t *queue);
int isQueueEmpty(queue_t *queue);
int enqueue(queue_t *queue, int val);
int dequeue(queue_t *queue, int *val);
int peekQueue(queue_t *queue, int *val);

#endif /* __QUEUE_H__ */
