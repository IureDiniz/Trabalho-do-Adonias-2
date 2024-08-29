#include <stdio.h>

double elevaCubo(int x);
void naturaisElevadosCubo();

int main(){
    naturaisElevadosCubo();
	return 0;
}

double elevaCubo(int x){
    double y = x * x * x;
    return y;
}

void naturaisElevadosCubo(){
    int quant;
    
    printf("Quantos numeros naturais serao elevados?: ");
    scanf("%d", &quant);
    
    int i;
    for(i = 0; i < quant; i++){
        printf("O cudo de %d eh %.2lf\n", i, elevaCubo(i));
    }
    
}
