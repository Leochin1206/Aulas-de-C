/* Leia um valor inteiro. A seguir, calcule o menor número de notas possíveis 
(cédulas) no qual o valor pode ser decomposto. As notas consideradas são de 100, 50, 20, 10, 5, 2 e 1. 
A seguir mostre o valor lido e a relação de notas necessárias.

Entrada
O arquivo de entrada contém um valor inteiro N (0 < N < 1000000).

Saída
Imprima o valor lido e, em seguida, a quantidade mínima de notas de cada tipo necessárias, 
conforme o exemplo fornecido. Não esqueça de imprimir o fim de linha após cada linha, caso 
contrário seu programa apresentará a mensagem: “Presentation Error”. */

#include <stdio.h>

int main() {
 
    int valor, resto;
    int cem = 0, cinquenta = 0, vinte = 0, dez = 0, cinco = 0, dois = 0, um = 0;

    scanf("%i", &valor);

    if(valor >= 100){
        cem = valor/100;
        resto = valor%100; 
        
        if(resto >= 50){
            cinquenta = resto/50;
            resto = resto%50;
        }
        if(resto >= 20){
            vinte = resto/20;
            resto = resto%20;
        }
        if(resto >= 10){
            dez = resto/10;
            resto = resto%10;
        }
        if(resto >= 5){
            cinco = resto/5;
            resto = resto%5;
        }
        if(resto >= 2){
            dois = resto/2;
            resto = resto%2;
        }
        if(resto >= 1){
            um = resto;
        }
    }
    printf("\n%i", valor);
    printf("\n%i nota(s) de R$ 100,00", cem);
    printf("\n%i nota(s) de R$ 50,00", cinquenta);
    printf("\n%i nota(s) de R$ 20,00", vinte);
    printf("\n%i nota(s) de R$ 10,00", dez);
    printf("\n%i nota(s) de R$ 5,00", cinco);
    printf("\n%i nota(s) de R$ 2,00", dois);
    printf("\n%i nota(s) de R$ 1,00", um);

    return 0;
}