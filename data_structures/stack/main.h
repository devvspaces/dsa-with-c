#ifndef __DATA_H__
#define __DATA_H__

#include <stdio.h>

typedef struct stack
{
	int *arr;
	int pointer;
	int size;
} stack_t;


void push(stack_t *stack, int val);
int pop(stack_t *stack);
int peek(stack_t *stack);
int isEmpty(stack_t *stack);

#endif /* __DATA_H__ */