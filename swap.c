#include "monty.h"
/**
 * f_swap - swaps the top two elements of the stack.
 * @head: stack head
 * @counter: count line
 * Return: void
*/
void f_swap(stack_t **head, unsigned int counter)
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
		fprintf(stderr, "L%d: can't swap, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	_aux = h->n;
	h->n = h->next->n;
	h->next->n = _aux;
}
