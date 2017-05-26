#ifndef MONTY_H
#define MONTY_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcoode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

void check_argc(int ac);
void pall(stack_t **h, unsigned int line_n);
void pint(stack_t **h, unsigned int l_num);
void pop(stack_t **h, unsigned int l_num);
void nop(void);
int _struct(char *str, stack_t **head, unsigned int l_num);
stack_t *push_m(stack_t **head, int n);
stack_t *push(stack_t **head, int n);
int _strcmp(char *s1, char *s2);
#endif
