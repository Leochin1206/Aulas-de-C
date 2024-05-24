/*Leia 3 valores de ponto flutuante e efetue o cálculo das raízes da equação de Bhaskara. 
Se não for possível calcular as raízes, mostre a mensagem correspondente “Impossivel calcular”, 
caso haja uma divisão por 0 ou raiz de numero negativo.

Entrada
Leia três valores de ponto flutuante (double) A, B e C.

Saída
Se não houver possibilidade de calcular as raízes, apresente a mensagem "Impossivel calcular". 
Caso contrário, imprima o resultado das raízes com 5 dígitos após o ponto, com uma mensagem 
correspondente conforme exemplo abaixo. Imprima sempre o final de linha após cada mensagem.*/

#include <stdio.h>
#include <math.h>
 
int main() {

    float a, b, c;
    float delta, R1, R2;
    int expoente = 2;

    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
   
    delta = b * b - 4*a*c; 

    if(a == 0 || delta < 0){

        printf("Impossivel calcular\n");

    }else{

        double RaizDelta = sqrt(delta);
        R1 = ( -b + RaizDelta)/(2*a);
        R2 = ( -b - RaizDelta)/(2*a);
        
        printf("R1 = %.5f", R1);
        printf("\nR2 = %.5f", R2);

    }

    return 0;
}
