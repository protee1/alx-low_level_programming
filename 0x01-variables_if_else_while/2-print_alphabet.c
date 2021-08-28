/*
 * File: 2-print_alphabet.c
 * Auth: Protogene Mugiraneza
 */
#include<studio.h>
/*
 * Main - Prints the alphabet in lower case
 * Return : Always 0.
 */
int main(void)
{
        char letter;
        for(letter='a';letter<='z'; letter++)
	putchar(letter)	;
	putchar('\n');
	return(0);
}	
