#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

/**
  *struct listint_s -singly linked list
  *@n: an integer
  *@next: pointer to the next node
  */

typedef struct listint_s
{
	int n;
	struct listint_s *next;
}listint_t

#endif /*LISTS_H*/
