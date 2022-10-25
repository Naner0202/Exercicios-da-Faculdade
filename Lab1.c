#include <stdio.h>

int numero;
int sub1, sub2, mult1;

int main() {
// Exercício 1 - Escreva um código que pede um número ao usuário, e, em seguida, mostre a mensagem "O número informado foi [número]". Esse número deve ser armazenado em uma variável global.

  printf("Informe um número: ");
  scanf("%d", &numero);

  printf("O número informado foi %d", numero);

// Exercício 2 - Reescreva o programa do exercício 2 do Lab 0, sendo que, as variáveis que representam os números recebidos do usuário devem ser de escopo global e, o resultado final, deve ser de escopo local.

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

// Exercício 3 - Tendo como dados de entrada o nome e a altura de uma pessoa, construa um programa que calcule seu peso ideal, usando a seguinte fórmula: (72.7*altura) - 58, sendo o resultado formatado com 3 dígitos dentro de uma mensagem final com o nome fornecido pelo usuário.
  
  char nome[50];
  float altura;
  printf("Informe seu nome: ");
  scanf("%s", &nome);
  printf("Informe sua altura: ");
  scanf("%f", &altura);
  
  float pesoIdeal = (72.7 * altura) - 58;
  
  printf("%s, seu peso ideal seria de %.3f kg", nome, pesoIdeal);

// Desafio 1 - Faça um Programa que peça a temperatura em graus Fahrenheit, transforme e mostre a temperatura em graus Celsius. (Formate bem a sua entrada e saída!) A fórmula para conversão é: C = 5 * ((F-32) / 9).
  
  float grausF;
  
  printf("Informe os graus em Fahrenheit para conversão: ");
  scanf("%f", &grausF);
  
  float grausC = 5 * ((grausF - 32) / 9);
  printf("%.1f° em Fahrenheit são %.1f° em Celsius", grausF, grausC);

// Desafio 2 - Faça um Programa que pergunte quanto você ganha por hora, o número de horas trabalhadas no mês, e as porcentagens de desconto do Imposto de Renda e INSS. Calcule e mostre o total do seu salário no referido mês em um programa que nos dê: salário bruto, quanto pagou ao INSS, quanto pagou de IR e o salário líquido.
  
  float ganhoHora, ganhoMes, IR, INSS;
  
  printf("Quanto você ganha por hora? ");
  scanf("%f", &ganhoHora);
  printf("Informe quantas horas você trabalhou nesse mês: ");
  scanf("%f", &ganhoMes);
  printf("Informe sua porcentagem de desconto do Imposto de Renda: ");
  scanf("%f", &IR);
  printf("Informe sua porcentagem de desconto do INSS: ");
  scanf("%f", &INSS);
  
  float salarioBruto = ganhoHora * ganhoMes;
  float descIR = salarioBruto * (IR / 100), descINSS = salarioBruto * (INSS /
  100); float salarioLiquido = salarioBruto - descIR - descINSS;
  
  printf("\nSalário Bruto: R$ %.2f\n", salarioBruto);
  printf("Imposto de Renda (%.2f%%): R$ %.2f\n", IR, descIR);
  printf("INSS (%.2f%%): R$ %.2f\n", INSS, descINSS);
  printf("Salário Líquido: R$ %.2f", salarioLiquido);

  return 0;
}
