#include <stdio.h>

int main()
{
	char array = 'a' ;
	int x;
	char *aptr;

	aptr = &array;
	printf("adresa de memorie: %ld\n",aptr);
	printf("valoarea la adrsa %d \n", *aptr );		/* no & needed for an array */



	return(0);
}
