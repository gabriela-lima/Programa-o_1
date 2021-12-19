#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
   int placar, l, c, cont = 0, l1, c1, l2, c2, rod = 0, p1 = 0, p2 = 0, turn = 1, pecas = 16;
   int tabuleiro[4][4], resp[4][4];
   srand(time(NULL));
  for(l=0; l<4; l++)
  {
    for(c = 0; c<4; c++)
    {
      resp[l][c]= 0;
      tabuleiro[l][c] = 0;
    }
  }
  while(cont<2)
  {
    l = rand()%4;
    c = rand()%4;
    if(tabuleiro[l][c]== 0)
    {
      tabuleiro[l][c]= 1;
      cont = cont +1;
    }
  }
  cont = 0;
   while(cont<2)
  {
    l = rand()%4;
    c = rand()%4;
    if(tabuleiro[l][c]== 0)
    {
      tabuleiro[l][c]= 2;
      cont = cont +1;
    }
  }
   cont = 0;
   while(cont<2)
  {
    l = rand()%4;
    c = rand()%4;
    if(tabuleiro[l][c]== 0)
    {
      tabuleiro[l][c]= 3;
      cont = cont +1;
    }
  }
   cont = 0;
   while(cont<2)
  {
    l = rand()%4;
    c = rand()%4;
    if(tabuleiro[l][c]== 0)
    {
      tabuleiro[l][c]= 4;
      cont = cont +1;
    }
  }
   cont = 0;
   while(cont<2)
  {
    l = rand()%4;
    c = rand()%4;
    if(tabuleiro[l][c]== 0)
    {
      tabuleiro[l][c]= 5;
      cont = cont +1;
    }
  }
   cont = 0;
   while(cont<2)
  {
    l = rand()%4;
    c = rand()%4;
    if(tabuleiro[l][c]== 0)
    {
      tabuleiro[l][c]= 6;
      cont = cont +1;
    }
  }
   cont = 0;
   while(cont<2)
  {
    l = rand()%4;
    c = rand()%4;
    if(tabuleiro[l][c]== 0)
    {
      tabuleiro[l][c]= 7;
      cont = cont +1;
    }
  }
   cont = 0;
   while(cont<2)
  {
    l = rand()%4;
    c = rand()%4;
    if(tabuleiro[l][c]== 0)
    {
      tabuleiro[l][c]= 8;
      cont = cont +1;
    }
  }
  do
  {
    printf("Jogador 1:\n");
    scanf("%i %i", &l1, &c1);
    for(l=0; l<4; l++)
    {
      for(c = 0; c<4; c++)
      {
      if(l == l1 && c == c1)
      {
        printf("%i ", tabuleiro[l1][c1]);
      }
      else
      {
        printf("0 ");
      }
      }
      printf("\n");
    }
      while(turn = 1)
      {
        printf("Jogador 1:\n");
        scanf("%i %i", &l2, &c2);
        for(l=0; l<4; l++)
        {
          for(c = 0; c<4; c++)
          {
          if(l == l1 && c == c1)
          {
            printf("%i ", tabuleiro[l1][c1]);
          }
          else if(l == l2 && c == c2)
          {
            printf("%i ", tabuleiro[l2][c2]);
          }
          else
          {
            printf("0 ");
          }
          }
          printf("\n");
        }
        if(l1<4 && l1>=0 && l2<4 && l2>=0 && c1<4 && c1>=0 && c2<4 && c2>=0)
        {
            if(tabuleiro[l1][c1]== tabuleiro[l2][c2])
          {
            printf("Jogador 1 acertou!\n");
            tabuleiro[l1][c1]= 0;
            tabuleiro[l2][c2] = 0;
            p1 = p1 + 1;
            pecas = pecas - 2;
          }
          else
          {
            printf("Jogador 1 errou!\n");
            turn = 0;
          }
        }
        else
        {
          printf("Cordenadas invalidas!\nTente novamente!");
        }
      }
        turn = 1;
        while(turn = 1)
        {
          printf("Jogador 2:\n");
        scanf("%i %i", &l2, &c2);
        for(l=0; l<4; l++)
        {
          for(c = 0; c<4; c++)
          {
          if(l == l1 && c == c1)
          {
            printf("%i ", tabuleiro[l1][c1]);
          }
          else if(l == l2 && c == c2)
          {
            printf("%i ", tabuleiro[l2][c2]);
          }
          else
          {
            printf("0 ");
          }
          }
          printf("\n");
        }
        if(l1<4 && l1>=0 && l2<4 && l2>=0 && c1<4 && c1>=0 && c2<4 && c2>=0)
        {
            if(tabuleiro[l1][c1]== tabuleiro[l2][c2])
          {
            printf("Jogador 2 acertou!");
            tabuleiro[l1][c1]= 0;
            tabuleiro[l2][c2] = 0;
            p2 = p2 + 1;
            pecas = pecas - 2;
          }
          else
          {
            printf("Jogador 2 errou!\n");
            turn = 0;
          }
        }
        else
        {
          printf("Cordenadas invalidas!\nTente novamente!");
        }
      }
      turn = 1;
    }while(pecas!=0);
  if(p1>p2)
  {
    printf("O Jogador 1 ganhou!\nEle obteve %i pontos!\n", p1);
    printf("O Jogador 2 perdeu!\nEle obteve %i pontos!\n", p2);
  }
  else if(p1==p2)
  {
    printf("Os jogadores empataram com %i pontos!\n", p1);
  }
  else
  {
    printf("O Jogador 2 ganhou!\nEle obteve %i pontos!\n", p2);
    printf("O Jogador 1 perdeu!\nEle obteve %i pontos!\n", p1);
  }
}
