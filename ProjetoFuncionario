#include <stdio.h>
#include <math.h>
#include <string.h>

typedef struct
{
  char nome[50];
  int idade;
  char cpf[13];
  int status;
}Pessoa;

typedef struct
{
  Pessoa dados;
  int id_cargo;
}Funcionario;

//REATIVAR FUNCIONARIO
int reativar_funcionario()

//BUSCAR FUNCIONARIO
int buscar_funcionario(int quant, Funcionario funcionarios[], char* cpf)
{
  int cont;
  for(cont=0; cont<quant; cont++)
  {
    if(strcmp(cpf, funcionarios[cont].dados.cpf)==0)
    {
      printf("Funcionario encontrado\n");
      printf("Nome: %s\nIdade: %i\nCPF: %s\nStatus: %i\n", funcionarios[cont].dados.nome, funcionarios[cont].dados.idade, funcionarios[cont].dados.cpf, funcionarios[cont].dados.status);

      return cont;
    }
  }
  printf("Funcionario não encontrado.\n");
  return -1;
}

//REMOVER FUNCIONARIO
int remover_funcionario(int num, Funcionario funcionarios[num])
{
  char cpf[13];
  int tam;
  printf("Digite o CPF:\n");
  fgets(cpf, 13, stdin);
  tam = strlen(cpf);
  cpf[tam-1] = '\0';
  int resp = buscar_funcionario(num, funcionarios, cpf);
  if(resp !=-1)
  {
    if(funcionarios[resp].dados.status == 5)
    {
      funcionarios[resp].dados.status = 6;
      printf("Funcionario removido\n");
      return 1;
    }
    else
    {
      printf("Funcionario já esta removido\n");
      return 0;
    }
  }
  printf("Funcionario não pode ser removido\n");
  return -1;
}

//CADASTRAR FUNCIONARIO
int cadastrar_funcionario(int num, Funcionario funcionarios[num], int indice_funcionario)
{
  int tam, resp;
  char cpf[13];
  //CPF
  printf("Digite o CPF:\n");
  fgets(cpf, 13, stdin);
  tam = strlen(cpf);
  cpf[tam-1] = '\0';
  resp = buscar_funcionario(num, funcionarios, cpf);
  if(resp==-1)
  {
    strcpy(funcionarios[indice_funcionario].dados.cpf, cpf);
    //NOME
    printf("Digite o nome do funcionario:\n");
    fgets(funcionarios[indice_funcionario].dados.nome, 50, stdin);
    tam = strlen(funcionarios[indice_funcionario].dados.nome);
    funcionarios[indice_funcionario].dados.nome[tam-1] = '\0';
      
    //IDADE
    printf("Digite a idade:\n");
    scanf("%i", &funcionarios[indice_funcionario].dados.idade);
    getchar();

    //STATUS
    funcionarios[indice_funcionario].dados.status = 5;

    return 1;
  }
  return -1;
}

//ALTERACAO DE SALARIO
void alteracao_salario(float* percentual)
{
  float percentsalario;
  printf("Digite o novo percentual para o salario do funcionario:\n");
  scanf("%f", &percentsalario);
  *(percentual) = percentsalario;
  printf("Salario modificado\n");
}

int main(void)
{
  Funcionario funcionarios[2];
  int resp, plop;
  char cpf[13];
  funcionarios[0].dados.status = 5;
  funcionarios[0].dados.idade = 18;
  printf("%i \n", funcionarios[0].dados.idade);
  strcpy(funcionarios[0].dados.nome, "Gabriela Lima");
  printf("%s \n", funcionarios[0].dados.nome);
  strcpy(funcionarios[0].dados.cpf, "71135929459");
  printf("%s \n", funcionarios[0].dados.cpf);
  //resp = buscar_funcionario(2, funcionarios);
  resp = remover_funcionario(2, funcionarios);
  //resp = cadastrar_funcionario(2, funcionarios, 1);
  //plop = cadastrar_funcionario(2, funcionarios, 1, funcionarios.dados.status);
  //resp = buscar_funcionario(2, funcionarios);
  //printf("Digite o cpf:");
 // fgets(cpf, 13, stdin);
  printf("%i", funcionarios[0].dados.status);
  plop = remover_funcionario(2, funcionarios);
 /*printf("Digite seu cpf");
 scanf("%s", cpf);
 getchar();
  resp = buscar_funcionario(2, funcionarios, cpf);*/
  printf("Nome: %s\nIdade: %i\nCPF: %s\nStatus: %i\n", funcionarios[1].dados.nome, funcionarios[1].dados.idade, funcionarios[1].dados.cpf, funcionarios[1].dados.status);
  


}
