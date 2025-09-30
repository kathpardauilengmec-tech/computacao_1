#include <stdio.h>


void questao01(int *a, int *b);

int main() {
int x, y;


printf("Digite o valor de x: ");
scanf("%d", &x);
printf("Digite o valor de y: ");
scanf("%d", &y);

printf("\nAntes da função: x = %d, y = %d\n", x, y);


questao01(&x, &y);

printf("Depois da função: x = %d, y = %d\n", x, y);

return 0;
