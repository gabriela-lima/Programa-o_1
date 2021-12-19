//Ficha 4
// Gabriela Silva Lima

//1)
/*#include <stdio.h>

int main(void)
{
  int quantidade, cont;
  printf("Digite a quantidade de elementos dos vetores:\n");
  scanf("%i", &quantidade);
  int v1[quantidade], v2[quantidade], vr[quantidade];
  for(cont=0; cont<quantidade; cont++)
  {
    printf("Digite o proximo elemento do vetor 1:\n");
    scanf("%i", &v1[cont]);
    printf("Digite o proximo elemento do vetor 2:\n");
    scanf("%i", &v2[cont]);
    vr[cont]= v1[cont]*v2[cont];
    printf("%i\n", vr[cont]);
  }
}*/

//2)
/*#include <stdio.h>
int main(void)
{
  int tamanho, cont, menor;
  printf("Digite o tamanho do vetor:");
  scanf("%i", &tamanho);
  int v1[tamanho];
  for(cont = 0; cont<tamanho; cont++)
  {
    printf("Digite o proximo elemento:");
    scanf("%i", &v1[cont]);
  }
  menor = v1[0];
  for(cont=1; cont<tamanho; cont++)
  {
    if(v1[cont]<=menor)
    {
      menor = v1[cont];
    }
  }
  printf("%i", menor);
}*/

//3)
/*#include <stdio.h>
int main(void)
{
  int tamanho, cont, cont2, cont3 = 0;
  printf("Digite o tamanho dos vetores:");
  scanf("%i", &tamanho);
  int vi[tamanho];
  char vc[tamanho];
  for(cont = 0; cont<tamanho; cont++)
  {
    printf("Digite o proximo elemento do vetor de inteiros (positivo):");
    scanf("%i", &vi[cont]);
    getchar();
    printf("Digite o proximo elemento do vetor de char:");
    scanf("%c", &vc[cont]);
    getchar();
  }
  for(cont2=0; cont2<tamanho; cont2++)
  {
    do
    {
      printf("%c ", vc[cont2]);
      cont3 = cont3+1;
    }while(vi[cont2]!=cont3);
    cont3 = 0;
    printf("\n");
    }
}*/

//4) 
/*#include <stdio.h>
int main(void)
{
  int tamanho, cont, resp;
  printf("Digite o tamanho do vetor:");
  scanf("%i", &tamanho);
  int vetor[tamanho];
  for(cont = 0; cont<tamanho; cont++)
  {
    printf("Digite o proximo valor do vetor:\n");
    scanf("%i", &vetor[cont]);
  }
  for(cont=0; cont<tamanho; cont++)
  {
    if(vetor[cont+1]<tamanho)
    {
      if(vetor[cont]>vetor[cont+1]||vetor[cont]==vetor[cont+1])
      {
        resp=1;
      }
      else if(vetor[cont]<vetor[cont+1])
      {
        resp = 0;
        break;
      }
    }
  }
  if(resp ==1)
  {
    printf("1");
  }
  else if (resp==0)
  {
    printf("0");
  }
}*/

//7)
/*#include <stdio.h>

int main(void)
{
  int m[5][5], l, c, mp[5][3], l2, c2;
  for(l=0; l<5; l++)
  {
    for(c=0; c<5; c++)
    {
      printf("Digte o proximo elemento da matriz");
      scanf("%i", &m[l][c]);
      printf("%i ", m[l][c]);
      if(l+c!=0 && (l+c)%2==0)
      {
        for(l2=0; l2<5; l++)
        {
          for(c2=0; c2<3; c2++)
          {
            mp[l2][c2] = m[l][c];
          }
        }
      }
    }
    printf("\n");
  }
  for(l2=0; l2<5; l++)
  {
   for(c2=0; c2<3; c2++)
   {
     printf("%i", m[l2][c2]);
   }
   printf("\n");
  }
}*/

//8)
/*#include <stdio.h>

int main(void)
{
  int a[4][4], b[4][4], s[4][4], c, l;
  for(l=0; l<4; l++)
  {
    for(c=0; c<4; c++)
    {
      printf("Digite o proximo elemento da matriz a:\n");
      scanf("%i", &a[l][c]);
      printf("Digite o proximo elemento da matriz b:\n");
      scanf("%i", &b[l][c]);
      s[l][c]= a[l][c] + b[l][c];
    }
  }
  for(l=0; l<4; l++)
    {
      for(c=0; c<4; c++)
      {
        printf("%i", s[l][c]);
      }
      printf("\n");
    }
}*/
//9)
/*#include <stdio.h>

int main(void)
{
  int m[2][3], mt[3][2], c, l;
  for(l=0; l<2; l++)
  {
    for(c=0; c<3; c++)
    {
      printf("Digite o proximo elemento da matriz:");
      scanf("%i", &m[l][c]);
      mt[c][l]= m[l][c];
    }
  }
  for(c=0; c<3; c++)
  {
    for(l=0; l<2; l++)
    {
      printf("%i ", mt[c][l]);
    }
    printf("\n");
  }
}*/

