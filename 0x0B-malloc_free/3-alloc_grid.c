#include "main.h"
#include <stdlib.h>

/**
 */

int **alloc_grid(int width, int height)
{
int **op;
int a, b;
if (width <= 0 || height <= 0)
return (NULL);
op = malloc(sizeof(int *) * height);
if (op == NULL)
return (NULL);
for (a = 0; a < height; a++)
{
op[a] = malloc(sizeof(int) * width);
if (op[a] == NULL)
{
for (; a >= 0; a--)
free(op[a]);
free(op);
return (NULL);
}
}
for (a = 0; a < height; a++)
{
for (b = 0; b < width; b++)
op[a][b] = 0;
}
return (op);
}

