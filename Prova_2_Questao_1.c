#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define LINHAS 3
#define COLUNAS 3
#define TAM 50


void inverterString(char str[]) {
	int i, j;
	char temp;
	int len = strlen(str);
	for (i = 0, j = len - 1; i < j; i++, j--) {
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
	}
}


int ehVogal(char c) {
	c = toupper(c);
	return (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}


int ehConsoante(char c) {
	c = toupper(c);
	return (c >= 'A' && c <= 'Z' && !ehVogal(c));
}

int main() {
	char matriz[LINHAS][COLUNAS][TAM];
	char matrizModificada[LINHAS][COLUNAS][TAM];


	for (int i = 0; i < LINHAS; i++) {
		for (int j = 0; j < COLUNAS; j++) {
			printf("Digite a string da posiC'C#o [%d][%d]: ", i, j);
			scanf(" %49[^\n]", matriz[i][j]);
			strcpy(matrizModificada[i][j], matriz[i][j]);
		}
	}


	for (int i = 0; i < LINHAS; i++) {
		for (int j = 0; j < COLUNAS; j++) {
			int len = strlen(matrizModificada[i][j]);
			if (len > 0) {
				char primeira = matrizModificada[i][j][0];
				char ultima = matrizModificada[i][j][len - 1];

				if (ehVogal(primeira) && ehConsoante(ultima)) {
					inverterString(matrizModificada[i][j]);
				}
			}
		}
	}

	
	printf("\nMatriz Original:\n");
	for (int i = 0; i < LINHAS; i++) {
		for (int j = 0; j < COLUNAS; j++) {
			printf("%s\t", matriz[i][j]);
		}
		printf("\n");
	}

	
	printf("\nMatriz Modificada:\n");
	for (int i = 0; i < LINHAS; i++) {
		for (int j = 0; j < COLUNAS; j++) {
			printf("%s\t", matrizModificada[i][j]);
		}
		printf("\n");
	}

	return 0;
}
