#include <stdio.h>
#include <time.h>
#include <stdlib.h>
//Gabriela Silva Lima
int main(void) 
{
  srand(time(NULL));
  int num[10], l, c, p;
  for(l = 0; l<10; l++)
  {
    num[l] = rand()%20;
  }
  for(l=0; l<10; l++)
  {
    for(c = l +1; c<10; c++)
    {
      if(num[l]>num[c])
      {
        p = num[l];
        num[l]= num[c];
        num[c] = p;
      }
    }
  }
  for(l=0; l<10; l++)
  {
    printf("%i ",num[l]);
  }

}
