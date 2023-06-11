#ifndef __CIRCULAR_QUEUE_H__
#define __CIRCULAR_QUEUE_H__

#include <stdio.h>
#include <stdlib.h>

/**
 * struct c_queue - queue data
 * structure
 *
 * @data: array data for storing queue
 * @front: front of queue
 * @rear: rear of queue
 * @len: length of queue
 */
typedef struct c_queue
{
	int *data;
	int front;
	int rear;
	int len;
} c_queue_t;

int cIsQueueFull(c_queue_t *queue);
int cIsQueueEmpty(c_queue_t *queue);
int cEnqueue(c_queue_t *queue, int val);
int cDequeue(c_queue_t *queue, int *val);
int cPeekQueue(c_queue_t *queue, int *val);

#endif /* __CIRCULAR_QUEUE_H__ */
