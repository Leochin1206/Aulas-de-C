#include <stdio.h>

int main(void) {
  
  float Prova1, Prova2, ProvaS, Media, MediaN;

  printf("\nDigite a nota da primeira prova: ");
  scanf("%f", &Prova1);
  printf("\nDigite a nota da primeira prova: ");
  scanf("%f", &Prova2);

  Media = (Prova1 + Prova2) / 2;

  printf("\nsua media é: %.2f\n", Media);
  
  if (Media > 7) {
    printf("\nVocê foi aprovado!");
  }
  else {
    printf("\nVocê está de recuperação!\n");
    printf("\nColoque a nota da sua prova de recuperação: ");
    scanf("%f", &ProvaS);

    if (Prova1 > Prova2) {
      MediaN = (ProvaS + Prova1) / 2;
    } else {
      MediaN = (ProvaS + Prova2) / 2;
    }
    
    printf("\nSua nova média é: %.2f\n", MediaN);
    
    if (MediaN >= 7) {
      printf("\nVocê foi aprovado!");
    } else {
      printf("\nVocê foi reprovado!");
    }
  }

  return 0;
}
