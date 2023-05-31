
#include "../../../data_structures/stack/main.h"
#include "main.h"

/**
 * test_stack - Test stack data
 * structures
 *
 * Return: 0 on success, -1 on failure
 */
int test_stack(void)
{
	stack_t scase;
	int got, res;

	scase.size = 5, scase.pointer = -1;
	scase.arr = malloc(sizeof(int *) * scase.size);
	if (scase.arr == NULL)
		perror("Merroy error"), free(scase.arr), exit(1);
	got = isEmpty(&scase);
	if (got != 0)
		return (free(scase.arr), -1);
	push(&scase, 5), push(&scase, 4), push(&scase, 1), push(&scase, 3);
	res = push(&scase, 7);
	if (res != 0)
		return (free(scase.arr), -1);
	res = isFull(&scase);
	if (res != 0)
		return (free(scase.arr), -1);
	got = isEmpty(&scase);
	if (got != 1)
		return (free(scase.arr), -1);
	res = peek(&scase, &got);
	if (res == 1 || got != 7)
		return (free(scase.arr), -1);
	res = pop(&scase, &got);
	if (res == 1 || got != 7)
		return (free(scase.arr), -1);
	res = pop(&scase, &got);
	if (res == 1 || got != 3)
		return (free(scase.arr), -1);
	push(&scase, 8), push(&scase, 9);
	res = push(&scase, 7);
	if (res != 1)
		return (free(scase.arr), -1);
	return (free(scase.arr), 0);
}
