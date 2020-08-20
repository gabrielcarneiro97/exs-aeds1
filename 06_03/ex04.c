#include <stdio.h>
#include <locale.h>

/*
* 4. Escreva um algoritmo para determinar a distância entre dois pontos em uma reta
*
* Gabriel Carneiro de Castro
*/

int main() {
  setlocale(LC_ALL, "portuguese");

  int p1 = 0;
  int p2 = 0;

  printf("digite a posição de  p1: ");
  scanf("%d", &p1);

  printf("digite a posição de  p2: ");
  scanf("%d", &p2);

  int dist = abs(abs(p1) - abs(p2));

  printf("a distância é: \n", dist);

  return 0;
}
