#include <stdio.h>
#include <time.h>
#include <stdlib.h>
//Gabriela Silva Lima

int main(void) 
{
  srand(time(NULL));
  char mar1[11][11], mar2[11][11];
  int l, c, fim = 0, cont =0, coord11, coord21;
  //incializando os mapas
  for(l=0; l<11; l++)
  {
    for(c=0; c<11; c++)
    {
      mar1[l][c]= '-';
      mar2[l][c]= '-';
    }
  }
  //colocando a embarcacao pequena nos mapas
  while(cont!=1)
  {
    l = rand()%10;
    c = rand()%10;
    mar1[l][c] = 'O';
    l = rand()%10;
    c = rand()%10;
    mar2[l][c] = 'O';
    cont =1;
  }
  cont = 0;
  //colocando as embarcacoes dois horizontal
  while(cont!=1)
  {
    l = rand()%10;
    c = rand()%10;
    if(mar1[l][c]=='-' && c+1<11 && mar1[l][c +1]=='-')
    {
      mar1[l][c]= '#'; 
      mar1[l][c +1]= '#';
      cont = cont + 1;
    }
  }
  cont = 0;
  while(cont!=1)
  {
    l = rand()%10;
    c = rand()%10;
    if(mar2[l][c]== '-' && c+1<11 && mar2[l][c +1] == '-')
    {
      mar2[l][c] = '#';
      mar2[l][c +1]= '#';
      cont = 1;
    }
  }
    cont = 0;
    //colocando as embarcacoes dois esquerda
    while(cont != 1)
    {
      l = rand()%10;
      c = rand()%10;
      if(mar1[l][c]== '-' && l-1>=0 && c-1>=0 && mar1[l-1][c-1]== '-')
      {
        mar1[l][c]= 'W';
        mar1[l-1][c-1] = 'W';
        cont = 1;
      }
    }  
    cont = 0;
    while(cont!=1)
    {
      l = rand()%10;
      c = rand()%10;
      if(mar2[l][c]== '-' && l-1>=0 && c-1>=0 && mar2[l-1][c-1] == '-')
      {
        mar2[l][c] = 'W';
        mar2[l-1][c-1] = 'W';
        cont = 1;
      }
    }
    cont = 0;
    //colocando as embarcacoes dois direita
    while(cont!=1)
    {
      l = rand()%10;
      c = rand()%10;
      if(mar1[l][c]== '-' && l+1<11 && c-1>=0 && mar1[l+1][c-1]== '-')
      {
        mar1[l][c]= '@';
        mar1[l+1][c-1]= '@';
        cont = 1;
      }
    }
    cont = 0;
    while(cont!=1)
    {
      l = rand()%10;
      c = rand()%10;
      if(mar2[l][c]== '-' && l+1<11 && c-1>=0 && mar2[l+1][c-1]== '-')
      {
        mar2[l][c]= '@';
        mar2[l+1][c-1]= '@';
        cont = 1;
      }
    }
  //comecando a jogar
  while(fim!=1)
  {
      //printando os mares
      printf("\tMar do Jogador 1!\n");
      for(l=0; l<11; l++)
    {
      for(c=0; c<11; c++)
      {
        printf("%c", mar1[l][c]);
      }
      printf("\n");
    }
    printf("\n\n");
      printf("\tJogador 1 sua vez!\nDigite as coordenadas do seu ataque:\n");
    scanf("%i %i", &coord11, &coord21);
    if(mar2[coord11][coord21] != '-')
    {
      if(mar2[coord11][coord21] == 'O')
      {
        printf("Voce atingiu uma embarcacao!\n");
        mar2[coord11][coord21] = '-';
      }
      else if(mar2[coord11][coord21]== '#')
      {
        printf("Voce atingiu uma embarcacao!\n");
        mar2[coord11][coord21] = '-';
        if(mar2[coord11][coord21+1]=='#')
        {
          mar2[coord11][coord21+1]= '-';
        }
        else
        {
          mar2[coord11][coord21-1]= '-';
        }
      }
      else if(mar2[coord11][coord21]== 'W')
      {
        printf("Voce atingiu uma embarcacao!\n");
        mar2[coord11][coord21] = '-';
        if(mar2[coord11-1][coord21-1]=='W')
        {
          mar2[coord11-1][coord21-1] = '-';
        }
        else
        {
          mar2[coord11+1][coord21+1]= '-';
        }
      }
      else if(mar2[coord11][coord21]=='@')
      {
        printf("Voce destruiu uma embarcacao!\n");
        mar2[coord11][coord21] = '-';
        if(mar2[coord11+1][coord21-1] == '@')
        {
          mar2[coord11+1][coord21-1] = '-';
        }
        else
        {
          mar2[coord11+1][coord21-1]= '-';
        }
      }
    }
    else
    {
      printf("Voce acertou a agua!\n");
    }
    /*printando mar2
    for(l=0; l<11; l++)
    {
      for(c=0; c<11; c++)
      {
        printf("%c", mar2[l][c]);
      }
      printf("\n");
    }*/
    fim = 1;
  }
  fim =0;
  while(fim!=1)
  {
    printf("\tMar do Jogador 2!\n");
      for(l=0; l<11; l++)
    {
      for(c=0; c<11; c++)
      {
        printf("%c", mar2[l][c]);
      }
      printf("\n");
    }
    printf("\tJogador 2 sua vez!\nDigite as coordenadas do seu ataque:\n");
    scanf("%i %i", &coord11, &coord21);
    if(mar1[coord11][coord21] != '-')
    {
      if(mar1[coord11][coord21] == 'O')
      {
        printf("Voce atingiu uma embarcacao!\n");
        mar1[coord11][coord21] = '-';
      }
      else if(mar1[coord11][coord21]== '#')
      {
        printf("Voce atingiu uma embarcacao!\n");
        mar1[coord11][coord21] = '-';
        if(mar1[coord11][coord21+1]=='#')
        {
          mar1[coord11][coord21+1]= '-';
        }
        else
        {
          mar1[coord11][coord21-1]= '-';
        }
      }
      else if(mar1[coord11][coord21]== 'W')
      {
        printf("Voce atingiu uma embarcacao!\n");
        mar1[coord11][coord21] = '-';
        if(mar1[coord11-1][coord21-1]=='W')
        {
          mar1[coord11-1][coord21-1] = '-';
        }
        else
        {
          mar1[coord11+1][coord21+1]= '-';
        }
      }
      else if(mar1[coord11][coord21]=='@')
      {
        printf("Voce destruiu uma embarcacao!\n");
        mar1[coord11][coord21] = '-';
        if(mar1[coord11+1][coord21-1] == '@')
        {
          mar1[coord11+1][coord21-1] = '-';
        }
        else
        {
          mar1[coord11+1][coord21-1]= '-';
        }
      }
    }
    else
    {
      printf("Voce acertou a agua!\n");
    }
    /*printando mar1
    for(l=0; l<11; l++)
    {
      for(c=0; c<11; c++)
      {
        printf("%c", mar1[l][c]);
      }
      printf("\n");
    }*/
    fim = 1;
  }
}
