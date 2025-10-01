#include <stdio.h>
#include <math.h>

int arredonda(float x);

int main() {
	float numero;


	printf("Digite um numero real: ");
	scanf("%f", &numero);


	int resultado = arredonda(numero);
	printf("Resultado de arredonda(%.2f) = %d\n", numero, resultado);

	return 0;
}

int arredonda(float x) {
	int inteiro_abaixo = (int)x;
	float parte_decimal = x - inteiro_abaixo;

	if (x > 0) {
		if (parte_decimal > 0.5) {
			return inteiro_abaixo + 1;
		} else if (parte_decimal < 0.5) {
			return inteiro_abaixo;
		} else {
			return inteiro_abaixo + 1;
		}
	} else {
		if (parte_decimal < -0.5) {
			return inteiro_abaixo - 1;
		} else if (parte_decimal > -0.5) {
			return inteiro_abaixo;
		} else {
			return inteiro_abaixo - 1;
		}
	}
}
