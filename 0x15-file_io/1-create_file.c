#include "main.h"

/**
* create_file - Function
* @filename: Parameter
* @text_content: Parameter
*
* Return: Value
*/
int create_file(const char *filename, char *text_content)
{
int lo, sp, m = 0;
if (filename == NULL)
return (-1);
if (text_content != NULL)
{
for (m = 0; text_content[m];)
m++;
}
lo = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
sp = write(lo, text_content, m);
if (lo == -1 || sp == -1)
return (-1);
close(lo);
return (1);
}

