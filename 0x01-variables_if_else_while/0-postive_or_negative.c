#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Displaying sizeof data types.
(*
 * Return: 0 on success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n >=0){
	    if (n>0){
	        printf("%d is postive\n", n);
	    }
	    else{
	        printf("%d is zero\n",n);
	    }
	}
	else{
	    printf("%d is negative\n", n);
	}
	return (0);
}