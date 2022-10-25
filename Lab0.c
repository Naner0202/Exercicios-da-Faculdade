#include <math.h>
#include <stdio.h>

int main() {
// Exercício 1 - Como seria um programa para imprimir duas frases, tipo, uma saudação e seu nome?

  char meuNome[13] = "Rennan Silva";
  char nome[50];
  printf("Olá %s, seja bem-vindo!\n", "Rennan");
  printf("Olá %s, seja bem-vindo!\n", meuNome);
  printf("Informe seu nome: ");
  scanf("%s", &nome);
  printf("Olá %s, seja bem-vindo!", nome);

// Exercício 2 - Crie um programa para subtrair dois números e multiplicar por um terceiro.

  int sub1, sub2, mult1;
  printf("Informe o primeiro número: ");
  scanf("%d", &sub1);
  printf("Informe o segundo número: ");
  scanf("%d", &sub2);
  printf("Informe o terceiro número: ");
  scanf("%d", &mult1);

  int subtracao = sub1 - sub2;
  int multiplicacao = subtracao * mult1;
  printf("Subtração: %d - %d = %d\n", sub1, sub2, subtracao);
  printf("Multiplicação: %d X %d = %d", subtracao, mult1, multiplicacao);

// Desafio 1 - Crie um programa para calcular potência de base 2, sendo a informação da base (2) sempre uma constante, e o expoente informado no teclado pelo usuário.

  int expoente;
  printf("Informe o expoente a ser calculado pela base 2: ");
  scanf("%d", &expoente);
  int calculo = pow(2, expoente);
  printf("O valor de 2 elevado a %d é %d", expoente, calculo);

//return 0;
//}
