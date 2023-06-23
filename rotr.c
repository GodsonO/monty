#include "monty.h"
/**
  *f_rotr- rotates the stack to the bottom
  *@head: stack head
  *@count_line: number of lines
  *Return: void
 */
void f_rotr(stack_t **head, __attribute__((unused)) unsigned int count_line)
{
	stack_t *rotate;

	rotate = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	while (rotate->next)
	{
		rotate = rotate->next;
	}
	rotate->next = *head;
	rotate->prev->next = NULL;
	rotate->prev = NULL;
	(*head)->prev = rotate;
	(*head) = rotate;
}
