#include <stdio.h>
#include <locale.h>

/*
* 2. Uma empresa contrata um encanador a R$ 20.00 por dia. Crie um programa que solicite o número de dias trabalhados
* pelo encanador e imprima a quantia líquida que deverá ser paga, sabendo-se que são descontados 8% de impostos.
*
* Gabriel Carneiro de Castro
*/

int main() {
  setlocale(LC_ALL, "portuguese");

  int dias = 0;

  printf("digite o número de dias: ");
  scanf("%d", &dias);

  float valdias = dias * 20.0;

  float imposto = 0.08 * valdias;

  float liquido = valdias - imposto;

  printf("o valor a pagar é %.2f\n", liquido);

  return 0;
}
