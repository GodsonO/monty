#include "monty.h"
/**
 * f_div - divides the second top element of the
 * stack by the top element of the stack.
 * @head: stack head
 * @count_line: number of lines
 * Return: void
*/
void f_div(stack_t **head, unsigned int count_line)
{
	stack_t *h;
	int _aux, length;

	length = 0;
	h = *head;
	while (h)
	{
		h = h->next;
		length++;
	}
	if (length < 2)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", count_line);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	if (h->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", count_line);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	_aux = h->next->n / h->n;
	h->next->n = _aux;
	*head = h->next;
	free(h);
}
