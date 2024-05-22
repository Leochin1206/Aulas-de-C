#include <stdio.h>

void buscarValor(float vetor[], int tamanho, float valor);

int main(void) {
    float vetor1[10], vetor2[10], resultado[10];
    int i, operacao;

    for(i = 0; i < 10; i++) {
        printf("Digite o %2dº valor do vetor 1: ", i + 1);
        scanf("%f", &vetor1[i]);
    }

    for(i = 0; i < 10; i++) {
        printf("Digite o %2dº valor do vetor 2: ", i + 1);
        scanf("%f", &vetor2[i]);
    }

    printf("Selecione qual operação deseja realizar:\n");
    printf("1 - Soma\n2 - Subtração\n3 - Multiplicação\n4 - Divisão\n");
    scanf("%d", &operacao);

    if(operacao == 1) {
        for(i = 0; i < 10; i++) {
            resultado[i] = vetor1[i] + vetor2[i];
        }
        printf("Resultado da Soma:\n");
    } else if(operacao == 2) {
        for(i = 0; i < 10; i++) {
            resultado[i] = vetor1[i] - vetor2[i];
        }
        printf("Resultado da Subtração:\n");
    } else if(operacao == 3) {
        for(i = 0; i < 10; i++) {
            resultado[i] = vetor1[i] * vetor2[i];
        }
        printf("Resultado da Multiplicação:\n");
    } else if(operacao == 4) {
        for(i = 0; i < 10; i++) {
            resultado[i] = vetor1[i] / vetor2[i];
        }
        printf("Resultado da Divisão:\n");
    }

    for(i = 0; i < 10; i++) {
        printf("Resultado na posição %d: %.2f\n", i + 1, resultado[i]);
    }

    float valorBusca;
    printf("Digite um valor para buscar no vetor resultado: ");
    scanf("%f", &valorBusca);

    buscarValor(resultado, 10, valorBusca);

    return 0;
}

void buscarValor(float vetor[], int tamanho, float valor) {
    int i;
    int encontrado = 0;
    for(i = 0; i < tamanho; i++) {
        if(vetor[i] == valor) {
            printf("Valor %.2f encontrado na posição %d.\n", valor, i + 1);
            encontrado = 1;
            break;
        }
    }
    if(!encontrado) {
        printf("Valor %.2f não encontrado no vetor.\n", valor);
    }
}