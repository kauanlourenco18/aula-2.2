#include <stdio.h>

int main(void)
{
  float peso = 70;
  float altura = 1.76;
  float imc = peso / (altura * altura);
  printf("O meu IMC é: %.2f", imc);
  return 0;
}