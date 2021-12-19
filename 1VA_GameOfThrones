#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void) 
{
  char mapa[10][10], contr;

  int lifej = 100, lifec= 100, lifek = 200, l, c, ini = 0, obs = 0, pocao = 0, cont, lj=0, cj = 0, cneg = 0, cnegp = 0, cnegn = 0, neg, poderj, poderc, poderk, guerra = 0, batalha = 0;
  srand(time(NULL));
  //inicializar o mapa
  for(l = 0; l<10; l++)
  {
    for(c=0; c<10; c++)
    {
      mapa[l][c]= '-';
      printf("%c", mapa[l][c]);
    }
    printf("\n");
  }
  //Add os principais
  mapa[lj][cj] ='J';
  mapa[0][0]= 'W';
  mapa[4][4]= 'C';
  mapa[9][9]= 'N';
  //Colocando o resto
  while(ini!=20)
  {
    l = rand()%9;
    c = rand()%9;
    if(mapa[l][c]=='-')
    {
      mapa[l][c]= 'I';
      ini = ini + 1;
    }
  }
  while(obs!=10)
  {
    l = rand()%9;
    c = rand()%9;
    if(mapa[l][c]=='-')
    {
      mapa[l][c]= 'O';
      obs = obs + 1;
    }
  }
  while(pocao!=10)
  {
    l = rand()%9;
    c = rand()%9;
    if(mapa[l][c]=='-')
    {
      mapa[l][c]= 'P';
      pocao = pocao + 1;
    }
  }
  //printando o mapa
  for(l = 0; l<10; l++)
  {
    for(c=0; c<10; c++)
    {
      printf("%c", mapa[l][c]);
    }
    printf("\n");
  }
  while(cont!=1)
  {
    printf("Movimente Jon:");
    scanf("%c", &contr);
    getchar();
    //fazendo a movimentacao e jogo
    //s
    if(contr=='s')
    {
      if(mapa[lj+1][cj]!='O' && lj+1<10 )
      {
        if(lj ==0 && cj ==0)
        {
          mapa[lj][cj] ='W';
        }
        else if(lj ==9 && cj ==9)
        {
          mapa[lj][cj]= 'N';
        }
        else if(lj==4 && cj==4)
        {
          mapa[lj][cj]= 'C';
        }
        else if(mapa[lj+1][cj]=='I')
        {
          lifej = lifej -1;
          printf("Vida de Jon = %i\n", lifej);
          mapa[lj+1][cj]= '-';
          mapa[lj][cj]= '-';
          if(lifej==0)
          {
            printf("Jon Snow morreu.\n");
            cont = 1;
          }
        }
        else if(mapa[lj+1][cj]=='P')
        {
          if(lifej <95)
          {
            lifej = lifej +5;
            printf("Vida de Jon = %i\n", lifej);
            mapa[lj+1][cj]= '-';
            mapa[lj][cj]= '-';
          }
        }
        else
        {
          mapa[lj][cj] = '-';
        }
        lj = lj+1;
        if(lj==4 && cj==4)
        {
          cont= 1;
        }
        mapa[lj][cj] = 'J';
      }
      else
    {
      printf("Comando invalido.\n");
    }

    }
    //w
    else if(contr=='w')
    {
      if(mapa[lj-1][cj]!='O' && lj-1>=0)
      {
        if(lj ==0 && cj ==0)
        {
          mapa[lj][cj] ='W';
        }
        else if(lj ==9 && cj ==9)
        {
          mapa[lj][cj]= 'N';
        }
        else if(mapa[lj-1][cj]=='I')
        {
          lifej = lifej -1;
          printf("Vida de Jon = %i\n", lifej);
          mapa[lj-1][cj]= '-';
          mapa[lj][cj]= '-';
          if(lifej==0)
          {
            printf("Jon Snow morreu.\n");
            cont = 1;
          }
        }
        else if(mapa[lj-1][cj]=='P')
        {
          if(lifej <95)
          {
            lifej = lifej +5;
            printf("Vida de Jon = %i\n", lifej);
            mapa[lj-1][cj]= '-';
            mapa[lj][cj]= '-';
          }
        }
        else if(lj==4 && cj==4)
        {
          mapa[lj][cj]= 'C';
        }
        else
        {
          mapa[lj][cj] = '-';
        }
        lj = lj-1;
        if(lj==4 && cj==4)
        {
          cont= 1;
        }
        mapa[lj][cj] = 'J';
      }
      else
    {
      printf("Comando invalido.\n");
    }
    }
    //d
    else if(contr=='d')
    {
      if(mapa[lj][cj+1]!='O' && cj+1<10)
      {
        if(lj ==0 && cj ==0)
        {
          mapa[lj][cj] ='W';
        }
        else if(lj ==9 && cj ==9)
        {
          mapa[lj][cj]= 'N';
        }
        else if(lj==4 && cj==4)
        {
          mapa[lj][cj]= 'C';
        }
        else if(mapa[lj][cj+1]=='I')
        {
          lifej = lifej -1;
          printf("Vida de Jon = %i\n", lifej);
          mapa[lj][cj+1]= '-';
          mapa[lj][cj]= '-';
          if(lifej==0)
          {
            printf("Jon Snow morreu.\n");
            cont = 1;
          }
        }
        else if(mapa[lj][cj+1]=='P')
        {
          if(lifej <95)
          {
            lifej = lifej +5;
            printf("Vida de Jon = %i\n", lifej);
            mapa[lj][cj+1]= '-';
            mapa[lj][cj]= '-';
          }
        }
        else
        {
          mapa[lj][cj] = '-';
        }
        cj = cj+1;
        if(lj==4 && cj==4)
        {
          cont= 1;
        }
        mapa[lj][cj] = 'J';
      }
      else
    {
      printf("Comando invalido.\n");
    }
    }
    //a
    else if(contr=='a')
    {
      if(mapa[lj][cj-1]!='O' && cj-1>=0)
      {
        if(lj ==0 && cj ==0)
        {
          mapa[lj][cj] ='W';
        }
        else if(lj ==9 && cj ==9)
        {
          mapa[lj][cj]= 'N';
        }
        else if(lj==4 && cj==4)
        {
          mapa[lj][cj]= 'C';
        }
        else if(mapa[lj][cj-1]=='I')
        {
          lifej = lifej -1;
          printf("Vida de Jon = %i\n", lifej);
          mapa[lj][cj-1]='-';
          mapa[lj][cj]= '-';
          if(lifej==0)
          {
            printf("Jon Snow morreu.\n");
            cont = 1;
          }
        }
        else if(mapa[lj][cj-1]=='P')
        {
          if(lifej <95)
          {
            lifej = lifej +5;
            printf("Vida de Jon = %i\n", lifej);
            mapa[lj][cj-1]= '-';
            mapa[lj][cj]= '-';
          }
        }
        else
        {
          mapa[lj][cj] = '-';
        }
        cj = cj -1;
        if(lj==4 && cj==4)
        {
          cont= 1;
        }
        mapa[lj][cj] = 'J';
      }
      else
    {
      printf("Comando invalido.\n");
    }
    }
    else
    {
      printf("Comando invalido.\n");
    }
    //printando o mapa atualizado
    for(l = 0; l<10; l++)
  {
    for(c=0; c<10; c++)
    {
      printf("%c", mapa[l][c]);
    }
    printf("\n");
  }
  } 
    //negociacao
    if(lj==4 && cj==4)
    {
      printf("Voce começou a negociar com Cersei.\n");
      while(cneg!=5)
      {
        neg = rand()%100;
        if(neg>60)
        {
          cnegp = cnegp +1;
        }
        else
        {
          cnegn = cnegn +1;
        }
        cneg = cnegn + cnegp;      
      }
      if(cnegp >=3)
      {
        lifej = lifej + 100;
        printf("Cersei se juntou a voce.\nVida de Jon = %i", lifej);
      }
      else
      {
        printf("Voce iniciou uma guerra com Cersei.\n");
        //guerra com cersei
        while(guerra!=1)
        {
          poderj = rand()%100;
          if(poderj>=50)
          {
            lifec = lifec -10;
            printf("Voce atingiu Cersei.\nVida de Cersei = %i", lifec);
            if(lifec==0)
            {
              printf("Cersei morreu.\n");
              guerra = 1;
            }
          }
          else
          {
            printf("Voce nao atingiu Cersei.\n");
          }
          poderc = rand()%100;
          if(poderc>=50)
          {
            lifej = lifej -10;
            printf("Cersei te atingiu.\nVida de Jon = %i", lifej);
            if(lifej == 0)
            {
              printf("Jon morreu.\n");
              return 0;
            }
          }
          else
          {
            printf("Cersei nao te atingiu.\n");
          }
        }
      }
      //guerra com o king
      if(guerra ==1 && lj ==9 && cj==9)
      {
        while(batalha!=1)
      {
        poderj = rand()%100;
        if(poderj>=50)
        {
          lifek = lifek -10;
          printf("Jon atingiu o rei da noite.\nVida do rei = %i", lifek);
          if(lifek==0)
          {
            printf("O rei da noite foi derrotado.\n");
            printf("\tJon venceu!\n");
            printf("A vida de Jon = %i\n", lifej);
            cont = 1;
          }
        }
        else
        {
          printf("Jon nao atingiu o rei.\n");
        }
        poderk = rand()%100;
        if(poderk>=50)
        {
          printf("O rei atingiu Jon.\n");
          lifej = lifej -5;
          lifek = lifek + 5;
          printf("A vida de Jon = %i e a vida do rei = %i", lifej, lifek);
          if(lifej==0)
          {
            printf("Jon Snow morreu.\n");
            cont = 1;
          }
        }
        else
        {
          printf("O rei da noite nao atingiu Jon.\n");
        }
      }
      }
  }
}
