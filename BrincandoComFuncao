#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void print()
{
  int l;
  for(l=0; l<20; l++)
  {
    printf("*");
  }
  printf("\n");
}

int num()
{
  srand(time(NULL));
  int x;
  x = rand()%50;
  printf("%i", x);
}

void tabuada(int valor)
{
  int l;
  for(l=0; l<11; l++)
  {
    printf("%i * %i = %i", valor, l, (valor*l));
    printf("\n");
  }
  printf("\n");
}

float distancia(float xa, float xb, float ya, float yb)
{
  float dis;
  dis = sqrt(pow(xa-xb, 2)+ pow(ya-yb, 2));
  return dis;
}

int lerNumeroPositivo()
{
  int a, fim = 0;
  while(fim!=1)
  {
    printf("Digite um numero:");
    scanf("%i", &a);
    if(a>0)
    {
      fim = 1;
    }
  }
  return a;
}

void estatistica()
{
  int cont;
  float a[10], media = 0, valor, maior, menor;
  for(cont=0; cont<10; cont++)
  {
    printf("Digite um numero:");
    scanf("%f", &a[cont]);
    media = a[cont] + media;
  } 
  media = media/10;
  printf("Media = %f\n", media);
  valor = a[0];
  for(cont=0; cont<10; cont++)
  {
    if(a[0]>a[cont])
    {
      a[0] = a[cont];
    }
  }
  menor = a[0];
  a[0] = valor;
  printf("Maior valor = %f\n", menor);
  for(cont=0; cont<10; cont++)
  {
    if(a[0]<a[cont])
    {
      a[0] = a[cont];
    }
  }
  maior = a[0];
  a[0] = valor;
  printf("Menor valor = %f\n", maior);
}

int main(void) 
{
  /*int a, c;
  print();
  num();
  printf("\n");
  print();
  //scanf("%i", &a);
  for(c=0; c<11; c++)
  {
    tabuada(c);
  }
  int a;
  a = lerNumeroPositivo();
  printf("%i", a);
  estatistica();
  int pop, cont;
  pop = lerNumeroPositivo();
  for(cont=0; cont<pop; cont++)
  {
    estatistica();
  }*/
  


}
