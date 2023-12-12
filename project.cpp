#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void rotateMatrix(int num[], int tamanho, int posicoes){
	posicoes =  posicoes%tamanho ;
	int i;
	printf("O array fornecido é:");
    for ( i = 0; i < tamanho; i++) {
        printf(" %d", num[i]);
    }
    printf("\n");
    printf("Da %da posição, os valores do array são:", posicoes + 1);
    for (i = posicoes; i < tamanho; i++) {
        printf(" %d", num[i]);
    }
    printf("\n");
    
    printf("Antes da %d posição, os valores do array são:", posicoes + 1);
    for ( i = 0; i < posicoes; i++) {
        printf(" %d", num[i]);
    }
    printf("\n");
    
    int newMatrix[tamanho];
    for ( i = 0; i < tamanho; i++) {
        newMatrix[(i + tamanho - posicoes) % tamanho] = num[i];
    }
    
    printf("Depois de girar da %da posição, a matriz é:", posicoes + 1);
    for (i = 0; i < tamanho; i++) {
        printf(" %d", newMatrix[i]);
    }
    printf("\n");
	
}

int main(int argc, char *argv[]) {
 int tamanho=11;
 int posicoes=4;
 int i;
 int num[tamanho];


    printf("Insira os elementos na matriz:\n");
    for (i = 0; i < tamanho; i++) {
        printf("elemento - %d: ", i);
        scanf("%d", &num[i]);
    }

	rotateMatrix(num, tamanho, posicoes);
    
	system("pause");
	
	return 0;
}

