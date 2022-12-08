#include <stdio.h>
#include <stdlib.h>

int main(){
  // Exercício 1 - Replique o exemplo acima escrevendo em um arquivo chamado "lab11.txt" a seguinte frase: "Estou aprendendo a escrever em arquivos usando C."
  
  /*FILE *arquivo;
  arquivo = fopen("ArquivoExercício1.txt", "w");
  if(arquivo == NULL){
    printf("ERROR!");
  } else{
    fprintf(arquivo, "Estou aprendendo a escrever em arquivos usando C.");
  }
  fclose(arquivo);*/

  // Exercício 2 - Reutilizando o mesmo código, troque o modo de abertura para append e escreva outra frase e observe o resultado. Em seguida, retorne novamente o modo de abertura para write e escreva uma terceira frase no arquivo, observando o resultado.
  
  /*FILE *file;
  file = fopen("ArquivoExercício2.txt","w");

  fprintf(file, "Estou aprendendo a escrever em arquivos usando C.\n");
  fprintf(file, "Seja Bem-vindo\n");
  fprintf(file, "Bom dia\n");
  fprintf(file, "Tudo bem?\n");

  fclose(file);*/
  
  // Desafio 1 - Pesquise uma forma diferente de incluir informações nos arquivos utilizando as funções fputs e fputc e produza uma versão diferente dos programas feitos nos dois exercícios anteriores.
  
  /*FILE *file;
  file = fopen("ArquivoDesafio1.txt", "w"); 
  char textin[50], carac = '$';
  printf("Digite a mensagem que você quer escrever: ");
  scanf("%s", textin);
  fputs(textin, file);
  fputc(carac, file);
  
  fclose(file);*/

  // Exercício 3 - Utilizando a função fscanf, tente realizar a leitura de 5 números decimais no arquivo chamado "notas.txt" e imprima a média dessas notas no terminal.
  
  /*FILE *file;
  float nota1, nota2, nota3, nota4, nota5;
  file = fopen("NotasExercício3.txt", "r");
  if (file == NULL){
    printf("O arquivo não pode ser aberto\n");
    exit(1);
  }
  fscanf(file, "%f %f %f %f %f", &nota1, &nota2, &nota3, &nota4, &nota5);
  float media = (nota1 + nota2 + nota3 + nota4 + nota5) / 5;
  printf("%.2f", media);
  fclose(file);*/

  // Exercício 4 - Faça um programa que lê apenas a primeira linha de um arquivo em duas versões: a primeira, usando a função fgets e a segunda usando fscanf (utilize apenas um %s para formatar a coleta no arquivo). Observe a diferença entre as abordagens.
  
  /*char string[30];
  FILE *arquivo, *arquivo2;
  arquivo = fopen("ArquivoExercício4fscanf.txt", "w");
  arquivo2 = fopen("ArquivoExercício4fgets.txt", "w");
  
  if(arquivo== NULL){
    printf("ERROR!");
  } else{
    fprintf(arquivo, "Chocolate\nMeioAmargo");
  }
  fclose(arquivo);

  if(arquivo2 == NULL){
    printf("ERROR!");
  } else{
    fprintf(arquivo2, "Linguagem\nProgramação");
  }
  fclose(arquivo2);
  
  arquivo = fopen("ArquivoExercício4fscanf.txt", "r");
  fscanf(arquivo, "%s", string);
  printf("%s\n", string);
  
  fclose(arquivo);

  arquivo2 = fopen("ArquivoExercício4fgets.txt", "r");
  fscanf(arquivo, "%s", string);
  printf("%s", string);
  
  fclose(arquivo2);*/

  // Desafio 2 - Crie um programa que tenha uma função onde se copia o conteúdo de um arquivo para outro. Dica: use a função fputs pesquisada anteriormente.
  
  /*FILE *arquivin, *arquivin2;
  arquivin = fopen("ArquivoDesafio2.txt", "r"); 
  arquivin2 = fopen("Arquivo2Desafio2.txt", "a");
  
  char frase [100];
  while(fgets(frase, 100, arquivin) != NULL) {
    printf("%s", frase);
    fprintf(arquivin2, frase);
  }
  
  fclose(arquivin);*/
  
  return 0;
}