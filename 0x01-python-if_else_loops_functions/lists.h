#ifndef LISTS_H
#define LISTS_H

/**
  *struct listint_s - singly linked list
  *@n: an integer
  *@next: next node pointer
  *
  *Return: nothing
  *
  */

typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

#endif /*LISTS_H*/
