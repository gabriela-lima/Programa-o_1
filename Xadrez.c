#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

int main(void) 
{
  srand(time(NULL));
  int l, c, cavalol, cavaloc, morto = 0;
  char tabuleiro[8][8], cavalo, inimigo = 0;
  for(l=0; l<8; l++)
  {
    for(c = 0; c<8; c++)
    {
      tabuleiro[l][c] = 'O';
    }
  }
  while(inimigo!=8)
  {
    l = rand()%8;
    c = rand()%8;
    if(tabuleiro[l][c]== 'O')
    {
      tabuleiro[l][c] = 'I';
      inimigo = inimigo + 1;
    }
  }
  while(cavalo!=1)
  {
    cavalol = rand()%8;
    cavaloc = rand()%8;
    if(tabuleiro[cavalol][cavaloc] == 'O')
    {
      tabuleiro[cavalol][cavaloc] = 'C';
      cavalo = cavalo + 1;
    }
  }
  for(l=0; l<8; l++)
  {
    for(c = 0; c<8; c++)
    {
      printf("%c ", tabuleiro[l][c]);
    }
    printf("\n");
  }
  if(tabuleiro[cavalol +1][cavaloc + 2] == 'I' && cavalol +1 <8 && cavaloc +2 <8 )
  {
    printf("O cavalo matou inimigo.\n");
  }
   else if(tabuleiro[cavalol -1][cavaloc + 2] == 'I' && cavalol -1 <8 && cavaloc +2 <8 && cavalol-1>=0)
  {
    printf("O cavalo matou inimigo.\n");
  }
  else if(tabuleiro[cavalol + 1][cavaloc - 2] == 'I' && cavalol +1 <8 && cavaloc -2 <8 && cavaloc - 2>=0)
  {
    printf("O cavalo matou inimigo.\n");
  }
  else if(tabuleiro[cavalol -1][cavaloc - 2 ] == 'I'&& cavalol -1 <8 && cavaloc -2 <8 && cavaloc - 2>=0 && cavalol-1>=0)
  {
    printf("O cavalo matou inimigo.\n");
  }
  else if(tabuleiro[cavalol+2][cavaloc +1] == 'I' && cavalol +2 <8 && cavaloc +1 <8)
  {
    printf("O cavalo matou inimigo.\n");
  }
  else if(tabuleiro[cavalol +2][cavaloc -1]== 'I' && cavalol +2 <8 && cavaloc -1 <8 && cavaloc-1>=0)
  {
    printf("O cavalo matou inimigo.\n");
  }
  else if(tabuleiro[cavalol -2][cavaloc +1]== 'I' && cavalol -2 <8 && cavaloc +1 <8 && cavalol-2>=0)
  {
    printf("O cavalo matou inimigo.\n");
  }
  else if(tabuleiro[cavalol -2][cavaloc -1]== 'I' &&cavalol -2 <8 && cavaloc -1 <8 && cavalol-2>=0 && cavaloc-1>=0)
  {
    printf("O cavalo matou inimigo.\n");
  }
  else
  {
    printf("O cavalo não matou um inimigo.\n");
  }
}
