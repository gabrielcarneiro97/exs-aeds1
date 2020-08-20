#include <stdio.h>
#include <locale.h>
#include <math.h>

#define PI acos(-1.0)

/*
* 1. Escreva um programa que solicite ao usuário o diâmetro de uma esfera calcule e imprima:
*   - a área da superfície esférica e o volume da esfera.
*
* Gabriel Carneiro
*/

int main() {
  setlocale(LC_ALL, "portuguese");

  float dim = 0;

  printf("digite o diamêtro da esfera: ");
  scanf("%f", &dim);

  float raio = dim / 2.0;

  float se = 4 * PI * pow(raio , 2);
  float vol = (4 * PI * pow(raio, 3)) / 3;

  printf("a área da superfície é %.2f e o volume é %.2f\n", se, vol);


  return 0;
}
