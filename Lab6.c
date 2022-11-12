#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int retornar_maior(int num1, int num2, int num3, int num4);
void peso_ideal(float altura, char sexo);
int converter_horas(int horas);
void verificar_ampm(int horas);
void converter_mes(int dia, int mes, int ano);

//int main (){
  // Exercício 1 - Pesquise funções matemáticas de trigonometria e elabore um código com exemplos de uso delas.
  /*float numero;
  printf("Informe um número: ");
  scanf("%f", &numero);
  printf("O Seno do número informado é %.2f, o Cosseno é %.2f e a Tangente é %.2f", sin(numero), cos(numero), tan(numero));*/

  // Exercício 2 - Defina uma função que retorna o maior dentre 4 números inteiros passados como parâmetro.
  /*int num[4];
  for (int i = 0; i < 4; i++){
    printf("Informe o %d° número inteiro: ", i + 1);
    scanf("%d", &num[i]);
  }
  
  printf("O maior número entre os 4 digitados é %d", retornar_maior(num[0], num[1], num[2], num[3]));*/

  // Exercício 3 - Modifique o exemplo da função do cálculo de peso para inserir condições entre peso ideal para mulheres e homens, aplicando as seguintes fórmulas - mulheres: (62.1*altura) - 44.7 e homens: (72.7*altura) - 58.

  /*char sexo;
  float altura;
  
  printf("Informe sua altura: ");
  scanf("%f", &altura);
  printf("Informe seu sexo [M - Masculino, F - Feminino]: ");
  scanf("%s", &sexo);

  peso_ideal(altura, sexo);*/

  // Desafio 1 - Faça um programa que converta da notação de 24 horas para a notação de 12 horas. Por exemplo, o programa deve converter 14:25 em 2:25 P.M. A entrada é dada em dois inteiros. Seu programa deve contar com duas funções: uma para fazer a conversão e uma para a saída. Registre a informação A.M./P.M. como um valor ‘A’ para A.M. e ‘P’ para P.M. Assim, a função para efetuar as conversões terá um parâmetro formal para registrar se é A.M. ou P.M. Inclua um loop que permita que o usuário repita esse cálculo para novos valores de entrada todas as vezes que desejar.
  
  /*int horas, minutos, cont = 1, verificador;
  
  do{
    printf("Informe a hora (em números inteiros e separados por espaço) a ser convertida: ");
    scanf("%d %d", &horas, &minutos);
    if (horas > 24 || horas < 0 || minutos > 59 || minutos < 0){
      printf("Horário inválido");
    } else {
      printf("O horário %d:%d foi convertido para %d:%d ", horas, minutos, converter_horas(horas), minutos);
      verificar_ampm(horas);
    }
    sleep(1);
    printf("\nDeseja continuar? [1 - Sim, 0 - Não]: ");
    scanf("%d", &cont);
  } while (cont != 0);*/

  // Desafio 2: Pesquise qual a função para gerar números aleatórios e monte um "jogo" onde você tenta advinhar o número gerado pelo computador.
  
  /*int numero_jogador, numero_maquina;
  
  printf("---------Jogue contra a máquina---------\n");
  printf("Acabei de pensar em um número de 0 a 10\n");
  printf("Tente adivinhar qual foi: ");
  scanf("%d", &numero_jogador);
  printf("----------------------------------------");
  printf("\nPROCESSANDO...");
  sleep(1);
  
  srand(time(NULL));
  
  numero_maquina = rand() % 10;
  if (numero_jogador == numero_maquina){
    printf("\nParabéns, você conseguiu me vencer!");
  } else {
    printf("\nHaha, eu venci, pensei no número %d e não no %d", numero_maquina, numero_jogador);
  }*/

  // Desafio 3: Construa uma função que receba uma data no formato DD/MM/AAAA e devolva uma string no formato D de mesPorExtenso de AAAA. Opcionalmente, valide a data e retorne "NULL" caso a data seja inválida. Você pode utilizar funções da biblioteca <time.h>.
  
  /*int dia, mes, ano;
  
  printf("Informe uma data (dia, mês e ano separados por espaço): ");
  scanf("%d %d %d", &dia, &mes, &ano);
  if (dia > 0 && mes > 0 && ano > 0){
    converter_mes(dia, mes, ano);
  } else {
    printf("Data inválida!");
  }*/
  
//  return 0;
//}

int retornar_maior(int num1, int num2, int num3, int num4){
  // Função para o Exercício 2
  if (num1 > num2 && num1 > num3 && num1 > num4){
    return num1;
  } else if (num2 > num1 && num2 > num3 && num1 > num4){
    return num2;
  } else if (num3 > num1 && num3 > num2 && num3 > num4){
    return num3;
  } else if (num4 > num1 && num4 > num2 && num4 > num3){
    return num4;
  }
}

void peso_ideal(float altura, char sexo){
  // Procedimento para o Exercício 3
  if (sexo == 'M' || sexo == 'm'){
    float pesoIdealMasculino = (72.7 * altura) - 58;
    printf("Olá, seu peso ideal seria de %.3f", pesoIdealMasculino);
  } else if (sexo == 'F' || sexo == 'f'){
    float pesoIdealFeminino = (62.1 * altura) - 44.7;
    printf("Olá, seu peso ideal seria de %.3f", pesoIdealFeminino);
  }
}

int converter_horas(int horas){
  // Função para o Desafio 1
  if (horas > 12 && horas < 24){
    int hora_convertida = horas - 12;
    return hora_convertida;
  } else if (horas == 24){
    return 0;
  } else {
    return horas;
  }
}

void verificar_ampm(int horas){
  // Procedimento para o Desafio 1
  if (horas >= 12 && horas < 24){
    printf("P.M");
  } else {
    printf("A.M");
  } 
}

void converter_mes(int dia, int mes, int ano){
  // Procedimento para o Desafio 3
  if (mes == 1){
    printf("\n%d de Janeiro de %d", dia, ano);
  } else if (mes == 2){
    printf("\n%d de Fevereiro de %d", dia, ano);
  } else if (mes == 3){
    printf("\n%d de Março de %d", dia, ano);
  } else if (mes == 4){
    printf("\n%d de Abril de %d", dia, ano);
  } else if (mes == 5){
    printf("\n%d de Maio de %d", dia, ano);
  } else if (mes == 6){
    printf("\n%d de Junho de %d", dia, ano);
  } else if (mes == 7){
    printf("\n%d de Julho de %d", dia, ano);
  } else if (mes == 8){
    printf("\n%d de Agosto de %d", dia, ano);
  } else if (mes == 9){
    printf("\n%d de Setembro de %d", dia, ano);
  } else if (mes == 10){
    printf("\n%d de Outubro de %d", dia, ano);
  } else if (mes == 11){
    printf("\n%d de Novembro de %d", dia, ano);
  } else if (mes == 12){
    printf("\n%d de Dezembro de %d", dia, ano);
  }
}