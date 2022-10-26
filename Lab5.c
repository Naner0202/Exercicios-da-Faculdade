#include <stdio.h>

int main(){
 // Exercício 1 - Faça um programa que leia 5 números e informe a soma dos números.
  
  int contador = 0, num, soma = 0;;
  while (contador <= 5){
    printf("Informe o %d° número: ", contador + 1);
    scanf("%d", &num);
    soma += num;
    contador += 1;
  }
  printf("A soma dos números digitados é: %d", soma);

  // Exercício 2 - Faça um programa que calcule a média aritmética de um número determinado de números.
  
  int quantNum, num, contador, soma = 0;
  printf("Média de quantos números? ");
  scanf("%d", &quantNum);
  contador = quantNum;
  
  while (contador != 0){
    printf("Informe um número: ");
    scanf("%d", &num);
    soma += num;
    contador -= 1;
  }
  int media = soma / quantNum;
  printf("\nA média dos valores é %d", media);

  // Exercício 3 - Reescreva a solução do exercício 2 utilizando for.
  
  int quantNum, num, contador, soma = 0;
  printf("Média de quantos números? ");
  scanf("%d", &quantNum);
  contador = quantNum;

  for (contador; contador != 0; contador--){
     printf("Informe um número: ");
    scanf("%d", &num);
    soma += num;
  }
  int media = soma / quantNum;
  printf("\nA média dos valores é %d", media);

  // Exercício 4 - Faça um programa que calcule o fatorial de um número inteiro fornecido pelo usuário.
  
  int num, fatorial = 1, i;
  printf("Informe um número para calcular seu fatorial: ");
  scanf("%d", &num);
  i = num;
  
  for (i; i != 0; i--){
    fatorial *= i;
  }
  printf("O fatorial de %d é %d", num, fatorial);

  // Exercício 5 -  Reescreva novamente a solução do exercício 2 utilizando do-while.
  
  int quantNum, num, contador, soma = 0;
  printf("Média de quantos números? ");
  scanf("%d", &quantNum);
  contador = quantNum;
  
  do {
    printf("Informe um número: ");
    scanf("%d", &num);
    soma += num;
    contador -= 1;
  } while (contador != 0);
  
  int media = soma / quantNum;
  printf("\nA média dos valores é %d", media);

  // Exercício 6 - Replique os dois códigos anteriores invertendo a ordem da função printf e do bloco if para avaliar o efeito das palavras break e continue.
 
  int contador;
  for (int contador = 1; contador <= 5; ++contador){

    if (contador == 3)
      break;
    
    printf("%d ", contador);  // Com o break antes do print, o contador vai somente até 2
  }
  
  puts("");
 
  int contador;
  for (int contador = 1; contador <= 5; ++contador) {
    printf("%d ", contador);
    
    if (contador == 3)  // Com o continue depois do print, o algoritmo segue normalmente, pois o print foi feito antes do comando
      continue;
  }
  
  puts("");

  // Desafio 1 - Faça um programa que peça dois números, base e expoente, calcule e mostre o primeiro número elevado ao segundo número. Forneça várias soluções utilizando dos três laços que você aprendeu, mas não utilize a função de potência da linguagem.
  
  int base, expoente, resultado = 1;
  printf("Informe a base: ");
  scanf("%d", &base);
  printf("Informe o expoente: ");   
  scanf("%d", &expoente);
  int i = expoente;
  
  do{
    resultado *= base;
    i--;
  } while (i != 0);
  
  printf("O resultado de %d elevado a %d é: %d", base, expoente, resultado);
  
  int base, expoente, resultado = 1;
  
  printf("Informe a base: ");
  scanf("%d", &base);
  printf("Informe o expoente: ");   
  scanf("%d", &expoente);
  int i = expoente;
  
  while (i != 0){
    resultado *= base;
    i--;
  }
  
  printf("O resultado de %d elevado a %d é: %d", base, expoente, resultado);
  
  return 0;
}
