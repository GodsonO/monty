#include "monty.h"
/**
 * f_queue - sets the format of the data to a queue (FIFO).
 * @head: stack head
 * @count_line: number of lines
 * Return: void
*/
void f_queue(stack_t **head, unsigned int count_line)
{
	(void)head;
	(void)count_line;
	bus.lifi = 1;
}

/**
 * addqueue - adds node to the tail of the stack
 * @n: new_value
 * @head: head of the stack
 * Return: void
*/
void addqueue(stack_t **head, int n)
{
	stack_t *new_node, *aux;

	aux = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
	}
	new_node->n = n;
	new_node->next = NULL;
	if (aux)
	{
		while (aux->next)
			aux = aux->next;
	}
	if (!aux)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		aux->next = new_node;
		new_node->prev = aux;
	}
}
