#include <stdio.h>


int ehBissexto(int ano);


int main() {
	int ano;

	printf("Digite um ano: ");
	scanf("%d", &ano);

	if (ehBissexto(ano)) {
		printf("%d eh um ano bissexto.\n", ano);
	} else {
		printf("%d nao eh um ano bissexto.\n", ano);
	}

	return 0;
}


int ehBissexto(int ano) {
	if (ano % 4 == 0 && (ano % 100 != 0 || ano % 400 == 0)) {
		return 1;
	} else {
		return 0;
	}
}
