#include <stdio.h>
#include <locale.h>
#include <math.h>

#define PI acos(-1.0)

/*
* 1. Escreva um programa que solicite ao usuário a altura e o raio de um cilindro circular e imprima o volume do cilindro.
*   O volume de um cilindro circular é calculado por meio da seguinte fórmula:
*     Vol = PI * raio2 * altura
*
* Gabriel Carneiro de Castro
*/

int main() {
  setlocale(LC_ALL, "portuguese");

  double altura = 0;
  double raio = 0;

  printf("%lf\n", PI);

  printf("Calcúlo do volume de um cilíndro\n");

  printf("Qual a altura: ");
  scanf("%lf", &altura);

  printf("Qual o raio: ");
  scanf("%lf", &raio);

  double vol = PI * pow(raio, 2) * altura;

  printf("O volume é %.2lf\n", vol);


  return 0;
}
