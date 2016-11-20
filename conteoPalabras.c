#include <stdio.h>

#define IN 1	/* Es una palabra */
#define OUT 0	/* Fuera de una palabra */

/*	Cuenta lineas, palabras y caracteres de la entrada	*/

int main(int argc, char const *argv[])
{
	int c, nl, nw, nc, state;

	state = OUT;
	nl = nw = nc = 0;
	
	while((c = getchar()) != '0'){
		
		++nc;
		if (c == '\n')
		{
			++nl;
		}
		
		if(c == '\n' || c == '\t' || c == ' ')
		{
		
			state = OUT;
		
		} else if(state == OUT){

			state = IN;
			++nw;
		}

	}
	printf("Numero de renglones: %d\n"
		"Numero de palabras: %d\n"
		"Numero de caracteres: %d\n", nl, nw, nc);	/* Cuenta toda clase de caracteres, es decir, ' ', '\n', '\t' entre otros. */
	
	return 0;
}

