
//Ficha 1
// Gabriela Silva Lima

//1) 
/*#include <stdio.h>
#include <math.h>
void main()
{
 int media = 0, nota = 2, total = 10, z = 0, k = 7, x = 4, i = 80, j = -1, a = -4;
 x = total/nota;
 x = x + 1;
 nota = x;
 total = nota + x + total;
 media = 3;
 k += 9;
 z = j/5;
 k = i % 5;
 i ++;
 i = i + 2*a;
 printf("Os valores resultantes são: media = %i , nota = %i , total = %i , z = %i , k = %i , x = %i , i = %i j = %i , a = %i", media, nota, total, z, k, x, i, j, a);
}*/
/*Os valores resultantes são: media = 3 , nota = 6 , total = 22 , z = 0 , k = 0 , x = 6 , i = 73 j = -1 , a = -4*/


//2)
/*#include <stdio.h>
#include <math.h>
void main()
{
 int a = 10, b = 3, c = 2, d = 2, e = 25, resp1, resp2, resp3, resp4, resp5, resp6, resp7;
 resp1 = a == d;
 resp2 = (a>b) && (c == d);
 resp3 = (e+2<b+c) && (a == 10);
 resp4 = (d*e>100) || (b>5);
 resp5 = (e == 25) && (a>b+c+d) && (c<b);
 resp6 = !(a<15) && (b>=3);
 resp7 = (d>2) || (c==7) && (e>20);
 printf("Os valores das expressaoes logicas: resp1 = %i , resp2 = %i , resp3 = %i , resp4 = %i , resp5 = %i , resp6 = %i , resp7 = %i");
}*/
/*Os valores das expressaoes logicas: resp1 = -1755923528 , resp2 = 5 , resp3 = 27 , resp4 = 4195968 , resp5 = 930966624 , resp6 = 0 , resp7 = 1 */  

//3)
/*#include <stdio.h>
#include <math.h>
void main()
{
 printf("É preciso fazer todos os algoritmos para aprender");
}*/

//4)
/*#include <stdio.h>
#include <math.h>
void main()
{
  int produto;
  produto = 28*43;
  printf("O produto é = %i",produto);
}*/

//5)
/*#include <stdio.h>
#include <math.h>
void main()
{
  int n1, n2;
  printf("Digite os dois números:");
  scanf("%i %i", &n1, &n2);
  printf("%i e %i", n1, n2);
}*/

//6)
/*#include <stdio.h>
#include <math.h>
void main()
{
  int n1, a1, s1;
  printf("Digite o número:");
  scanf("%i", &n1);
  a1 = n1 - 1;
  s1 = n1 + 1;
  printf("O antecessor é %i e seu sucessor é %i", a1, s1);
}*/

//7)
/*#include <stdio.h>
#include <math.h>
void main()
{
  int idade, telefone;
  printf("Digite a sua idade:");
  scanf("%i", &idade);
  printf("Digite o seu telefone:");
  scanf("%i", &telefone);
  printf("Sua idade é %i e seu telefone é %i", idade, telefone);
}*/

//8)
/*#include <stdio.h>
#include <math.h>
void main()
{
  int num1, num2, soma;
  printf("Digite dois números:");
  scanf("%i %i", &num1, &num2);
  printf("Soma \n");
  soma = num1 + num2;
  printf("O resultado da soma é = %i", soma);
}*/

//9)
/*#include <stdio.h>
#include <math.h>
void main()
{
  int num1, num2, num3, num4, soma;
  printf("Digite o primeiro número:");
  scanf("%i", &num1);
  printf("Digite o segundo número:");
  scanf("%i", &num2);
  printf("Digite o terceiro número:");
  scanf("%i", &num3);
  printf("Digite o quarto número:");
  scanf("%i", &num4);
  soma = num1 + num2 + num3 + num4;
  printf("A soma é = %i", soma);
}*/

//10)
/*#include <stdio.h>
#include <math.h>
void main()
{
  float nota1, nota2, nota3, media;
  printf("Digite a primeira nota:");
  scanf("%f", &nota1);
  printf("Digite a segunda nota:");
  scanf("%f", &nota2);
  printf("Digite a terceira nota:");
  scanf("%f", &nota3);
  media = (nota1 + nota2 + nota3)/3;
  printf("A média é = %.2f", media);
}*/

//11)
/*#include <stdio.h>
#include <math.h>
void main()
{
  float nota1, nota2, nota3, peso1, peso2, peso3, media;
  printf("Digite a primeira nota e em seguida seu peso:");
  scanf("%f %f", &nota1, &peso1);
  printf("Digite a segunda nota e em seguida seu peso:");
  scanf("%f %f", &nota2, &peso2);
  printf("Digite a terceira nota e em seguida seu peso:");
  scanf("%f %f", &nota3, &peso3);
  media = (nota1*peso1 + nota2*peso2 + nota3*peso3)/(peso1 + peso2 + peso3);
  printf("A média é = %.2f", media);
}*/

