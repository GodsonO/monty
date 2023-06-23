#include "monty.h"
/**
 * f_pstr - prints the string starting at the top of the stack,
 * followed by a new line
 * @head: stack head
 * @count_line: number of lines
 * Return: void
*/
void f_pstr(stack_t **head, unsigned int count_line)
{
	stack_t *h;
	(void)count_line;

	h = *head;
	while (h)
	{
		if (h->n > 127 || h->n <= 0)
		{
			break;
		}
		printf("%c", h->n);
		h = h->next;
	}
	printf("\n");
}
