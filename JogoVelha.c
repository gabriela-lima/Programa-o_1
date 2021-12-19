#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Gabriela Silva Lima
int main(void) 
{
  char velha[3][3];
  int v1, v2, fim = 0, l, c, p1 = 0, p2 = 0, coord11, coord21, coord12, coord22;
  for(l=0; l<3; l++)
  {
    for(c=0; c<3; c++)
    {
      velha[l][c] = 'V';
      printf("%c ", velha[l][c]);
    }
    printf("\n");
  }
  printf("\n\tJogador 1 vai ser o 'X' e o Jogador 2 vai ser o 'O'.\n");
  while(fim!=1)
  {
    p1 = 0; 
    p2 = 0;
    while(p1 != 1)
    {
      printf("Vez do jogador 1!\nDigite as coordenadas:\n");
      scanf("%i %i", &coord11, &coord21);
      if(coord11<3 && coord11>=0 && coord21<3 && coord21>=0 && velha[coord11][coord21]=='V')
      {
        for(l=0; l<3; l++)
        {
          for(c=0; c<3; c++)
          {
            if(l==coord11 && c==coord21)
            {
              velha[l][c] = 'X';
            }
            printf("%c ", velha[l][c]);
          }
          printf("\n");
        }
        p1 = 1;
      }
      else
      {
        printf("Coordenada invalida!\nTente novamente!\n");
        p1 = 0;
      }
    } 
    while(p2!=1)
    {
      printf("Vez do jogador 2!\nDigite as coordenadas:\n");
      scanf("%i %i", &coord12, &coord22);
      if(coord12<3 && coord12>=0 && coord22<3 && coord22>=0 && velha[coord12][coord22]=='V')
      {
        for(l=0; l<3; l++)
        {
          for(c=0; c<3; c++)
          {
            if(l==coord12 && c==coord22)
            {
              velha[l][c] = 'O';
            }
            printf("%c ", velha[l][c]);
          }
          printf("\n");
        }
        p2 = 1;
      }
      else
      {
        printf("Coordenada invalida!\nTente novamente!\n");
        p2 = 0;
      }
    }  
    if((velha[0][0]=='X' && velha[1][1]=='X' && velha[2][2]=='X') ||(velha[2][0]=='X' && velha[1][1] =='X' && velha[0][2]=='X') || (velha[0][0]=='X' && velha[1][0]=='X' && velha[2][0]=='X') || (velha[0][0]=='X' && velha[0][1]=='X' && velha[0][2]=='X') || (velha[0][1]=='X' && velha[1][1]=='X' && velha[2][1]=='X') || (velha[0][2]=='X' && velha[1][2]=='X' && velha[2][2]=='X') || (velha[1][0]=='X' && velha[1][1]=='X' && velha[1][2]=='X') || (velha[2][0]=='X' && velha[2][1]=='X' && velha[2][2]=='X') )
    {
      printf("Jogador 1 ganhou!\n");
      fim = 1;
    }
    else if((velha[0][0]=='O' && velha[1][1]=='O' && velha[2][2]=='O') ||(velha[2][0]=='O' && velha[1][1]=='O' && velha[0][2]=='O') || (velha[0][0]=='O' && velha[1][0]=='O' && velha[2][0]=='O') || (velha[0][0]=='O' && velha[0][1]=='O' && velha[0][2]=='O') || (velha[0][1]=='O' && velha[1][1]=='O' && velha[2][1]=='O') || (velha[0][2]=='O' && velha[1][2] =='O' && velha[2][2]=='O') || (velha[1][0]=='O' && velha[1][1]=='O' && velha[1][2]=='O') || (velha[2][0]=='O' && velha[2][1]=='O' && velha[2][2]=='O'))
    {
      printf("Jogador 2 ganhou!\n");
      fim = 1;
    }
    else if((velha[0][0]=='X' || velha[0][0]=='O') && (velha[0][1]=='X' || velha[0][1]=='O') && (velha[0][2]=='X' || velha[0][2]=='O') && (velha[1][0]=='X' || velha[1][0]=='O') && (velha[1][1]=='X' || velha[1][1]=='O') && (velha[1][2]=='X' || velha[1][2]=='O') && (velha[2][0]=='X' || velha[2][0]=='O') && (velha[2][1]=='X' || velha[2][1]=='O') && (velha[2][2]=='X' || velha[2][2]=='O'))
    {
      printf("Deu velha!");
      fim = 1;
    }
    else
    {
      fim =0;
    }
    
  }
}
