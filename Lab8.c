#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#define tamanho1 10
#define tamanho2 100

int main(){
  // Exercício 1 - Faça um Programa que leia 20 números, que devem ser inseridos em dois arrays com 10 elementos cada. Gere um terceiro vetor de 20 elementos, cujos valores deverão ser compostos pelos elementos intercalados dos dois outros arrays.
  
  int vetor1[tamanho1], vetor2[tamanho1], vetor3[20];
  for (int i = 0; i < 10; i++){
    printf("Informe um valor para o 1° array: ");
    scanf("%d", &vetor1[i]);
  }
  for (int i = 0; i < 10; i++){
    printf("Informe um valor para o 2° array: ");
    scanf("%d", &vetor2[i]);
  }
  for (int i = 0; i < tamanho1; i++){
    vetor3[i * 2] = vetor1[i];
  }
  for (int i = 0; i < tamanho1; i++){
    vetor3[i * 2 + 1] = vetor2[i];
  }
  for (int j = 0; j < tamanho1 * 2; j++){
    printf("%d ", vetor3[j]);
  }

  // Exercício 2 - Faça um programa que simule um lançamento de dados. Lance o dado 100 vezes e armazene os resultados em um array. Depois, mostre quantas vezes cada valor foi conseguido.
  
  int num[tamanho2], contZero = 0, contUm = 0, contDois = 0, contTres = 0, contQuatro = 0, contCinco = 0, contSeis = 0;
  
  srand(time(NULL));
  
  for (int i = 0; i < tamanho2; i++) {
    num[i] = (rand() % 7);
  }
  for (int i = 0; i < tamanho2; i++) {
    if (num[i] == 0){
      contZero++;
    } else if (num[i] == 1){
      contUm++;
    } else if (num[i] == 2){
      contDois++;
    } else if (num[i] == 3){
      contTres++;
    } else if (num[i] == 4){
      contQuatro++;
    } else if (num[i] == 5){
      contCinco++;
    } else if (num[i] == 6){
      contSeis++;
    }
  }
  printf("[0] - %d\n[1] - %d\n[2] - %d\n[3] - %d\n[4] - %d\n[5] - %d\n[6] - %d\n", contZero, contUm, contDois, contTres, contQuatro, contCinco, contSeis);

  // Desafio 1 - Faça um programa que faça 5 perguntas para uma pessoa sobre um crime (1 para SIM e 0 para NÃO). As perguntas são: "Telefonou para a vítima?", "Esteve no local do crime?", "Mora perto da vítima?", "Devia para a vítima?", "Já trabalhou com a vítima?". O programa deve no final emitir uma classificação sobre a participação da pessoa no crime. Se a pessoa responder positivamente a 2 questões ela deve ser classificada como "Suspeita", entre 3 e 4 como "Cúmplice" e 5 como "Assassino". Caso contrário, ele será classificado como "Inocente".
  
  int respostas[5], contSim = 0;
  
  printf("Responda 1 para SIM e 0 para NÃO\n");
  printf("Você telefonou para a vítima? ");
  scanf("%d", &respostas[0]);
  printf("Você esteve no local do crime? ");
  scanf("%d", &respostas[1]);
  printf("Você mora perto da vítima? "); 
  scanf("%d", &respostas[2]);
  printf("Você devia para a vítima? ");
  scanf("%d", &respostas[3]);
  printf("Você já trabalhou com a vítima? ");
  scanf("%d", &respostas[4]);

  for (int i = 0; i < 5; i++){
    if (respostas[i] == 1){
      contSim++;
    }
  }
  
  if(contSim == 2){
    printf("Você está classificado como Suspeito");
  } else if(contSim == 3 || contSim == 4){
    printf("Você está classificado como Cúmplice");
  } else if(contSim == 5){
    printf("Você está classificado como Assasino");
  } else {
    printf("Você é Inocente!");
  }

  // Desafio 2 - Faça um programa que leia um número indeterminado de valores, correspondentes a notas, encerrando a entrada de dados quando for informado um valor igual a -1 (que não deve ser armazenado). Após esta entrada de dados: Mostre a quantidade de valores que foram lidos; Exiba todos os valores na ordem em que foram informados, um ao lado do outro; Exiba todos os valores na ordem inversa à que foram informados, um abaixo do outro; Calcule e mostre a soma dos valores; Calcule e mostre a média dos valores; Calcule e mostre a quantidade de valores acima da média calculada; Calcule e mostre a quantidade de valores abaixo de sete.
  
  int *num, i = 0, cont = 0, soma = 0, media, acimaMedia = 0, abaixoSete = 0;
  num = (int *) malloc(sizeof (int));

  do {
    printf("Informe um valor: ");
    scanf("%d", &num[cont]);
    if (num[cont] != -1){ 
      cont++;
    }
  } while (num[cont] != -1);

  printf("Quantidade de valores lidos: %d\n", cont);
  
  printf("Valores na ordem informada: ");
  for (i = 0; i < cont; i++){
    printf("%d ", num[i]);
  }

  printf("\nValores na ordem inversa: ");
  for (int j = cont - 1; j >= 0; j--){
    printf("\n%d", num[j]);
  }

  printf("\nSoma dos valores: ");
  for (i = 0; i < cont; i++){
    soma += num[i];
  }
  printf("%d", soma);

  printf("\nMédia dos valores: ");
  media = soma / cont;
  printf("%d", media);

  printf("\nQuantidade de valores acima da média calculada: ");
  for (i = 0; i < cont; i++){
    if (num[i] > media){
      acimaMedia++;
    }
  }
  printf("%d", acimaMedia);

  printf("\nQuantidade de valores abaixo de sete: ");
  for (i = 0; i < cont; i++){
    if (num[i] < 7){
      abaixoSete++;
    }
  }
  printf("%d", abaixoSete);

  // Exercício 3 - Nome na vertical. Faça um programa que solicite o nome do usuário e imprima-o na vertical.
  
  char nome[21];
  
  printf("Informe seu nome [Máx 20 caracteres]: ");
  scanf("%s", nome);

  for (int i = 0; i < 20 && nome[i] != '\0'; i++){
    printf("%c\n", nome[i]);
  }

  // Desafio 3 - Modifique o programa anterior de forma a mostrar o nome em formato de escadas (normal e invertida).
  
  char nome[21];
  
  printf("Informe seu nome [Máx 20 caracteres]: ");
  scanf("%s", nome);

  for (int i = 0; i < (strlen(nome)); i++){
    for (int j = 0; j <= i; j++){
      printf("%c", nome[j]);
    }
    printf("\n");
  }

  for (int i = 0; i < (strlen(nome)); i++){
    for (int j = (strlen(nome)); j >= i; j--){
        printf("%c", nome[j]);
      }
      printf("\n");
  }
  
  return 0;
}