//12)
/*#include <stdio.h>
#include <math.h>
void main()
{
  float salario, salarion;
  printf("Digite o valor do seu salario:");
  scanf("%f", &salario);
  salarion = salario*1.25;
  printf("O valor do novo salario é = %.2f", salarion);
}*/

//13)
/*#include <stdio.h>
#include <math.h>
void main()
{
  float salario, salarion, percentual, aumento;
  printf("Digite o valor do seu salario:");
  scanf("%f", &salario);
  printf("Digite o percentual de aumento:");
  scanf("%f", &percentual);
  aumento = (salario*percentual)/100;
  salarion = salario + aumento;
  printf("O valor do novo salario é = %.2f e o aumento é = %.2f", salarion, aumento);
}*/

//14)
/*#include <stdio.h>
#include <math.h>
void main()
{
  float salariobase, gratifi, imposto, salarioreceber;
  printf("Digite o valor do salario:");
  scanf("%f", &salariobase);
  imposto = salariobase*0.07;
  gratifi = salariobase*0.05;
  salarioreceber = salariobase + gratifi - imposto;
  printf("O valor do salario a receber é = %.2f", salarioreceber);
}*/

//15)
/*#include <stdio.h>
#include <math.h>
void main()
{
  float salariobase, imposto, salarioreceber;
  printf("Digite o valor do salario:");
  scanf("%f", &salariobase);
  imposto = salariobase*0.10;
  salarioreceber = salariobase + 50.00 - imposto;
  printf("O valor do salario a receber é = %.2f", salarioreceber);
}*/

//16)
/*#include <stdio.h>
#include <math.h>
void main()
{
  float deposito, tjuros, rend, total;
  printf("Digite o valor do deposito:");
  scanf("%f", &deposito);
  printf("Digite o valor da taxa de juros:");
  scanf("%f", &tjuros);
  rend = (deposito*tjuros)/100;
  total = rend + deposito;
  printf("Rendimento = %.2f e Valor total = %.2f", rend, total);
}*/

//17)
/*#include <stdio.h>
#include <math.h>
void main()
{
  int base, altura, area;
  printf("Digite o valor da base e em seguida da base:");
  scanf("%i %i", &base, &altura);
  area =(base*altura)/2;
printf("O valor da area do triangulo é = %i", area);
}*/

//18)
/*#include <stdio.h>
#include <math.h>
void main()
{
  float raio, area;
  printf("Digite o valor do raio:");
  scanf("%f", &raio);
  area = 3.1415*(raio*raio);
  printf("O valor da area é = %.2f", area);
}*/

//19)
/*#include <stdio.h>
#include <math.h>
void main()
{
  int anonas, atualano, atualidade, futuraidade;
  printf("Digite o ano de nascimento:");
  scanf("%i", &anonas);
  printf("Digite o ano atual:");
  scanf("%i", &atualano);
  atualidade = atualano - anonas;
  futuraidade = 2020 - anonas;
  printf("A idade atualmente é = %i e sua idade em 2020 é = %i", atualidade, futuraidade);
}*/

//20)
/*#include <stdio.h>
#include <math.h>
void main()
{
  float precofabrica, percentuallucro, percentualimposto, lucrodis, impostos, final;
  printf("Digite o preço de fabrica:");
  scanf("%f", &precofabrica);
  printf("Digite o percentual de lucro:");
  scanf("%f", &percentuallucro);
  printf("Digite o valor do percentual de imposto:");
  scanf("%f", &percentualimposto);
  lucrodis = (precofabrica*percentuallucro)/100;
  impostos = (precofabrica*percentualimposto)/100;
  final = precofabrica + impostos + lucrodis;
  printf("Lucro da distribuidora = %.2f . Impostos = %.2f . Preço final = %.2f", lucrodis, impostos, final);
}*/

//21)
/*#include <stdio.h>
#include <math.h>
void main()
{
  float horastraba, salariomin, valorhora, salariobruto, imposto, salarioreceber;
  printf("Digite a quantidade de horas trabalhadas:");
  scanf("%f", &horastraba);
  printf("Digite o valor do salario minimo:");
  scanf("%f", &salariomin);
  valorhora = salariomin/2;
  salariobruto = horastraba*valorhora;
  imposto = salariobruto*0.03;
  salarioreceber = salariobruto - imposto;
  printf("Salario a receber = %.2f", salarioreceber);
}*/

//22)
/*#include <stdio.h>
#include <math.h>
void main()
{
  int hdegrau, h, degraus;
  printf("Digite o valor da altura do degrau:");
  scanf("%i", &hdegrau);
  printf("Digite o valor da altura a ser alcançada:");
  scanf("%i", &h);
  degraus = h/hdegrau;
  printf("Quantidade de degraus = %i", degraus);
}*/
