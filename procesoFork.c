#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <wait.h>

int main(int argc, char const *argv[])
{
	int pid;
	/* Identificador del proceso unico */

	/* Se bifurca creando otro proceso */
	pid = fork();
	if (pid < 0)
	{
		fprintf(stderr, "Fallo crear proceso\n");

		exit(-1);
	}

	else if (pid == 0) { /* proceso hijo */
		execlp("/sbin/poweroff", "poweroff", NULL);
	} else { /* proceso padre */
		/* espera que finalice el hijo */
		wait(NULL);
		printf("Hijo Finalizado\n");
		exit(0);

	}
	return 0;
}