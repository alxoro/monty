#include "monty.h"

/**
 * error_argv - user fails to give file arguments
 * Return: empty
 **/
void error_argv(void)
{
	fprintf(stderr, "USAGE: monty file\n");
	exit(EXIT_FAILURE);
}
/**
 * open_error - print message if its not possible to open the file
 * @argv: arguments received by main, ni this case te filename
 * Return: empty
 **/
void open_error(char **argv)
{
	char *filename = argv[1];

	fprintf(stderr, "Error: Can't open file %s\n", filename);
	exit(EXIT_FAILURE);
}

/**
 * malloc_error - if cannot malloc print message
 * Return: empty
 **/
void malloc_error(void)
{
	fprintf(stderr, "Error: malloc failed\n");
	exit(EXIT_FAILURE);
}

/**
 * invalid_instrution - message printed if the le opens the file
 * @line: file line
 * @opcode: executed command
 * Return: empty
 **/
void invalid_instrution(int line, char *opcode)
{
	fprintf(stderr, "L%d: unknown instruction %s\n", line, opcode);
	exit(EXIT_FAILURE);
}
/**
 * pop_error - error message printed if stack is empty
 * @line: line
 * Return: empty
 */
void pop_error(unsigned int line)
{
	fprintf(stderr, "L%u: can't pop an empty stack\n", line);
	exit(EXIT_FAILURE);
}
