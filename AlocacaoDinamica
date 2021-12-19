#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

void ler(int* p, int tam)
{
  int cont;
  for(cont =0; cont<tam; cont++)
  {
    printf("Digite o valor:");
    scanf("%i", &p[cont]);
  }
   printf("\n");
}

void imprimir(int*p, int tam)
{
  int cont;
  for(cont=0; cont<tam; cont++)
  {
    printf("%i ", p[cont]);
  }
  printf("\n");
}

void ler2(int*p, int tam, int tam2)
{
  int cont;
  for(cont=tam; cont<tam2; cont++)
  {
    printf("Digite o valor:");
    scanf("%i", &p[cont]);
  }
}
int main(void) 
{
  int n, cont, n2;
  int* p;

  printf("Digite o numero:\n");
  scanf("%i", &n);

  p = (int*)malloc(n*sizeof(int));
  ler(p,n);
  imprimir(p,n);

  printf("Digite o novo tamanho:\n");
  scanf("%i", &n2);
  
  
  p = realloc(p,n2*sizeof(int));
  ler2(p, n, n2);
  imprimir(p,n2);
  free(p);
}
