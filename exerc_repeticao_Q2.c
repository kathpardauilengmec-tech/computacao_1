#include <stdio.h>
int main ()
{
	int i = 0, aux, contPares = 0;

	while (i < 10)
	{
		scanf ("%d", &aux);
		if (aux%2 == 0)
			contPares++;
		i++;
	}
	printf("Qtde de pares: %d.", contPares);

	return 0;
}
