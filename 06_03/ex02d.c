#include <stdio.h>
#include <locale.h>
#include <math.h>

/*
* 2. Escreva um algoritmo para mostrar na tela o resultado das seguintes operações
*   d) Ler os valores de x, y, e A e mostre o resultado para: (X ^ 2) - (Y ^ 3) > X ^ (A + 4) e A < 5
*
* Gabriel Carneiro de Castro
*/

int main() {
  setlocale(LC_ALL, "portuguese");

  float x = 0;
  float y = 0;
  float A = 0;

  printf("digite o valor de X: ");
  scanf("%f", &x);

  printf("digite o valor de Y: ");
  scanf("%f", &y);

  printf("digite o valor de A: ");
  scanf("%f", &A);

  printf("(X ^ 2) - (Y ^ 3) > X ^ (A + 4) = %d\n", pow(x, 2) - pow(y, 3) > pow(x, A + 4));
  printf("A < 5 = %d\n", A < 5);

  return 0;
}
