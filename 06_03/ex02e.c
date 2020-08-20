#include <stdio.h>
#include <locale.h>
#include <math.h>

/*
* 2. Escreva um algoritmo para mostrar na tela o resultado das seguintes operações
*   d) Mostrar o resultado de (-B + (B^2 - 4AC)^(1/2)) / 2A e não (A = 0)
*
* Gabriel Carneiro de Castro
*/

int main() {
  setlocale(LC_ALL, "portuguese");

  float A = 0;
  float B = 0;
  float C = 0;

  printf("digite o valor de A: ");
  scanf("%f", &A);

  printf("digite o valor de B: ");
  scanf("%f", &B);

  printf("digite o valor de C: ");
  scanf("%f", &C);

  printf("(-B + (B^2 - 4AC)^(1/2)) / 2A = %.2f\n", (-B + pow(pow(B, 2) - 4 * A * C, 0.5) ) / 2 * A);
  printf("não (A = 0) = %d\n", !(A == 0));

  return 0;
}
