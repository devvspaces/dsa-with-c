
#include "main.h"

/**
 * isEmpty - checks if a stack is
 * empty
 *
 * @stack: stack structure
 *
 * Return: 0 if empty else 1
 */
int isEmpty(stack_t *stack)
{
	if (stack->pointer == -1)
		return (0);
	return (1);
}

/**
 * isFull - checks if a stack is
 * full
 *
 * @stack: stack structure
 *
 * Return: 0 if full else 1
 */
int isFull(stack_t *stack)
{
	if (stack->pointer != stack->size - 1)
		return (1);
	return (0);
}

/**
 * push - push a new value onto the
 * stack
 *
 * @stack: stack structure
 * @val: value to push to stack
 *
 * Return: 0 if successful else 1
 */
int push(stack_t *stack, int val)
{
	if (stack->pointer == stack->size - 1)
		return (1);

	stack->arr[++stack->pointer] = val;
	return (0);
}

/**
 * pop - pop a value from the
 * top of the stack
 *
 * @stack: stack structure
 * @val: val popped from the stack
 *
 * Return: 0 if successful else 1
 */
int pop(stack_t *stack, int *val)
{
	if (isEmpty(stack) == 0)
		return (1);

	*val = stack->arr[stack->pointer--];
	return (0);
}

/**
 * peek - peek at value at the
 * top of the stack
 *
 * @stack: stack structure
 * @val: val at the top of the stack
 *
 * Return: 0 if successful else 1
 */
int peek(stack_t *stack, int *val)
{
	if (isEmpty(stack) == 0)
		return (1);

	*val = stack->arr[stack->pointer];
	return (0);
}
