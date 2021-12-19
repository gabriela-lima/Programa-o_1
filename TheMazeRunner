#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Gabriela Silva Lima
//incompleto
int main(void) 
{
  srand (time(NULL));
  char mapa[7][10];
  int soma1, soma2, vida1 = 10, vida2 = 10, casas, l, c, fim = 0, cont = 0, dados1, dados2, player, fimd1 = 0, fimd2 = 0;
  printf("\tMaze Runner\n");
  printf("Indices do mapa:\n+ = Inicio\n- = Espaco neutro\n# = Perda de vida\n! = Espaco ganho de vida\n$ = Jogue de novo\n@ = Espaco perda de rodada\n* = Espaco volte ao inicio\n% = Fim\n");
  for(l = 0; l<7; l++)
  {
    for(c=0; c<10; c++)
    {
      mapa[l][c]= ' ';
      printf("%c", mapa[l][c]);
    }
  }
  printf("\n");
  mapa[0][0]= '+';
  mapa[0][1]= '-';
  mapa[0][2]= '#';
  mapa[0][3]= '!';
  mapa[0][4]= '-';
  mapa[0][5]= '$';
  mapa[0][6]= '-';
  mapa[0][7]= '@';
  mapa[0][8]= '-';
  mapa[0][9]= '#';
  mapa[1][9]= '!';
  mapa[2][9]= '*';
  mapa[3][9]= '$';
  mapa[4][9]= '-';
  mapa[5][9]= '-';
  mapa[6][9]= '#';
  mapa[6][8]= '!';
  mapa[6][7]= '-';
  mapa[6][6]= '@';
  mapa[6][5]= '-';
  mapa[6][4]= '#';
  mapa[6][3]= '!';
  mapa[6][2]= '-';
  mapa[6][1]= '$';
  mapa[6][0]= '#';
  mapa[5][0]= '@';
  mapa[4][0]= '!';
  mapa[3][0]= '%';
  for(l = 0; l<7; l++)
  {
    for(c=0; c<10; c++)
    {
      printf("%c", mapa[l][c]);
    }
    printf("\n");
  }
  while(cont!=2)
  {
    printf("\tVez do Jogador 1 jogar os dados!\n\n");
    while(fimd1!=1)
    {
      dados1 = rand()%6;
      dados2 = rand()%6;
      if(dados1>0 && dados2>0)
      {
        soma1 = dados1+dados2;
        printf("Os dados do Jogador 1 foram iguais a %i e %i e sua soma ficou igual a %i\n\n", dados1, dados2, soma1);
        printf("\tVez do Jogador 2 jogar os dados!\n\n");
        fimd1 = 1;
      }
    }
    while(fimd2!=1)
    {
      dados1 = rand()%6;
      dados2 = rand()%6;
      soma2 = dados1 + dados2;
      printf("Os dados do Jogador 2 foram iguais a %i e %i e sua soma ficou igual a %i\n\n", dados1, dados2, soma2);
      fimd2 = 1;
    }
    if(soma1==soma2)
    {
      printf("A soma ficou igual!\nTentem novamente!\n\n");
      cont = 0;
    }
    else if(soma2>soma1)
    {
      printf("O Jodador 2 comecar jogando!\n\n");
      cont = 2;
      player = 2;
    }
    else
    {
      printf("O Jogador 1 comecar jogando!\n\n");
      cont = 2;
      player = 1;
    }
  }
  while(fim!=1)
  {
    while(cont!=1)
    {
      if(player==1)
      {
        printf("\tJogador 1 vai jogar seu dado!\n");
      }
      else
      {
        printf("\tJogador 2 vai jogar seu dado!\n");
      }
      while(fimd1!=2)
      {
        casas = rand()%6;
        if(casas>0)
        {
          printf("O Jogador tirou %i!\n\n", casas);
          fimd1=2;
        }
      }
      if(casas<=9 && l ==0)
      {
        if(player==1)
        {
          mapa[l][casas] = '1';
          cont = 1;
        }
        else
        {
          mapa[l][casas]= '2';
          cont = 1;
        }
        
      }
      else if(casas<=6 && l ==9)
      {
        if(player==1)
        {
          mapa[casas][l]= '1';
          cont = 1;
        }
        else
        {
          mapa[casas][l] = '2';
          cont = 1;
        }
      }
      else if(casas>=0 && l==6)
      { 
        if(player==1)
        {
          mapa[l][casas]= '1';
          cont = 1;
        }
        else
        {
          mapa[l][casas] = '2';
          cont = 1;
        }
        
      }
      else if(casas<=6 && l ==0)
      { 
        if(player==1)
        {
          mapa[casas][l]= '1';
          cont = 1;
        }
        else
        {
          mapa[casas][l] = '2';
          cont = 1;
        }
      }
      cont = 1;
    }
      for(l = 0; l<7; l++)
      {
      for(c=0; c<10; c++)
      {
        printf("%c", mapa[l][c]);
      }
      printf("\n");
      }
      fim =1;
  }
  
}
