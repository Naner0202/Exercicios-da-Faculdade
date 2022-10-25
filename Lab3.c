#include <stdio.h>

int main() {
  // Exercício 1 - Faça um Programa que peça um valor e mostre na tela se o valor é um múltiplo de 3, 4 ou 5.

  int num;
  printf("Informe um número: ");
  scanf("%d", &num);

  if (num % 3 == 0) {
    printf("%d é múltiplo de 3\n", num);
  }
  if (num % 4 == 0) {
    printf("%d é múltiplo de 4\n", num);
  }
  if (num % 5 == 0) {
    printf("%d é múltiplo de 5\n", num);
  }

  // Exercício 2 - Reescreva a solução do desafio 2 do lab anterior com o uso de operador ternário. Substitua as possíveis entradas por números (1-Matutino, 2-Vespertino e 3-Noturno).

  int turno;

  printf("------Menu------\n\n");
  printf("1 - Matutino\n");
  printf("2 - Vespertino\n");
  printf("3 - Noturno\n\n");
  printf("Em que turno você estuda? ");
  scanf("%d", &turno);

  turno == 1 ? printf("Bom dia!") : turno == 2 ? printf("Boa tarde") : turno ==
  3 ? printf("Boa noite") : printf("Valor inválido");

  // Exercício 3 - Faça um programa para a leitura de duas notas parciais de um aluno. O programa deve calcular a média alcançada por aluno e apresentar: A mensagem "Aprovado", se a média alcançada for maior ou igual a sete; A mensagem "Reprovado", se a média for menor do que sete; A mensagem "Aprovado com Distinção", se a média for igual a dez.

  float nota1, nota2;
  printf("Informe a 1° Nota: ");
  scanf("%f", &nota1);
  printf("Informe a 2° Nota: ");
  scanf("%f", &nota2);

  float media = (nota1 + nota2) / 2;

  if (media == 10) {
    printf("Aprovado com Distinção!");
  } else if (media >= 7) {
    printf("Aprovado!");
  } else if (media < 7) {
    printf("Reprovado!");
  }
// São cinco opções: consultar saldo, fazer empréstimo, consultar fatura do cartão de crédito, pedir novo cartão ou falar diretamente com atendente, sendo esta última, a opção padrão.

  // Exercício 4 Simule, com a ajuda de um switch, um atendimento telefônico em um banco. São cinco opções: consultar saldo, fazer empréstimo, consultar fatura do cartão de crédito, pedir novo cartão ou falar diretamente com atendente, sendo esta última, a opção padrão.

  int op;
  
  printf("\n------ Rennan's Bank ------\n");
  printf("1 - Consultar saldo\n");
  printf("2 - Fazer empréstimo\n");
  printf("3 - Consultar fatura do cartão de crédito\n");
  printf("4 - Pedir novo cartão\n");
  scanf("%d", &op);

  switch (op){
    case 1: printf("Saldo atual: R$ 2,50"); break;
    case 2: printf("Valor de empréstimo disponível: R$ 200,00"); break;
    case 3: printf("2° Via da fatura do cartão de crédito: R$ 2800,00"); break;
    case 4: printf("Cartão novo chegará em 2 dias utéis!"); break;
    default: printf("Fale diretamente com um dos nossos atendentes"); break;
  }

  // Desafio 1 - Faça um programa que lê as duas notas parciais obtidas por um aluno numa disciplina ao longo de um semestre, e calcule a sua média. O algoritmo deve mostrar na tela as notas, a média, o conceito correspondente e a mensagem “APROVADO” se o conceito for A, B ou C ou “REPROVADO” se o conceito for D ou E.

  float nota1, nota2;
  int conc;
  printf("Informe a 1° Nota: ");
  scanf("%f", &nota1);
  printf("Informe a 2° Nota: ");
  scanf("%f", &nota2);
  float media = (nota1 + nota2) / 2;

  printf("Notas do aluno: [%.1f] [%.1f]\n", nota1, nota2);
  printf("Média %.1f\n", media);
  
  if (media == 0 || media < 4){
    conc = 1;
    printf("Conceito E\n");
  } else if (media >= 4 && media < 6){
    printf("Conceito D\n");
    conc = 2;
  } else if (media >= 6 && media < 7.5){
    printf("Conceito C\n");
    conc = 3;
  } else if (media >= 7.5 && media < 9){
    printf("Conceito B\n");
    conc = 4;
  } else if (media >= 9 && media <= 10){
    printf("Conceito A\n");
    conc = 5;
  }

  switch (conc){
    case 1: printf("Reprovado!"); break;
    case 2: printf("Reprovado!"); break;
    case 3: printf("Aprovado!"); break;
    case 4: printf("Aprovado!"); break;
    case 5: printf("Aprovado!"); break;
  }
  
  return 0;
}
