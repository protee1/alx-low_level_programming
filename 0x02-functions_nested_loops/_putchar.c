#include<unistd.h>
#include "main.h"
/**
 * * _putchar -writes the character to stdout
 *  * @c: The character to print
 *   * Return: On success 1.
 *    * On Error, -1 is returned, and errno is set to appropriately.
 *     */
int _putchar(char c)
{
           return(write(1, &c, 1));
}	
