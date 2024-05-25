#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main() {

    srand(time(NULL));

    int quantidade = 6;
    int numeros_sorteados[quantidade]; 
    int i = 0, j = 0, temp;
    int numero; 
    bool ja_sorteado; 
    int n = sizeof(numeros_sorteados) / sizeof(numeros_sorteados[0]);
    
    while (i < quantidade) {

        numero = rand() % 100;
        ja_sorteado = false; 
 
        for (j = 0; j < i; j++) {
            if (numeros_sorteados[j] == numero) {
                ja_sorteado = true;
                break;
                
            }
        }
        if (!ja_sorteado) {
            numeros_sorteados[i] = numero;
            i++;
        }
    }

    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (numeros_sorteados[j] > numeros_sorteados[j+1]) {
                temp = numeros_sorteados[j];
                numeros_sorteados[j] = numeros_sorteados[j+1];
                numeros_sorteados[j+1] = temp;
            }
        }
    }

    printf("Numeros sorteados: ");
    for (i = 0; i < quantidade; i++) {
        printf("%d ", numeros_sorteados[i]);
    }

    return 0;
}