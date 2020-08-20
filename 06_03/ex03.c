#include <stdio.h>
#include <locale.h>

/*
* 3. Escreva um algoritmo para ler dois valores (x,y) escreva na tela o resultado da operação lógica que verifica se a
* operação diferença entre eles, é igual a zero.
*
* Gabriel Carneiro de Castro
*/

int main() {
  setlocale(LC_ALL, "portuguese");

  float x = 0;
  float y = 0;

  printf("digite o valor de X: ");
  scanf("%f", &x);

  printf("digite o valor de Y: ");
  scanf("%f", &y);

  float diff = x - y;

  printf("x - y == 0 == %d\n", diff == 0);

  return 0;
}
