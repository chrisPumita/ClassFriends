#include <stdio.h>
#include <stdlib.h>
#define TAM_NUM 6

int main(int argc, char const *argv[])
{
	char numero[TAM_NUM];
	float saldo = 30.00;

	printf("Ingresa el numero: \n");
	scanf ("%s",&numero);
	int i;
	if (saldo > 0.0)

	{
		printf("Llamando al numero \n");
		for (i = 0; i < TAM_NUM; ++i)
		{
			printf("%c", numero[i]);
			if (i<TAM_NUM -1)
			{
				printf("-");
			}
		}
		printf("\n");
	}

	else {
		printf("No tienes saldo \n");
	}
	/* code */
	return 0;
}