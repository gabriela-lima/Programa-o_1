#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <math.h>

int main(void) 
{
  srand(time(NULL));
  char sala[3][3], mundo[10][10], mov;
  int l, c, elevenx, eleveny, cont = 0, vida = 100, raiva = 0, portal =0;
  int aux = 0, portall, portac, imp = 0, demodogs = 0;
  printf("\tStranger Things\n");
  // Inicializando a sala e printando
  for(l =0; l<3;l++)
  {
    for(c = 0; c<3; c++)
    {
      sala[l][c]= 'O';
      printf("%c ", sala[l][c]);
    }
    printf("\n");
  }
  //Colocar eleven
    elevenx = rand()%3;
    eleveny = rand()%3;
    sala[elevenx][eleveny]= 'E';
    //colocar portal
    while(portal == 0)
    {
      printf("Você vai usar sua taxa de raiva!\n");
      raiva = rand()%100;
      if(raiva >= 60)
      {
        while(cont == 0)
        {
          l = rand()%3;
          c = rand()%3;
          if(sala[l][c]= 'O')
          {
            sala[l][c]= 'P';
            cont = 1;
            portal = 1;
          }
          else
          {
            cont = 0;
          }
        }
        printf("Você conseguiu abrir um portal!\n");
      }
      else
      {
        vida = vida - 20;
        if(vida ==0)
        {
          printf("Você morreu!\nGame Over\n");
          return 0;
        }
        printf("Você não conseguiu criar um portal e perdeu 20 de vida\n");
        portal = 0;
      }
    //Printar sala
    }
    for(l =0; l<3;l++)
    {
    for(c = 0; c<3; c++)
    {
      printf("%c ", sala[l][c]);
    }
    printf("\n");
    }
    //movimento e entrar no portal
    printf("Começe a se movimentar:\n");
    do
    {
      scanf("%c", &mov);
      getchar();
      switch(mov)
      {
        case 'w':
        {
          if(elevenx -1 >=0)
          {
            sala[elevenx][eleveny] = 'O';
            elevenx = elevenx -1;
            if(sala[elevenx][eleveny]== 'P')
            {
              aux = 1;
            }
            else
            {
              sala[elevenx][eleveny] = 'E';
            }
          }
          else
          {
            printf("Você não pode subir\n");
          }
          break;
        }
        case 's':
        {
          if(elevenx +1 <3)
          {
            sala[elevenx][eleveny] = 'O';
            elevenx = elevenx +1;
            if(sala[elevenx][eleveny]== 'P')
            {
              aux = 1;
            }
            else
            {
              sala[elevenx][eleveny] = 'E';
            }
          }
          else
          {
            printf("Você não pode descer\n");
          }
          break;
        }
        case 'd':
        {
          if(eleveny +1 <=3)
          {
            sala[elevenx][eleveny] = 'O';
            eleveny = eleveny +1;
            if(sala[elevenx][eleveny]== 'P')
            {
              aux = 1;
            }
            else
            {
              sala[elevenx][eleveny] = 'E';
            }
          }
          else
          {
            printf("Você não pode ir para a direita\n");
          }
          break;
        }
        case 'a':
        {
          if(eleveny -1 >=0)
          {
            sala[elevenx][eleveny] = 'O';
            eleveny = eleveny -1;
            if(sala[elevenx][eleveny]== 'P')
            {
              aux = 1;
            }
            else
            {
              sala[elevenx][eleveny] = 'E';
            }
          }
          else
          {
            printf("Você não pode ir para a esquerda\n");
          }
          break;
        }
      }
      //printando a sala
      for(l =0; l<3;l++)
    {
    for(c = 0; c<3; c++)
    {
      printf("%c ", sala[l][c]);
    }
    printf("\n");
    }
    
    }while(aux!=1);
    //Inicializando o mundo e printando
    printf("\n\n");
    for(l =0; l<10;l++)
    {
    for(c = 0; c<10; c++)
    {
      mundo[l][c]= 'O';
      printf("%c ", mundo[l][c]);
    }
    printf("\n");
    }
    printf("\n\n");
    //adicionar portal no mundo
    portac = rand()%10;
    portall = rand()%10;
    // adicionar obstaculos
    while(imp>=20)
    {
      l = rand()%10;
      c = rand()%10;
      if(mundo[l][c]== 'O')
      {
        mundo[l][c]= 'I';
        imp = imp +1;
      }
    }
    //adicionar demodogs
    while(demodogs<=4)
    {
      l = rand()%10;
      c = rand()%10;
      if(mundo[l][c]== 'O')
      {
        mundo[l][c]= 'D';
        demodogs = demodogs +1;
      }
    }
    //printar mundo
    for(l = 0; l < 10; l++)
    {
      for(c = 0; c < 10; c++)
      {
        if(mundo[l][c] == 'D')
        {
          printf("O ");
        }
        else
        {
          printf("%c ", mundo[l][c]);
        }
      }
      printf("\n");
    }
    
} 
  

