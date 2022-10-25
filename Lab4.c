#include <stdio.h>
#include <string.h>

//int main () {
  // Exercício 1 - Faça um programa que pergunte o nome e o preço de dois produtos e informe qual produto você deve comprar, sabendo que a decisão é sempre pelo mais barato.
  
  /*char nomeProd1[30], nomeProd2[30];
  float preco1, preco2;

  printf("Informe o nome do primeiro produto: ");
  scanf("%s", &nomeProd1);
  printf("Informe o preço dele: ");
  scanf("%f", &preco1);
  printf("Informe o nome do segundo produto: ");
  scanf("%s", &nomeProd2);
  printf("Informe o preço dele: ");
  scanf("%f", &preco2);

  if (preco1 == preco2){
    printf("Os valores são iguais! Você pode comprar tanto %s quanto %s", nomeProd1, nomeProd2);
  } else if (preco1 > preco2){
    printf("%s é mais barato que %s, logo é melhor você comprá-lo!", nomeProd2, nomeProd1);
  } else if (preco2 > preco1){
    printf("%s é mais barato que %s, é melhor você comprar ele!", nomeProd1, nomeProd2);
  }*/

  // Exercício 2 - Aprimore a solução do programa anterior, perguntando o preço de três produtos e, em seguida, informe qual é o produto mais caro.
  
  /*char nomeProd1[30], nomeProd2[30], nomeProd3[30];
  float preco1, preco2, preco3;

  printf("Informe o nome do primeiro produto: ");
  scanf("%s", &nomeProd1);
  printf("Informe o preço dele: ");
  scanf("%f", &preco1);
  printf("Informe o nome do segundo produto: ");
  scanf("%s", &nomeProd2);
  printf("Informe o preço dele: ");
  scanf("%f", &preco2);
  printf("Informe o nome do terceiro produto: ");
  scanf("%s", &nomeProd3);
  printf("Informe o preço dele: ");
  scanf("%f", &preco3);
  
  if (preco1 == preco2 && preco1 == preco3){
    printf("Os valores são iguais! Não há um produto mais caro que o outro");
  } else if (preco1 > preco2 && preco1 > preco3){
    printf("%s é o produto mais caro, ele custa %.2f!", nomeProd1, preco1);
  } else if (preco2 > preco1 && preco2 > preco3){
    printf("%s é o produto mais caro, ele custa %.2f!", nomeProd2, preco2);
  } else if (preco3 > preco1 && preco3 > preco2){
    printf("%s é o produto mais caro, ele custa %.2f!", nomeProd3, preco3);
  }*/

  // Desafio 1 - Faça um Programa que peça o valor dos 3 lados de um triângulo. O programa deverá informar se os valores podem ser um triângulo. Indique, caso os lados formem um triângulo, se o mesmo é: equilátero, isósceles ou escaleno. Três lados formam um triângulo quando a soma de quaisquer dois lados for maior que o terceiro

  /*float lado1, lado2, lado3;
  
  printf("Informe o valor do lado 1: ");
  scanf("%f", &lado1);
  printf("Informe o valor do lado 2: ");
  scanf("%f", &lado2);
  printf("Informe o valor do lado 3: ");
  scanf("%f", &lado3);

  if (lado1 + lado2 < lado3 || lado1 + lado3 < lado2){
    printf("Os valores informados não podem formar um triângulo!");
  } else if(lado1 == lado2 && lado1 == lado3){
    printf("O triângulo informado é EQUILÁTERO! Ele possui todos os lados iguais.");
  } else if(lado1 == lado2 || lado1 == lado3){
    printf("O triângulo informado é ISÓSCELES! Ele possui dois lados iguais.");
  } else if(lado1 != lado2 && lado1 != lado3){
    printf("O triângulo informado é ESCALENO! Ele possui todos os lados diferentes.");
  }*/

  // Desafio 2 - Faça um programa contador de vogais maiúsculas e minúsculas. As consoantes e símbolos devem ser desprezadas, e, ao final do programa, mostre a quantidade de vogais maiúsculas e de minúsculas que o usuário digitou
  /*int contadorMin = 0, contadorMai = 0;
  char palavra[20], vogaisMin[] = "aeiou", vogaisMai[] = "AEIOU";
  
  printf("------Contador de Vogais Maiúsculas e Minúsculas------\n");
  printf("Digite uma palavra: ");
  scanf("%s", palavra);
  
  char tam = strlen(palavra);

  for (int i = 0; i < tam; i++){
    for (int j = 0; j < tam; j++){
      if (vogaisMin[j] == palavra[i]){
        contadorMin++;
      } else if (vogaisMai[j] == palavra[i]){
        contadorMai++;
      }
    }
  }

  printf("Vogais minúsculas: %d\n", contadorMin);
  printf("Vogais maiúsculas: %d", contadorMai);*/
  
  //return 0;
//}