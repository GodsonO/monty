#include "monty.h"
/**
 * f_pint - prints the value at the top of the stack
 * followed by a new line.
 * @head: stack head
 * @counter: number of lines
 * Return: void
*/
void f_pint(stack_t **head, unsigned int counter)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
