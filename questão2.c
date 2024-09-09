#include <stdio.h>

int main(){
    long int N[10];
    int total = 0, pares = 0, impares = 0, maxRel = 0;
    
    //Recebe todos os inteiros no vetor N
    int i;
    for(i = 0; i < 10; i++){
        printf("Digite o valor em N[%d]: ", i);
        scanf("%ld", &N[i]);
        total += N[i];
        
        //Analisa e incrementa a quantidade de numeros pares ou impares
        if(N[i]%2 == 0){
            pares++;
        }else{
            impares++;
        }
        
    }
    
    //Avalia se os inteiros nas extremidades sao maximos relativos
    maxRel = (N[0] > N[1]) ? maxRel + 1 : maxRel;
    
    maxRel = (N[9] > N[8]) ? maxRel + 1 : maxRel;
    
    //Avalia se os outros inteiros sao maximos relativos
    for(i = 1; i < 9; i++){
        if(N[i] > N[i-1] && N[i] > N[i+1])
            maxRel++;
    }
    
    //Imprime a media dos inteiros, a quantidade de valores impares e pares e quantos numeros sao maximos relativo
    printf("\nRESULTADOS\n");
    printf("A media dos valores eh: %.2lf\n", total/10.0);
    printf("A quantidade de valores impares eh: %d\n", impares);
    printf("A quantidade de valores pares eh: %d\n", pares);
    printf("A quantidade de maximos relativos eh: %d\n", maxRel);
    return 0;
}
