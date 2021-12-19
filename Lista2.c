//Ficha 2
// Gabriela Silva Lima

/*1)
#include <stdio.h>
#include <math.h>
void main()
{
 int a,b,r;
 printf("Digite dois números:");
 scanf("%i %i", &a, &b);
 r = a%b;
 if(r==0)
{
  printf("A é divisível por B");
}
else{
  printf("A não é divisível por B");
}
}*/

//2)
/*#include <stdio.h>
#include <math.h>
void main()
{
 float num;
 printf("Digite um número:");
 scanf("%f", &num);
 if(num>20)
 {
   printf("O número %f é maior que 20", num);
 }
 else{
   printf("O número não atende as caracteristicas");
 }
}*/

3)
/*#include <stdio.h>
#include <math.h>
void main(){
  int a, b, result;
  printf("Digite dois números:");
  scanf("%i %i", &a, &b);
  result = a + b;
  if(result > 10)
  {
    printf("Soma = %i", result);
  }
  else
  {
    printf("A soma não cumpre o requisito");
  }
}*/

//4)
/*#include <stdio.h>
#include <math.h>
void main(){
  int a, b, result, cond;
  printf("Digite dois números:");
  scanf("%i %i", &a, &b);
  result = a + b;
  if(result > 20)
  {
    cond = result + 8;
    printf("Soma = %i", cond);
  }
  else
  {
    cond = result - 5;
    printf("Soma = %i", cond);
  }
}*/

//5)
/*#include <stdio.h>
#include <math.h>
void main(){
  float salbruto, prest, percent;
  printf("Informe o seu salario bruto e em seguida o valor da prestação:");
  scanf("%f %f", &salbruto, &prest);
  percent = (prest/salbruto)*100;
  printf("%f\n", percent);
  if(percent > 0.3)
  {
    printf("O emprestimo não pode ser concedido");
  }
  else
  {
    printf("O emprestimo pode ser concedido");
  }
}*/

//6)
/*#include <stdio.h>
#include <math.h>
void main(){
  float num;
  printf("Digite um número:");
  scanf("%f", &num);
  if(num>20 && num<90)
  {
    printf("O número está compreendido entre 20 e 90");
  }
  else
  {
    printf("O número não está compreendido entre 20 e 90");
  }
}*/

//7)
/*#include <stdio.h>
#include <math.h>
void main(){
  int idade;
  char sexo;
  printf("Digite a idade e em seguida o sexo:");
  scanf("%i %c", &idade, &sexo);
  if(idade<25 && sexo=='f')
  {
    printf("ACEITA");
  }
  else
  {
    printf("NÃO ACEITA");
  }
}*/

//8)
/*#include <stdio.h>
#include <math.h>
void main(){
  int num1, num2;
  printf("Digite dois números:");
  scanf("%i %i", &num1, &num2);
  if(num1>num2)
  {
    printf("Ordem crescente: %i e %i", num2, num1);
  }
  else
  {
    printf("Ordem crescente: %i e %i", num1, num2);
  }
}*/

//9)
/*#include <stdio.h>
#include <math.h>
void main(){
  int num1, num2, num3;
  printf("Digite três números:");
  scanf("%i %i %i", &num1, &num2, &num3);
  if(num1>num2 && num1>num3)
  {
    printf("Maior = %i", num1);
  }
  else if (num2>num1 && num2>num3)
  {
    printf("Maior =%i", num2);
  }
  else
  {
    printf("Maior =%i", num3);
  }
}*/


//10)
/*#include <stdio.h>
#include <math.h>
void main(){
  int dias;
  float pag, total;
  printf("Digite o número de dias");
  scanf("%i", &dias);
  pag = 50*dias;
  if(dias<15)
  {
    total = pag + 15.30*dias;
  }
  else if (dias == 15)
  {
    total = pag + 10*dias;
  }
  else
  {
    total = pag + 8.50*dias;
  }
  printf("Total a pagar = %.2f", total);
}*/

//11)
/*#include <stdio.h>
#include <math.h>
void main(){
  int idade;
  printf("Digite a idade:");
  scanf("%i", &idade);
  if(idade<=10)
  {
    printf("O valor a ser pago é = 30.00");
  }
  else if(idade<=29)
  {
    printf("O valor a ser pago é = 60.00");
  }
  else if(idade<=45)
  {
    printf("O valor a ser pago é = 120.00");
  }
  else if(idade<=59)
  {
    printf("O valor a ser pago é = 150.00");
  }
  else if(idade<=65)
  {
    printf("O valor a ser pago é = 250.00");
  }
  else
  {
  printf("O valor a ser pago é = 400.00");
  }
}*/

//12)
/*#include <stdio.h>
#include <math.h>
void main(){
  int mes;
  printf("Digite o número:");
  scanf("%i", &mes);
  switch(mes)
  {
    case 1 :
    printf("Janeiro");
    break;
    case 2 :
    printf("Fevereiro");
    break;
    case 3 :
    printf("Março");
    break;
    case 4 :
    printf("Abril");
    break;
    case 5 :
    printf("Maio");
    break;
    case 6 :
    printf("Junho");
    break;
    case 7 :
    printf("Julho");
    break;
    case 8 :
    printf("Agosto");
    break;
    case 9 :
    printf("Setembro");
    break;
    case 10 :
    printf("Outubro");
    break;
    case 11 :
    printf("Novembro");
    break;
    case 12 :
    printf("Dezembro");
    break;
    default:
    printf("Expressão inválida");
  }
}*/
