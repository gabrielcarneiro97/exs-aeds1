#include <stdio.h>
#include <locale.h>

/*
* 5. Uma escola tem x professores, dos quais y% ensinam Cálculo. Quantos professores ensinam Matemática nessa escola?
*
* Gabriel Carneiro de Castro
*/

int main() {
  setlocale(LC_ALL, "portuguese");

  int qntprofs = 0;
  int percentmat = 0;

  printf("quantos professores têm na escola: ");
  scanf("%d", &qntprofs);

  printf("qual o percentual de professores que ensina cálculo: ");
  scanf("%d", &percentmat);

  int qntmat = qntprofs * (percentmat / 100.0);

  printf("a quantidade de professores que ensina matemática é: %d\n", qntmat);

  return 0;
}
