#include <stdio.h>

int main(void)
{
  float peso;
  float altura;

  printf("Digite o seu peso [Kg]: ");
  scanf("%f", &peso);

  printf("Digite a sua altura [m]: ");
  scanf("%f", &altura);

  float imc = peso / (altura * altura);
  printf("Seu IMC: %.2f", imc);
  return 0;
}