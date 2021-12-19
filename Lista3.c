//Ficha 3
// Gabriela Silva Lima

//1)
/*#include <stdio.h>
int main(void)
{
  int n, linha, coluna;
  printf("Digite a ordem da matriz:");
  scanf("%i", &n);
  for(linha = 0; linha<= n; linha++)
  {
    for(coluna = 0; coluna<=n; coluna++)
    {
      printf("%i - %i     ", linha, coluna);
    }
    printf("\n");
  }
}*/

//2)
/*#include <stdio.h>

int main(void)
{
  int n, linha, coluna;
  printf("Digite a ordem da matriz:");
  scanf("%i", &n);
  for(linha = 0; linha<=n; ++linha)
  {
    for(coluna = 0; coluna<=n; ++coluna)
    {
      if(linha==coluna)
      {
        printf("%i - %i\t", linha, coluna);
      }
      printf("\t");
    }
   printf("\n");
  }
}*/

//3)
/*#include <stdio.h>

int main(void)
{
  int n, linha, coluna;
  do
  {
    printf("Digite a ordem da matriz:");
    scanf("%i", &n);
  } while(n<=1);
   for(linha = 0; linha<= n; linha++)
  {
    for(coluna = 0; coluna<=n; coluna++)
    {
      if(coluna<linha)
      {
        printf("%i - %i     ", linha, coluna);
      }
    }
    printf("\n");
  }
}*/


//4)
/*#include <stdio.h>

int main(void)
{
  int nump, idade;
  char sexo;
  while(nump<=20)
  {
   nump = nump + 1;
   printf("Digite o sexo:\n");
    scanf("%c", &sexo);
    printf("Digite a idade:\n");
    scanf("%i", &idade);
    if(idade > 21 && sexo =='m')
    {
      printf("Cumpre os requisitos: maior de 21 e homem \n");
      getchar();
    }
    else
    {
      printf("Não cumpre os requisitos necessarios \n");
      getchar();
    }
  }
}*/

//5)
/*#include <stdio.h>

int main(void)
{
  int limite, incremento, num, sol;
  printf("Digite o limite superior e o incremento:");
  scanf("%i %i", &limite, &incremento);
  for(num = 0; num<=limite; num = num + incremento)
  {
    printf("%i, ", num);
  }
}*/

//6)
/*#include <stdio.h>

int main(void)
{
  int limitesup, limiteinf, incremento, num;
  printf("Digite o limite superior e o limte inferior:");
  scanf("%i %i", &limitesup, &limiteinf);
  printf("Digite o incremento:");
  scanf("%i", &incremento);
  for(num = incremento + limiteinf; num<limitesup; num = num + incremento)
  {
    printf("%i, ", num);
  }
}*/

//7)
/*#include <stdio.h>

int main(void)
{
  int num, cont = 0, numb, result;
  printf("Digite um numero:\n");
  scanf("%i", &num);
  while(cont<num)
  {
    cont = cont + 1;
    printf("Digite um numero:\n");
    scanf("%i", &numb);
    result = numb*3;
    printf("\n %i \t \n\n", result);
  }
}*/

//8)
/*#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
  int rept, cont;
  float maior = -999999999, menor = 999999999, num;
  printf("Digite quantos numeros serao digitados:");
  scanf("%i", &rept);
  for(cont = 0; cont<rept; cont++)
  {
    printf("Digite um numero:\n");
    scanf("%f", &num);
    if(num>maior)
    {
      maior = num;
    }
    if(num<menor)
    {
      menor = num;
    }
  }
  printf("O maior numero = %f\n", maior);
  printf("O menor numero = %f\n", menor);
}*/

//9)
/*#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
  int cont, total, serie1, serie2, serie3;
  printf("Digite o numero de termos desejados:");
  scanf("%i", &total);
  printf("Digite o primeiro termo:");
  scanf("%i", &serie1);
  printf("Digite o segundo termo:");
  scanf("%i", &serie2);
  for(cont = 3; cont<=total; cont++);
  {
    if(cont%2 == 0)
    {
      serie3 = serie2 + serie1;
    }
    else if(cont%2!=0)
    {
      serie3 = serie2 - serie1;
    }
    printf("%i", serie3);
  }
}*/


//10)
/*#include <stdio.h>

int main(void)
{
  int cont = 0, idade, opniao, regular = 0, excelente = 0, somaidade = 0;
  float mediaidade, percentbom, bom = 0;
  while(cont<20)
  {
    printf("\tSua opniao sobre o filme:\n1-Regular\n2-Bom\n3-Excelente\nE sua idade:\n");
    scanf("%i %i", &opniao, &idade);
    if(opniao == 1)
    {
      regular = regular + 1;
    }
    else if(opniao == 2)
    {
      bom = bom + 1;
    }
    else if(opniao == 3)
    {
      excelente = excelente + 1;
      somaidade = somaidade + idade;
    }
    else
    {
      printf("Opcao nao disponivel\n");
      cont = cont - 1;
    }
    cont = cont + 1;
  }
  if(excelente>0)
  {
    mediaidade = somaidade/excelente;
  }
  else
  {
    mediaidade = 0;
  }
  percentbom = (bom/20)*100;
  printf("A média das idades das pessoas que responderam excelente = %.2f\n", mediaidade);
  printf("A quantidade de pessoas que responderam regular = %i\n", regular);
  printf("A percentagem de pessoas que responderam bom entre todos os expectadores analisados = %.2f%", percentbom);
}*/

