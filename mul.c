#include "monty.h"
/**
 * f_mul - multiplies the second top element of the
 * stack with the top element of the stack.
 * @head: stack head
 * @count_line: number of lines
 * Return: void
*/
void f_mul(stack_t **head, unsigned int count_line)
{
	stack_t *h;
	int length = 0, _aux;

	h = *head;
	while (h)
	{
		h = h->next;
		length++;
	}
	if (length < 2)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", count_line);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	_aux = h->next->n * h->n;
	h->next->n = _aux;
	*head = h->next;
	free(h);
}
