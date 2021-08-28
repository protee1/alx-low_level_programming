/*
 * File: 0-positive_or_negative.c
 * Auth: Protogene Mugiraneza
 */
#include<stdlib.h>
#include<time.h>
#include<stdio.h>

/*
 *  main - Print a random number and states whether
 *         It is positive, negative, or zero.
 *
 *         Return: ALways 0.
 */

int main(void){
int n;
srand(time(0));
n=rand()-RAND_MAX/2;
if(n>0)
      printf("%d is positive\n",n);

if(n==0)
      printf(" %d is zero\n",n);

if(n<0)
     printf(" %d is negative\n",n);


return(0);
}

