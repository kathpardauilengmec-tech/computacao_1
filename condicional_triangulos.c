#include <stdio.h>

int main() {
    float a, b, c;

    printf("Digite o valor do lado a: ");
    scanf("%f", &a);
    printf("Digite o valor do lado b: ");
    scanf("%f", &b);
    printf("Digite o valor do lado c: ");
    scanf("%f", &c);

    if (a + b > c && a + c > b && b + c > a) {
        
        if (a == b && b == c) {
            printf("O triangulo e equilatero.\n");
        } else if (a == b || b == c || c == a) { 
            printf("O triangulo e isosceles.\n");
        } else { 
            printf("O triangulo e escaleno.\n");
        }
    } else {
        printf("Os lados fornecidos nao formam um triangulo.\n");
        
    }

    return 0;
}
