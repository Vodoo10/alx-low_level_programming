#include "main.h"
#include <stdlib.h>

/**
* read_textfile- Function
* @filename: Parameter
* @letters: Parameter
* Return: Value
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
char *c;
ssize_t k;
ssize_t b;
ssize_t t;
k = open(filename, O_RDONLY);
if (k == -1)
return (0);
c = malloc(sizeof(char) * letters);
t = read(k, c, letters);
b = write(STDOUT_FILENO, c, t);
free(c);
close(k);
return (b);
}

