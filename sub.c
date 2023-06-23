#include "monty.h"
/**
  *f_sub- subtracts the top element of the stack
  *from the second top element of the stack.
  *@head: stack head
  *@count_line: number of lines
  *Return: void
 */
void f_sub(stack_t **head, unsigned int count_line)
{
	stack_t *aux;
	int sub, node_s;

	aux = *head;
	for (node_s = 0; aux != NULL; node_s++)
		aux = aux->next;
	if (node_s < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", count_line);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	aux = *head;
	sub = aux->next->n - aux->n;
	aux->next->n = sub;
	*head = aux->next;
	free(aux);
}
