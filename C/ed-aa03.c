#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void gerar_numeros(int numeros[], int tamanho){

    int repetido;

    for(int i = 0; i < tamanho; i++){

        int numero;

        do{

            numero = rand() % 25 + 1;
            repetido = 0;

            for(int j = 0; j < i; j++){

                if(numeros[j] == numero){
                    repetido = 1;
                }

            }

        } while(repetido == 1);

        numeros[i] = numero;

    }
}

void imprimir_numeros(int numeros[], int tamanho){
    
    printf("Numeros escolhidos: ");

    for(int i = 0; i < tamanho; i++){

        printf("%d ", numeros[i]);
    }
}

int main() {
    int numero[15];
    srand(time(NULL));
    gerar_numeros(numero, 15);
    imprimir_numeros(numero, 15);
}