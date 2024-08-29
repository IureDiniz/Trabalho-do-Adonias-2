#include <stdio.h>

int main() {
	int i,j;
	int dadosInvalidos = 1;
	
  //Valida tamanho da matriz caso esteja entre 1x1 e 10x10
  while(dadosInvalidos){
    printf("Qual o tamanho de i: ");
		scanf(" %d", &i);
		printf("Qual o tamanho de j: ");
		scanf(" %d", &j);
		if((i > 10 || i < 1) || (j > 10 || j < 1))
			printf("\nERRO! REESCREVA OS VALORES\n");
		else
			dadosInvalidos = 0;
    }
    
  //Cria e recebe todos os valores da matriz
  int matriz[i][j];
	int lin, col;
	printf("\n");
	for(lin = 0; lin < i; lin++) {
		for(col = 0; col < j; col++) {
			printf("matriz[%d][%d] = ", lin, col);
			scanf("%d", &matriz[lin][col]);
		}
	}

  //Define um numero a ser analisado e imprime quantas vezes ele aparece na matriz
	int numeroAnalisado;
	int ocorrencias = 0;
	printf("\nDigite os numero a ser analisado: ");
	scanf(" %d", &numeroAnalisado);
	for(lin = 0; lin < i; lin++) {
		for(col = 0; col < j; col++) {
			if(numeroAnalisado == matriz[lin][col])
				ocorrencias++;
		}
	}

  //Imprime quantas vezes o numero selecionado aparece na matriz
	printf("O numero %d aparece %d vezes na matriz\n", numeroAnalisado, ocorrencias);
	return 0;
}
