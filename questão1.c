#include <stdio.h>
#include <string.h>

int main(){
    //Recebe a string
    char string[50];
    gets(string);
    
    //Imprime a string em ordem inversa
    int i;
    for(i = strlen(string); i >= 0; i--){
        printf("%c", string[i]);
    }
    return 0;
}
