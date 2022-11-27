#include <stdio.h>
#include <math.h>
#define tamanho 10

void ehBissexto(int ano);
void imprimePotenciais (int valorInicial, int valorFinal, int expoente);
int ehPrimo(int num);
int somatorio(int num);
void ehPrimo100();

int main(){
  // Exercício 1 - Escreva uma função para verificar se um ano é bissexto ou não. Utilize a seguinte regra: um ano bissexto é divisível por 4, mas não por 100, ou então é divisível por 400. Exemplo: 1988 é bissexto pois é divisível por 4 e não é por 100; 2000 é bissexto porque é divisível por 400.
  
  int ano;
  printf("Informe um ano: ");
  scanf("%d", &ano);

  ehBissexto(ano);

  // Exercício 2 - Escreva uma função chamada imprimePotencias que recebe três parâmetros: você irá fornecer o valor limitante inicial, o valor limitante final e qual será o expoente (nesta ordem). Por exemplo, ao receber os números 2, 5 e 2, serão impressos 4, 9, 16 e 25.
  
  int valorInicial, valorFinal, expoente;
  printf("Informe o valor limitante inicial, o valor limitante final e qual será o expoente: ");
  scanf("%d %d %d", &valorInicial, &valorFinal, &expoente);

  imprimePotenciais (valorInicial, valorFinal, expoente);

  // Desafio 1 - Construa uma função que recebe um número inteiro como parâmetro e retorna 1 se ele for primo e 0 caso não seja. Dica: Para avaliar se um número é primo, utilize o Crivo de Erastóstenes.

  int num;
  printf("Informe um número: ");
  scanf("%d", &num);
  
  if (ehPrimo(num) == 1){
    printf("%d é um número primo\n", num);
  } else{
    printf("%d não é um número primo\n", num);
  }

  // Exercício 3 - Escreva uma função recursiva para calcular a somatória de todos os números de 1 até um determinado número n passado como parâmetro.
  
  int num;
  printf("Informe a quantidade de número para somar: ");
  scanf("%d", &num);

  if (somatorio(num) == -1){
      printf("Número negativo ou zero não entram no somatório!");
  } else {
      printf("Somatório: %d", somatorio(num));
  }

  // Desafio 2 - Escreva uma função recursiva que resolva o problema da sequência de Fibonacci, passando como parâmetro o número da sequência que se deseja obter.
  
  int termo, resposta;
  printf("Informe o termo da sequência: ");
  scanf("%d", &termo);
  
  resposta = Fibonacci(termo);
  
  if (resposta == -1){
      printf("Na sequência de Fibonacci não existe termos negativos ou termo 0");
  } else{
      printf("O valor do termo solicitado é: %d", resposta);
  }

  // Desafio 3: Amplie o código do Desafio 1 deste roteiro para avaliar quantos números primos existem entre 1 e 100.

  ehPrimo100();
  
  return 0;
}

void ehBissexto(int ano){
  // Procedimento para o Exercício 1
  if (ano % 4 == 0 && ano % 100 != 0){
    printf("\nO ano %d é bissexto, porque é divisível por 4, mas não por 100", ano);
  } else if (ano % 400 == 0){
    printf("O ano %d é bissexto, porque é divisível por 400", ano);
  } else {
    printf("O ano %d não é bissexto!", ano);
  }
}

void imprimePotenciais (int valorInicial, int valorFinal, int expoente){
  // Procedimento para o Exercício 2
  for (int i = valorInicial; i < valorFinal + 1; i++){
    double resultado = pow(i, expoente);
    printf("%.1lf ", resultado);
  }
}

int ehPrimo(int num){
  // Função para o Desafio 1
  for (int i = 2; i < num; i++){
    if (num % i == 0) {
      return 0;
    }
  } return 1;
}

int somatorio(int num){
  // Função para o Exercício 3
  if (num < 0){
      return -1;
  } else if (num == 1){
      return 1;
  } else {
      return num + somatorio(num - 1);
  }
}

int Fibonacci(int termo){
  // Função para o Desafio 2
  if(termo <= 0){
    return -1;
  } else if(termo == 1){
    return 1;
  } else if(termo ==2 ){
    return 1;
  } else{
    return Fibonacci(termo - 2) + Fibonacci(termo - 1);
  }
}

void ehPrimo100(){
  // Função para o Desafio 3
  int contador = 0;
  for (int i = 2; i < 100; i++){
    if (ehPrimo(i) == 1){
      contador++;
    }
  } 
  printf("Existem %d números primos", contador);
}
