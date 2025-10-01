#include <stdio.h>

int calculaDigitoVerificador(int numero);

int main() {
    int num;
    printf("Digite um número de 3 dígitos: ");
    scanf("%d", &num);

    int verificador = calculaDigitoVerificador(num);
    printf("O dígito verificador de %d é: %d\n", num, verificador);

    return 0;
}

int calculaDigitoVerificador(int numero) {
    int x1 = numero / 100;          
    int x2 = (numero / 10) % 10;    
    int x3 = numero % 10;           

    int soma = 1 * x1 + 2 * x2 + 3 * x3;
    int mod11 = soma % 11;
    int digito = mod11 % 10;
    return digito;
}
