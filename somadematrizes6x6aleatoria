#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
  srand(time(NULL));

  int m1[6][6], m2[6][6], m3[6][6];
  int l, c;
  for(l = 0; l<6; l++)
  {
    for(c = 0; c<6;c++)
    {
      m1[l][c] = rand() % 1000;
      printf("%i ", m1[l][c]); 
    }
    printf("\n");
  }
  printf("\n");
  for(l = 0; l<6; l++)
  {
    for(c = 0; c<6;c++)
    {
      m2[l][c] = rand() % 1000;
      printf("%i ", m2[l][c]);
    }
    printf("\n");
  }
  printf("\n");
  
  for(l = 0; l<6; l++)
  {
    for(c = 0; c<6;c++)
    {
      m3[l][c] = m1[l][c] + m2[l][c];
      printf("%i ", m3[l][c]);
    }
    printf("\n");
  }
}
