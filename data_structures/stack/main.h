#ifndef __STACK_H__
#define __STACK_H__

#include <stdio.h>

/**
 * struct stack - stack data
 * structures
 *
 * @arr: array for storing stack data
 * @pointer: stack pointer
 * @size: size of stack
 */
typedef struct stack
{
	int *arr;
	int pointer;
	int size;
} stack_t;

int isEmpty(stack_t *stack);
int isFull(stack_t *stack);
int push(stack_t *stack, int val);
int pop(stack_t *stack, int *val);
int peek(stack_t *stack, int *val);

#endif /* __STACK_H__ */
