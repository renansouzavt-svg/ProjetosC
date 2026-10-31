#include <stdio.h>
int main( ){
    int numero;
    //1. Pedir numero para o usuario
    printf("digite o numero da tabuada que deseja calcular (0 a 5000):");
    scanf("%d", &numero);
    printf("\n--- Tabuada do %d ---\n", numero);

    //2. O loop 'for' que faz a contagem de 0 ate 5000
    for(int i =0; i <= 5000; i++){
        //3. Exibir o calcul a cda volta do loop
        printf("%d x %d =%d\n", numero, i, numero * i);

    }
    return 0;
}