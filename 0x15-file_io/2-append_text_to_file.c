#include "main.h"

/**
* append_text_to_file - Function
* @filename: Parameter
* @text_content: Parameter
*
* Return: Value
*/
int append_text_to_file(const char *filename, char *text_content)
{
int sd, dd, nj = 0;
if (filename == NULL)
return (-1);
if (text_content != NULL)
{
for (nj = 0; text_content[nj];)
nj++;
}
sd = open(filename, O_WRONLY | O_APPEND);
dd = write(sd, text_content, nj);
if (sd == -1 || dd == -1)
return (-1);
close(sd);
return (1);
}

