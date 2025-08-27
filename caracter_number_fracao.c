#include <stdio.h>

int main() {
	int i;
	float f;
	char c;
	int d;

	printf("digite um caractere:");
	scanf("%c", &c);

	printf("digite um valor inteiro:");
	scanf("%d", &i);

	printf("entre com um numero de ponto flutuante:");
	scanf("%f", &f);

	printf( "%c, %d e %.2f", c, i, f );

	return 0;

}
