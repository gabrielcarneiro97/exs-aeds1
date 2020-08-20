#include <stdio.h>
#include <locale.h>

/*
* 2. Escreva um algoritmo para mostrar na tela o resultado das seguintes operações
*   c) ler os valores para (x e y) e mostrar o resultado para:
*     x>y
*     y>x
*     x=y
*
* Gabriel Carneiro de Castro
*/

int main() {
  setlocale(LC_ALL, "portuguese");

  float x = 0;
  float y = 0;

  printf("digite um número: ");
  scanf("%f", &x);

  printf("digite outro número: ");
  scanf("%f", &y);

  printf("x > y = %d\n", x > y);
  printf("y > x = %d\n", y > x);
  printf("x == y = %d\n", x == y);

  return 0;
}
