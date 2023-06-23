#include "monty.h"
/**
 * f_pall - prints the stack
 * @head: stack head
 * @count_line: no of lines
 * Return: void
*/
void f_pall(stack_t **head, unsigned int count_line)
{
	stack_t *h;
	(void)count_line;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