//11)
/*#include <stdio.h>

int main(void)
{
  int num, result;
  do
  {
    printf("Digite um número (ou 0 para encerrar o programa):\n");
    scanf("%i", &num);
    result = num*3;
    if (num!=0)
    {
      printf("%i\n", result);
    }
  } while(num!=0);
}*/


//12)
/*#include <stdio.h>

int main(void)
{
  int num, cont = 0;
  do
  {
    printf("Digite um numero (ou numero negativo para encerrar o programa):\n");
    scanf("%i", &num);
    if(num>=0)
    {
      cont = cont + 1;
    }
  }while(num>=0);
  printf("%i\n", cont);
}*/

//13)
/*#include <stdio.h>

int main(void)
{
  int num, media, soma = 0, cont = 0;
  do
  {
    printf("Digite um numero (ou numero negativo para encerrar programa):");
    scanf("%i", &num);
    if(num>=0)
    {
      cont = cont + 1;
      soma = soma + num;
    }
  } while(num>=0);
  media = soma/cont;
  printf("%i", media);
}*/


//14)
/*#include <stdio.h>

int main(void)
{
  int opcao;
  do
  {
    printf("\t Boas vindas: \n\t 1- Imprimir 'ola' \n\t 2- Imprimir 'bem vindo!' \n\t 3- Sair do algoritmo\n");
    scanf("%i", &opcao);
    switch(opcao)
    {
      case 1:
      printf("Ola\n");
      break;
      case 2:
      printf("Bem vindo!\n");
      break;
    }
  }while(opcao!=3);
}*/

//15)
/*#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
  int linhas = 7, i, j;
  printf("\n");
  for(i = 0; i<linhas; i++)
  {
    for(j = 0; j<=i; j++)
    {
      printf("*");
    }
    printf("\n");
  }
  printf("\n");
  for(i = 0; i<linhas; i++)
  {
    for(j = 0; j<linhas-i; j++)
    {
      printf("*");
    }
    printf("\n");
  }
  printf("\n");
  for(i = 0; i<=linhas; i++)
  {
    for(j = 0; j<=i-1; j++)
    {
      printf(" ");
    }
    for(j = i; j<linhas; j++)
    {
      printf("*");
    }
    printf("\n");
  }
  printf("\n");
  for(i = 0; i<linhas; i++)
  {
    for(j = 1; j<linhas-i; j++)
    {
      printf(" ");
    }
    for(j = linhas; j>=linhas-i; j--)
    {
      printf("*");
    }
    printf("\n");
  }
}*/



//16)
/*#include <stdio.h>

int main(void)
{
  int cont = 0, hora, codigo, produzido, nfunc;
  float salhora, sal, salfixo, vendas;
  printf("Digite o numero de funcionarios:\n");
  scanf("%i", &nfunc);
  do{
    printf("\tQual o seu codigo?\n1-Gerente\n2-Horista\n3-Trabalhador de comissao\n4-Tarefeiro\n");
    scanf("%i", &codigo);
    cont = cont + 1;
    switch(codigo)
    {
      case 1:
      printf("Voce entrou como gerente\nDigite o seu salario semanal:");
      scanf("%f", &sal);
      printf("\tSalario total = %f\n", sal);
      break;
      case 2:
      printf("Voce entrou como horista\nDigite o numero de horas trabalhadas e em seguida o salario por hora:\n");
      scanf("%i %f", &hora, &salhora);
      if(hora>40)
      {
        sal = 40*salhora + ((hora-40)*(salhora*1.5));
        printf("\tSalario total = %f\n", sal);
      }
      else
      {
        sal = 40*salhora;
        printf("\tSalario total = %f\n", sal);
      }
      break;
      case 3:
      printf("Voce entrou como trabalhador de comissao\nDigite suas vendas semanais:\n");
      scanf("%f", &vendas);
      sal = 610 + (0.05*vendas);
      printf("\tSalario total = %f\n", sal);
      break;
      case 4:
      printf("Voce entrou como tarefeiro\nDigite o salario fixo pro cada item e os itens produzidos:\n");
      scanf("%f %i", &salfixo, &produzido);
      sal = salfixo*produzido;
      printf("\tSalario total = %f\n", sal);
      break;
    }
  }while(cont<nfunc);
}*/
