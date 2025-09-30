#include <stdio.h>
#include <math.h>


int calcula_raizes(float a, float b, float c, float *x1, float *x2);

int main() {
	float a, b, c, r1, r2;
	int qtd_raizes;


	printf("Digite os coeficientes a, b e c: ");
	scanf("%f %f %f", &a, &b, &c);

	qtd_raizes = calcula_raizes(a, b, c, &r1, &r2);

	if (qtd_raizes == 0) {
		printf("Nao existem raizes reais.\n");
	} else if (qtd_raizes == 1) {
		printf("Existe uma raiz real: x = %.2f\n", r1);
	} else {
		printf("Existem duas raizes reais: x1 = %.2f, x2 = %.2f\n", r1, r2);
	}

	return 0;


}

int calcula_raizes(float a, float b, float c, float *x1, float *x2) {
	float delta = b*b - 4*a*c;


	if (a == 0) {
		return 0; 
	}

	if (delta < 0) {
		return 0; 
	} else if (delta == 0) {
		*x1 = -b / (2*a);
		return 1; 
	} else {
		*x1 = (-b + sqrt(delta)) / (2*a);
		*x2 = (-b - sqrt(delta)) / (2*a);
		return 2; 
	}


}
