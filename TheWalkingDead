#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(void) 
{
  srand(time(NULL));
  char mapa[10][10], l, c, r = 0, z = 0, ob= 0, mun = 0, s = 0, controle, rickx, rciky;
  printf("\tTHE WALKING DEAD:\n\n");
  for(l = 0; l<10; l++)
  {
    for(c = 0; c<10; c++)
    {
      mapa[l][c] = '_';
    }
  }

  while(r!=1)
  {
    rickx = rand()%10;
    rciky  = rand()%10;
    if(mapa[rickx][rciky]== '_')
    {
      mapa[rickx][rciky]= 'R';
      r = 1;
    }
    
  while(z < 10)
  {
    l = rand()%10;
    c  = rand()%10;
    if(mapa[l][c]== '_')
    {
      mapa[l][c] = 'Z';
      z = z + 1;
    }
  }
  while(ob<5)
  {
    l = rand()%10;
    c  = rand()%10;
    if(mapa[l][c]== '_')
    {
      mapa[l][c] = 'B';
      ob = ob + 1;
    }
  }
  while(mun<6)
  {
    l = rand()%10;
    c  = rand()%10;
    if(mapa[l][c]== '_')
    {
      mapa[l][c] = 'M';
      mun = mun + 1;
    }
  }
  while(s!=1)
  {
    l = rand()%10;
    c  = rand()%10;
    if(mapa[l][c]== '_')
    {
      mapa[l][c] = 'S';
      s = s +1;
    }
  }
  }
  for(l = 0; l<10; l++)
  {
    for(c = 0; c<10; c++)
    {
       printf("%c ", mapa[l][c]);
    }
    printf("\n");
  }
 
  int fim = 0;
  
  do
  {
     printf("Começe a movimentar Rick:\n");
    scanf("%c", &controle);

    getchar();

    switch(controle)
    {
      case 'w':
      {
        mapa[rickx][rciky] = '_';
        rickx = rickx -1;
        mapa[rickx][rciky] = 'R';

        break;
      }
      case 's':
      {
        mapa[rickx][rciky] = '_';
        rickx = rickx + 1;
        mapa[rickx][rciky] = 'R';
        break;
      }
      case'a':
      {
        mapa[rickx][rciky] = '_';
        rciky = rciky - 1;
        mapa[rickx][rciky] = 'R';

        break;
      }
      case'd':
      {
        mapa[rickx][rciky] = '_';
        rciky = rciky + 1;
        mapa[rickx][rciky] = 'R';
        break;
      }
      case '0':
      {
        fim = 1;
        break;
      }
    }
    
    for(l = 0; l<10; l++)
      {
        for(c = 0; c<10; c++)
        {
          printf("%c ", mapa[l][c]);
        }
        printf("\n");
    }

  }while(fim != 1);

  
} 
