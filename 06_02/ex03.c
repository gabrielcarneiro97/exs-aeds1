#include <stdio.h>
#include <locale.h>

/*
*  3. O cardápio de uma lanchonete é dado abaixo. Prepare um programa que leia a quantidade de cada item que você
*  consumiu e calcule a conta final.
*    Hambúrguer............... R$ 30,00
*    Cheeseburger............. R$ 35,50
*    Fritas................... R$ 20,50
*    Refrigerante............. R$ 10,00
*    Milkshake................ R$ 30,00
*
* Gabriel Carneiro
*/

int main() {
  setlocale(LC_ALL, "portuguese");

  int hamb = 0;
  int cheese = 0;
  int fritas = 0;
  int refri = 0;
  int milkshake = 0;

  printf("digite a quantidade de cada produto\n");

  printf("hambúrguer: ");
  scanf("%d", &hamb);
  float hambval = hamb * 30.0;

  printf("cheeseburguer: ");
  scanf("%d", &cheese);
  float cheeseval = cheese * 35.5;

  printf("fritas: ");
  scanf("%d", &fritas);
  float fritasval = fritas * 20.5;

  printf("refri: ");
  scanf("%d", &refri);
  float refrival = refri * 10.0;

  printf("milkshake: ");
  scanf("%d", &milkshake);
  float milkshakeval = milkshake * 30.0;

  float valtotal = hambval + cheeseval + fritasval + refrival + milkshakeval;

  printf("o valor total da conta é %.2f\n", valtotal);


  return 0;
}