//11)
/*#include <stdio.h>

int main(void)
{
  int a[10], b[10], c;
  for(c=0; c<10; c++)
  {
    printf("Digite o proximo elemento de a:");
    scanf("%i", &a[c]);
    if(c%2==0)
    {
      b[c] = a[c]/2;
    }
    else
    {
      b[c] = a[c]*3;
    }
  }
  for(c=0;c<10;c++)
  {
    printf("%i ", a[c]);
  }
  printf("\n");
  for(c=0; c<10; c++)
  {
    printf("%i ", b[c]);
  }
}*/

//12)
/*#include <stdio.h>

int main(void)
{
  int a[5], b[5], c[5], co;
  for(co=0; co<5; co++)
  {
    printf("Digite o proximo elemento do vetor a:");
    scanf("%i", &a[co]);
    printf("Digite o proximo elemento do vetor b:");
    scanf("%i", &b[co]);
    c[co]= a[co]+b[co];
  }
  for(co=0; co<5; co++)
  {
    printf("%i ", c[co]);
  }
}*/


//14)
/*#include <stdio.h>

int main(void)
{
  int n1[20], n2[20], m[20], c;
  for(c=0; c<20; c++)
  {
    printf("Digite a primeira nota do aluno %i:\n", c);
    scanf("%i", &n1[c]);
    printf("Digite a segunda nota do aluno %i:\n", c);
    scanf("%i", &n2[c]);
    m[c]= (n1[c]*2 + n2[c]*3)/5;
    printf("Media do aluno %i = %i\n", c, m[c]);
  }
}*/

//15)
/*#include <stdio.h>

int main(void)
{
  int n1[20], n2[20], m[20], mg = 0, c, am = 0;
  for(c=0; c<20; c++)
  {
    printf("Digite a primeira nota do aluno %i:\n", c);
    scanf("%i", &n1[c]);
    printf("Digite a segunda nota do aluno %i:\n", c);
    scanf("%i", &n2[c]);
    m[c]= (n1[c]*2 + n2[c]*3)/5;
    printf("Media do aluno %i = %i\n", c, m[c]);
    mg = mg + m[c];
  }
  mg = mg/20;
  for(c=0; c<20; c++)
  {
    if(m[c]<mg)
    {
      am = am +1;
    }
  }
  printf("Abaixo da media: %i alunos", am);
}*/

//16)
/*#include <stdio.h>

int main(void)
{
  int v[12], la = 0, menor, maior, c, valor;
  for(c=0; c<12; c++)
  {
    printf("Digite o lucro do proximo mes:\n");
    scanf("%i", &v[c]);
    la = v[c] + la;
  }
  printf("O lucro anual foi de %i\n", la);
  valor = v[0];
  for(c=0; c<12; c++)
  {
    if(v[0]<v[c])
    {
      v[0] = v[c];
    }
  }
  maior = v[0];
  v[0] = valor;
  for(c=0; c<12; c++)
  {
    if(v[c]== maior)
    {
      printf("O mes %i foi o de maior lucro\n", (c+1));
    }
  }
  for(c=0; c<12; c++)
  {
    if(v[0]>v[c])
    {
      v[0] = v[c];
    }
  }
  menor = v[0];
  v[0] = valor;
  for(c=0; c<12; c++)
  {
    if(v[c]== menor)
    {
      printf("O mes %i foi o de menor lucro\n", (c+1));
    }
  }
}*/

//18)
/*#include <stdio.h>

int main(void)
{
  int a[3][4], b[4][3], l, c;
  for(l=0; l<3; l++)
  {
    for(c=0; c<4; c++)
    {
      printf("Digite o proximo elemento da matriz a:\n");
      scanf("%i", &a[l][c]);
      b[c][l] = a[l][c];
    }
  }
  for(c=0; c<4; c++)
  {
    for(l=0; l<3; l++)
    {
      printf("%i ", b[c][l]);
    }
    printf("\n");
  }
}*/
