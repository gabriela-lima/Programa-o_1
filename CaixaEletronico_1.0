#include <stdio.h>
#include <string.h>

typedef struct
  {
    int conta;
    char nome[30];
    long int cpf;
    float saldo;
  }Cliente;
int main(void) 
{
  Cliente clientes[3];
  long int cpf0;
  int conta0, cont, log = 0, i, controle, fim=0, resp, conta1, j;
  float saque, deposito;
  //Pre cadastro
  clientes[0].conta = 2050;
  clientes[0].cpf = 71135929459;
  clientes[0].saldo = 250000;
  strcpy(clientes[0].nome, "Gabriela Lima");
  clientes[1].conta = 2051;
  clientes[1].cpf = 71135929458;
  clientes[1].saldo = 25000;
  strcpy(clientes[1].nome, "Paulo Cesar");
  clientes[2].conta = 2052;
  clientes[2].cpf = 71135929457;
  clientes[2].saldo = 2500;
  strcpy(clientes[2].nome, "Jose Pedro");

  //Login
  while(log!=1)
  {
    printf("\tCaixa eletronico\n");
    printf("\nDigite o seu cpf:\n");
    scanf("%lu", &cpf0);
    getchar();
    printf("Digite a sua conta\n");
    scanf("%i", &conta0);
    getchar();
    for(cont=0; cont<3; cont++)
    {
      if(clientes[cont].conta == conta0 && clientes[cont].cpf==cpf0)
      {
        log = 1;
        i = cont;
      }
    }
  }
  if(log==1)
  {
    printf("\nBem vindo!\n%s\n", clientes[i].nome);
    fim = 0;
  }
  else
  {
    printf("Cliente não reconhecido\n");
  }
  while(fim!=1)
  {
    printf("\tSaldo = %f\n", clientes[i].saldo);
  printf("\tQual operacao deseja realizar?\n1-Saque\n2-Deposito\n3-Transferencia\n4-Extrato\n5-Sair\n");
  switch(controle)
  {
    case 1:
    printf("Voce escolheu saque\n\tQuanto deseja retirar?\n");
    scanf("%f", &saque);
    getchar();
    if(clientes[i].saldo >= saque)
    {
      clientes[i].saldo = clientes[i].saldo - saque;
      printf("Saldo apos o saque = %f", clientes[i].saldo);
    }
    else
    {
      printf("Voce não pode realizar o saque\n");
    }
    break;
    case 2:
    printf("Voce escolheu deposito\nDeseja depositar em sua conta (digite 1) ou em outra conta(digite 2)");
    scanf("%i", &resp);
    getchar();
    if(resp==1)
    {
      printf("\tQuanto deseja depositar em sua conta?\n");
      scanf("%f", &deposito);
      getchar();
      clientes[i].saldo = clientes[i].saldo + deposito;
    }
    else if(resp==2)
    {
      printf("\tQuanto deseja depositar em outra conta?\n");
      scanf("%f", &deposito);
      getchar();
      printf("Digite a conta em que vai depositar");
      scanf("%i", &conta1);
      getchar();
      for(cont=0; cont<3; cont++)
      {
        if(clientes[cont].conta==conta1)
        {
          j = cont;
          clientes[j].saldo = clientes[j].saldo + deposito;
        }
      }
    }
    break;
    case 3:
    printf("Voce escolheu tranferencia/n");
    case 4:
    printf("Voce escolheu extrato\n\tSaldo atual = %f", clientes[i].saldo);
    break;
    case 5:
    fim = 1;
    break;
    default:
    printf("Operacao nao reconhecida\n");
    break;
  }
  }
  
}
