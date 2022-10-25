#include <stdio.h>

// int main() {
// Exercício 1 - Escreva um progama que recebe um número inteiro negativo e um número decimal positivo. Em seguida, converta o primeiro número em um decimal e o decimal em inteiro, testando pelo menos dois tipos diferentes de conversões. Realize também uma operação combinada com atribuição com cada número após a conversão.

/*int numNegativo, numConvInteiro;
float numPositivo, numConvDecimal;
do {
  printf("Informe um número inteiro negativo: ");
  scanf("%d", &numNegativo);
} while (numNegativo > 0);

do {
  printf("Informe um número decimal positivo: ");
  scanf("%f", &numPositivo);
} while (numPositivo < 0);

numConvDecimal = numNegativo;
numConvInteiro = numPositivo;

printf("\nDivisão por 5 com o decimal negativo: %f", numConvDecimal /= 5);
printf("\nSoma por 7 com o inteiro positivo: %d", numConvInteiro += 7);*/

// Exercício 2 - Verifique qual o resultado, dado dois números a e b fornecidos pelo usuário, das seguintes operações:   a = 5; b = a * (a++); a = 5; b = a * ++a; a = 5; b = a * a++;

/*int a = 5;
printf("%d * (%d++) = %d ", a, a, a * (a++));
int b = 5;
printf("\n%d * ++%d = %d", b, b, b * ++b);
int c = 5;
printf("\n%d * %d++ = %d ", c, c, c * c++);*/

// Exercício 3 - Faça um programa que recebe dois valores inteiros e os compara, imprimindo os resultados das comparações.

/*int nume1, nume2;

printf("Informe o 1° número inteiro: ");
scanf("%d", &nume1);
printf("Informe o 2° número inteiro: ");
scanf("%d", &nume2);

printf("%d\n", nume1 == nume2);
printf("%d\n", nume1 != nume2);
printf("%d\n", nume1 >= nume2);
printf("%d", nume1 <= nume2);*/

// Desafio 1 - Pesquise como imprimir "true" ou "false" ao invés de 0 ou 1 usando o operador ternário.

/*int num;
printf("Digite 0 ou 1: ");
scanf("%d", &num);

(num == 0) ? printf("True\n") : printf("False\n");

int x = 5;
int y = 10;

printf("X é menor que Y? ");
(x < y) ? printf("True\n") : printf("False\n");
printf("X é igual a Y? ");
(x == y) ? printf("True\n") : printf("False\n");*/

// Exercício 4 - Faça um Programa que peça um valor e mostre na tela se o valor é positivo ou negativo.

/*int num;
printf("Informe um número: ");
scanf("%d", &num);

if (num > 0) printf("O número %d é positivo", num);
else printf("O número %d é negativo", num);*/

// Desafio 2 - Faça um Programa que pergunte em que turno você estuda. Peça para digitar 1 - Matutino ou 2 - Vespertino ou 3 - Noturno. Imprima a mensagem "Bom Dia!", "Boa Tarde!" ou "Boa Noite!" ou "Valor Inválido!", conforme o caso.

/*int turno;

printf("------Menu------\n\n");
printf("1 - Matutino\n");
printf("2 - Vespertino\n");
printf("3 - Noturno\n\n");
printf("Em que turno você estuda? ");
scanf("%d", &turno);

if(turno == 1){
  printf("Bom dia!");
} else if(turno == 2){
  printf("Boa tarde!");
} else if(turno == 3){
  printf("Boa noite!");
} else{
  printf("Valor inválido");
}*/

// return 0;
//}