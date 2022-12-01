#include <stdio.h>
#include <ctype.h>
#include <math.h>

void calculaAreaPerimetro(float *ptrRaio);
void contarVogaisConsoantes(char *sPtr);

int main(){
  // Exercício 1 - Crie um programa que recebe dois valores inteiros n1 e n2 e, utilizando ponteiros p1 e p2, calcula as seguintes expressões: *p1 - *p2 | **&p1 | 3* - *p1/(*p2)+7

  int num1, num2;
  int *p1 = &num1, *p2 = &num2;
  printf("Informe o 1° valor: ");
  scanf("%d", &num1);
  printf("Informe o 2° valor: ");
  scanf("%d", &num2);

  printf("*p1 - *p2 = %d\n**&p1 = %d\n3 * -*p1 / (*p2) + 7 = %d", *p1 - *p2, **&p1, 3 * -*p1 / (*p2) + 7);

  // Exercício 2 - Utilizando a mesma lógica do exemplo anterior, utilizando passagem por referência, crie uma função que, recebendo do usuário o valor do raio, calcula o perímetro (2*pi*raio) e a área (pi*raio²) de um círculo. Considere pi = 3.14.
  
  float raio;
  printf("Informe o raio do círculo: ");
  scanf("%f", &raio);
  
  calculaAreaPerimetro(&raio);

  // Desafio 1 -  Elabore uma função que recebe uma string e retorna quantas vogais e quantas consoantes ela possui. Lembre-se de utilizar passagem de parâmetro como referência.
  
  char palavra[50];
  printf("Digite uma palavra: ");
  scanf("%s", palavra);
  
  contarVogaisConsoantes(palavra);

  return 0;
}

void calculaAreaPerimetro(float *ptrRaio){
  // Procedimento para o Exercício 2
  float pi = 3.14;
  float perimetro = 2 * pi * *ptrRaio;
  float area = pi * pow(*ptrRaio, 2);
  printf("Perímetro do cículo de raio %.2f: %.2f u.c.\nÁrea do círculo: %.2f", *ptrRaio, perimetro, area);
}

void contarVogaisConsoantes(char *sPtr){
  // Procedimento para o Desafio 1
  int vogais = 0, consoantes = 0;
  while (*sPtr != '\0'){
    if (*sPtr == 'a' || *sPtr == 'e' || *sPtr == 'i' || *sPtr == 'o' || *sPtr == 'u'){
      vogais++;
    } else {
      consoantes++;
    }
    ++sPtr;
  }
  printf("\nVogais: %d\nConsoantes: %d", vogais, consoantes);
}
