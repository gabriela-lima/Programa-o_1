#include <stdio.h>
#include <math.h>
#include <string.h>

typedef struct{
	char nome[50];
	int idade;
	char cpf[13];
	int status; //5 = ativo 6 = desativo
}Pessoa;



typedef struct{
	char rua[100];
	int numero;
	char complemento[100];
	char bairro[30];
	char cep[10];
	char cidade[30];
	char estado[3];
}Endereco;



typedef struct{
	char login[30];
	char password[9];
}Login_password;



typedef struct{
	int id;
	char nome[30];
	int tipo; //1 = Pão, 2 = Recheio, 3 = Queijo, 4 = Molho, 5 = Vegetal
	float valorc;
	float valorv;
	int qtd;
	int comprados;
	int vendidos;
}Produto;



typedef struct{
	int tamanhopao;
	Produto recheio;
	Produto	molho;
	Produto	pao;
	Produto queijos;
	Produto salada[10];
	float preco;
}Sanduiche;



typedef struct{
	Pessoa dados;
	Endereco endereco;
	Login_password login_password;
	int compras_realizadas;
	Sanduiche ultimo_sanduiche;
	//Payment pagamento;
}Cliente;



typedef struct{
	Pessoa dados;
	int id_cargo;
}Funcionario;


typedef struct{
	Pessoa pessoa;
	Endereco endereco;
	Cliente cliente;
	Funcionario funcionario;
	Sanduiche sanduiche;
	Produto produto;
	Login_password login_password;
}Sistema;


//BUSCAR VAZIO

int buscar_vazio(char palavra[]) //A string deve ter seu tamanho "ajustado" antes de ser mandada pra essa função

{

  for(int i = 0; palavra[i] != '\0'; i++)

  {

    if(palavra[i] != 32)

    {

      return -1;

    }

  }

  return 1;

}


//BUSCAR CLIENTE

//antes int buscar_cliente(int quant, Cliente clientes[quant], char* cpf)

int buscar_cliente(Cliente clientes[], int quant,  char cpf[13])

// o cpf não é um ponteiro. visto que ele recebe um valor que foi digitado pelo usuário e não um endereço de memória. troquei a ordem dos argumentos e a forma de declarar o vetor clientes.

{

  int cont;

  for(cont=0; cont<quant; cont++)

  {

    if(strcmp(cpf, clientes[cont].dados.cpf)==0)

    {

      printf("\nCliente encontrado\n\n");

      printf("Nome: %s\nIdade: %i\nCPF: %s\nStatus: %i\n", clientes[cont].dados.nome, clientes[cont].dados.idade, clientes[cont].dados.cpf, clientes[cont].dados.status);



      return cont;

    }

  }

  printf("Cliente não encontrado.\n");

  return -1;

}

//BUSCAR LOGIN

//antes int buscar_login(int quant, Cliente clientes[quant], char* login)

int buscar_login_cliente(Cliente clientes[], int quant, char login[30])

// o login não é um ponteiro. visto que ele recebe um valor que foi digitado pelo usuário e não um endereço de memória. // invertir a ordem dos argumentos para a função funcionar e tirei a variável de dentro do indice do vetor clientes

{

  int cont;

  for(cont=0; cont<quant; cont++)

  {

    printf("login - %s\n", login);

    printf("clientes[cont].login_password.login - %s\n", clientes[cont].login_password.login);

    if(strcmp(login, clientes[cont].login_password.login)==0)

    {

      //antes return 1; 

      return cont;

    }

    //antes return -1; 

  }

  return -1; // retirei esse return -1 do local original uma vez que no cadastro do 1° cliente essa função não entra no laço for. e se os dois return estiverem no laço for a função não irá retornar nem 1 nem -1.

}
/*//BUSCAR PASSWORD 

int buscar_password(int quant, Cliente clientes[], char password[], char login[]) 

{ 

  int check = buscar_login(clientes, quant, login); // invertir a ordem dos argumentos para a função funcionar

  if(check == 1) 

  { 

    for(int cont = 0; cont < quant; cont++)

    { 

      if(strcmp(password, clientes[cont].login_password.password) == 0) 

      { 

        return 1;

      }

    }

    return -1;

  } 

  else 

  { 

    return -1;

  } 

} */

//CADASTRO CLIENTE
void cadastro_cliente( Cliente clientes[], int num, int* indice_cliente)

{
  int tam, resp, resp2, fim = 0, resp3, vazio;
  char cpf[13], login[30];

        //DADOS PESSOAIS
  //CPF 
  while(1)
  {
    printf("Digite o seu CPF:\n");
    fgets(cpf, 13, stdin);
    tam = strlen(cpf);
    cpf[tam-1] = '\0';
    fflush(stdin);
    vazio = buscar_vazio(cpf);
    if(vazio != 1)
    {
      break;
    }
    else
    {
      printf("Opção inválida\nTente novamente\n");
    }
  }
  resp = buscar_cliente(clientes, num, cpf);
  if(resp == -1)
  {
    while(1)
    {
      printf("\n\tDeseja se cadastrar?\n1-Sim\n2-Nao\n");
      scanf("%i", &resp3);
      getchar();
      if(resp3==1 || resp3==2 )
      {
        break;
      }
      else
      {
        printf("Opção inválida\n");
      }
    }
    if(resp3 == 1)
    { 
      strcpy(clientes[*indice_cliente].dados.cpf, cpf);
      printf("\n\tDados pessoais:\n\n");
      //NOME 
      while(1)
      {
        printf("Digite o seu nome:\n");
        fgets(clientes[*indice_cliente].dados.nome, 50, stdin);
        tam = strlen(clientes[*indice_cliente].dados.nome);
        clientes[*indice_cliente].dados.nome[tam-1] = '\0';
        fflush(stdin);
        vazio = buscar_vazio(clientes[*indice_cliente].dados.nome);
        if(vazio != 1)
        {
          break;
        }
        else
        {
          printf("Opção inválida\nTente novamente\n");
        }
      }

      //IDADE
      printf("Digite a sua idade:\n");
      scanf("%i", &clientes[*indice_cliente].dados.idade);
      getchar();

              //ENDERECO 
      printf("\tEndereco:\n\n");
      //RUA
      while(1)
      {
        printf("Digite o nome da rua:\n");
        fgets(clientes[*indice_cliente].endereco.rua, 100, stdin);
        tam = strlen(clientes[*indice_cliente].endereco.rua);
        clientes[*indice_cliente].endereco.rua[tam-1] = '\0';
        fflush(stdin);
        vazio = buscar_vazio(clientes[*indice_cliente].endereco.rua);
        if(vazio != 1)
        {
          break;
        }
        else
        {
          printf("Opção inválida\nTente novamente\n");
        }
      }

      //NUMERO 
      printf("Digite o numero da sua casa:\n");
      scanf("%i", &clientes[*indice_cliente].endereco.numero);
      getchar();

      //COMPLEMENTO 
      while(1)
      {
        printf("Digite o complemento:\n");
        fgets(clientes[*indice_cliente].endereco.complemento, 100, stdin);
        tam = strlen(clientes[*indice_cliente].endereco.complemento);
        clientes[*indice_cliente].endereco.complemento[tam-1] = '\0';
        fflush(stdin);
        vazio = buscar_vazio(clientes[*indice_cliente].endereco.complemento);
        if(vazio != 1)
        {
          break;
        }
        else
        {
          printf("Opção inválida\nTente novamente\n");
        }
      }

      //BAIRRO 
      while(1)
      {
         printf("Digite o bairro:\n");
        fgets(clientes[*indice_cliente].endereco.bairro, 30, stdin);
        tam = strlen(clientes[*indice_cliente].endereco.bairro);
        clientes[*indice_cliente].endereco.bairro[tam-1] = '\0';
        fflush(stdin);
        vazio = buscar_vazio(clientes[*indice_cliente].endereco.bairro);
        if(vazio != 1)
        {
          break;
        }
        else
        {
          printf("Opção inválida\nTente novamente\n");
        }
      }
  
      //CEP 
      while(1)
      {
        printf("Digite o seu CEP:\n");
        fgets(clientes[*indice_cliente].endereco.cep, 10, stdin);
        tam = strlen(clientes[*indice_cliente].endereco.cep);
        clientes[*indice_cliente].endereco.cep[tam-1] = '\0';
        fflush(stdin);
        vazio = buscar_vazio(clientes[*indice_cliente].endereco.cep);
        if(vazio != 1)
        {
          break;
        }
        else
        {
          printf("Opção inválida\nTente novamente\n");
        }
      }
      

      //CIDADE 
      while(1)
      {
        printf("Digite a sua cidade:\n");
        fgets(clientes[*indice_cliente].endereco.cidade, 30, stdin);
        tam = strlen(clientes[*indice_cliente].endereco.cidade);
        clientes[*indice_cliente].endereco.cidade[tam-1] = '\0';
        fflush(stdin);
        vazio = buscar_vazio(clientes[*indice_cliente].endereco.cidade);
        if(vazio != 1)
        {
          break;
        }
        else
        {
          printf("Opção inválida\nTente novamente\n");
        }
      }

      //ESTADO 
      while(1)
      {
        printf("Digite a sigla do seu estado:\n");
        fgets(clientes[*indice_cliente].endereco.estado, 3, stdin);
        tam = strlen(clientes[*indice_cliente].endereco.estado);
        clientes[*indice_cliente].endereco.estado[tam-1] = '\0';
        fflush(stdin);
        vazio = buscar_vazio(clientes[*indice_cliente].endereco.estado);
        if(vazio != 1)
        {
          break;
        }
        else
        {
          printf("Opção inválida\nTente novamente\n");
        }
      }
  
            //CONTA
      printf("\tConta:\n\n");
      //LOGIN 
      while(fim!=1)
      {
        while(1)
        {
          printf("Digite o seu login:\n");
          fgets(login, 30, stdin);
          tam = strlen(login);
          login[tam-1] = '\0';
          fflush(stdin);
          vazio = buscar_vazio(login);
          if(vazio != 1)
          {
            break;
          }
          else
          {
            printf("Opção inválida\nTente novamente\n");
          }
        }
        resp2 = buscar_login_cliente(clientes, num, login);
        if(resp2 == -1)
        {
          printf("Login disponivel\n");
          strcpy(clientes[*indice_cliente].login_password.login, login);
          fim = 1;
        }
        else
        {
          printf("Login nao disponivel\nTente novamente\n");
        }
      }

      //SENHA
      while(1)
      {
        printf("Escolha uma senha para sua conta:\n");
        fgets(clientes[*indice_cliente].login_password.password, 9, stdin);
        tam = strlen(clientes[*indice_cliente].login_password.password);
        clientes[*indice_cliente].login_password.password[tam-1] = '\0';
        fflush(stdin);
        vazio = buscar_vazio(clientes[*indice_cliente].login_password.password);
          if(vazio != 1)
          {
            break;
          }
          else
          {
            printf("Opção inválida\nTente novamente\n");
          }
      }
        //STATUS
        clientes[*indice_cliente].dados.status = 1;

    clientes[*indice_cliente].compras_realizadas = 0;
    (*indice_cliente)++;
    }
    
  }
  else
  {
    printf("CPF ja cadastrado\n");
  }
}

/*//REMOVER CLIENTE 
int remover_cliente(int quant, Cliente clientes[])
{
  int resp, tam;
  char cpf[13];
  printf("Digite o CPF:");
  fgets(cpf, 13, stdin);
  tam = strlen(cpf);
  cpf[tam-1] = '\0';
  limpar_buffer();
  resp = buscar_cliente(quant, clientes, cpf);
  if(resp !=-1)
  {
    int resp2;
    printf("Cliente achado\nDeseja remover cliente?\n1-sim  2-nao\n");
    scanf("%i", &resp2);
    getchar();
    if(resp2==1)
    {
      if(clientes[resp].dados.status == 5)
      {
        clientes[resp].dados.status = 6;
        printf("Cliente removido\n");
        return 2;
      }
      else
      {
        printf("O cliente ja estava removido\n");
        return 0;
      }
    }
    else
    {
      printf("Remocao cancelada\n");
      return 1;
    }
  }
  else
  {
    printf("Cliente nao achado\n");
    return -1;
  }
}*/


/*//BUSCAR SENHA 
int buscar_senha(int quant, Cliente clientes[], char password[]) 
{ 
  for(int cont=0; cont<quant; cont++) 
  { 
    if(strcmp(password, clientes[cont].login_password.password)==0) 
    { 
      return 1; 
    } 
  } 
  return -1; */

//MUDANCA DE DADOS CLIENTE
void mudanca_cliente(int cont, Cliente clientes[], int num)
{
  int resp = 12;
  int tam, vazio, fim, resp2;
  while(resp!=0)
  {
     printf("Mudanca de dados:\nDseja mudar quais dados?\n0-Sair\n1-Nome\n2-Idade\n3-Rua\n4-Numero\n5-Complemento\n6-Bairro\n7-CEP\n8-Cidade\n9-Estado\n10-Login\n11-Senha\n");
  scanf("%i", &resp);
      //NOME 
      if(resp == 1)
      {
        while(1)
      {
        printf("Digite o seu nome:\n");
        fgets(clientes[cont].dados.nome, 50, stdin);
        tam = strlen(clientes[cont].dados.nome);
        clientes[cont].dados.nome[tam-1] = '\0';
        fflush(stdin);
        vazio = buscar_vazio(clientes[cont].dados.nome);
        if(vazio != 1)
        {
          break;
        }
        else
        {
          printf("Opção inválida.\nTente novamente.\n");
        }
      }
      }
      else if(resp == 2)
      {
        //IDADE
      printf("Digite a sua idade:\n");
      scanf("%i", &clientes[cont].dados.idade);
      getchar();
      }
      else if(resp == 3)
      {
        //RUA
      while(1)
      {
        printf("Digite o nome da rua:\n");
        fgets(clientes[cont].endereco.rua, 100, stdin);
        tam = strlen(clientes[cont].endereco.rua);
        clientes[cont].endereco.rua[tam-1] = '\0';
        fflush(stdin);
        vazio = buscar_vazio(clientes[cont].endereco.rua);
        if(vazio != 1)
        {
          break;
        }
        else
        {
          printf("Opção inválida.\nTente novamente.\n");
        }
      }
      }
      else if(resp == 4)
      {
         //NUMERO 
      printf("Digite o numero da sua casa:\n");
      scanf("%i", &clientes[cont].endereco.numero);
      getchar();
      }
      else if(resp == 5)
      {
        //COMPLEMENTO 
      while(1)
      {
        printf("Digite o complemento:\n");
        fgets(clientes[cont].endereco.complemento, 100, stdin);
        tam = strlen(clientes[cont].endereco.complemento);
        clientes[cont].endereco.complemento[tam-1] = '\0';
        fflush(stdin);
        vazio = buscar_vazio(clientes[cont].endereco.complemento);
        if(vazio != 1)
        {
          break;
        }
        else
        {
          printf("Opção inválida.\nTente novamente.\n");
        }
      }
      }
      else if(resp == 6)
      {
        //BAIRRO 
      while(1)
      {
         printf("Digite o bairro:\n");
        fgets(clientes[cont].endereco.bairro, 30, stdin);
        tam = strlen(clientes[cont].endereco.bairro);
        clientes[cont].endereco.bairro[tam-1] = '\0';
        fflush(stdin);
        vazio = buscar_vazio(clientes[cont].endereco.bairro);
        if(vazio != 1)
        {
          break;
        }
        else
        {
          printf("Opção inválida.\nTente novamente.\n");
        }
      }
      }
      else if(resp == 7)
      {
        //CEP 
      while(1)
      {
        printf("Digite o seu CEP:\n");
        fgets(clientes[cont].endereco.cep, 10, stdin);
        tam = strlen(clientes[cont].endereco.cep);
        clientes[cont].endereco.cep[tam-1] = '\0';
        fflush(stdin);
        vazio = buscar_vazio(clientes[cont].endereco.cep);
        if(vazio != 1)
        {
          break;
        }
        else
        {
          printf("Opção inválida.\nTente novamente.\n");
        }
      }
      }
      else if(resp == 8)
      {
        //CIDADE 
      while(1)
      {
        printf("Digite a sua cidade:\n");
        fgets(clientes[cont].endereco.cidade, 30, stdin);
        tam = strlen(clientes[cont].endereco.cidade);
        clientes[cont].endereco.cidade[tam-1] = '\0';
        fflush(stdin);
        vazio = buscar_vazio(clientes[cont].endereco.cidade);
        if(vazio != 1)
        {
          break;
        }
        else
        {
          printf("Opção inválida.\nTente novamente.\n");
        }
      }
      }
      else if(resp == 9)
      {
        //ESTADO 
      while(1)
      {
        printf("Digite a sigla do seu estado:\n");
        fgets(clientes[cont].endereco.estado, 3, stdin);
        tam = strlen(clientes[cont].endereco.estado);
        clientes[cont].endereco.estado[tam-1] = '\0';
        fflush(stdin);
        vazio = buscar_vazio(clientes[cont].endereco.estado);
        if(vazio != 1)
        {
          break;
        }
        else
        {
          printf("Opção inválida.\nTente novamente.\n");
        }
      }
      }
      else if(resp == 10)
      {
        //LOGIN 
      while(fim!=1)
      {
        char login[13];
        while(1)
        {
          printf("Digite o seu login:\n");
          fgets(login, 30, stdin);
          tam = strlen(login);
          login[tam-1] = '\0';
          fflush(stdin);
          vazio = buscar_vazio(login);
          if(vazio != 1)
          {
            break;
          }
          else
          {
            printf("Opção inválida.\nTente novamente.\n");
          }
        }
        resp2 = buscar_login_cliente(clientes, num, login);
        if(resp2 == -1)
        {
          printf("Login disponivel\n");
          strcpy(clientes[cont].login_password.login, login);
          fim = 1;
        }
        else
        {
          printf("Login nao disponivel.\nTente novamente.\n");
        }
      }
      }
      else if(resp == 11)
      {
              //SENHA
      while(1)
      {
        printf("Escolha uma senha para sua conta:\n");
        fgets(clientes[cont].login_password.password, 9, stdin);
        tam = strlen(clientes[cont].login_password.password);
        clientes[cont].login_password.password[tam-1] = '\0';
        fflush(stdin);
        vazio = buscar_vazio(clientes[cont].login_password.password);
          if(vazio != 1)
          {
            break;
          }
          else
          {
            printf("Opção inválida.\nTente novamente.\n");
          }
      }
      }
      else if(resp == 0)
      {
        printf("Mudanca concluida.\n");
        break;
      }
      else
      {
        printf("Opção inválida.\nTente novamente.\n");
      }

}
  }
 


int main(void) 
{
  int resp, tam;
  char cpf[13], login[30];
  Cliente clientes[2];
  clientes[0].dados.status = 5;
  clientes[0].dados.idade = 18;
  printf("%i \n", clientes[0].dados.idade);
  strcpy(clientes[0].dados.nome, "Gabriela Lima");
  printf("%s \n", clientes[0].dados.nome);
  strcpy(clientes[0].dados.cpf, "71135929459");
  strcpy(clientes[0].login_password.login, "Gabriela");
  mudanca_cliente(0, clientes, 2);
  printf("%i \n", clientes[0].dados.idade);
  /*int* indice;
  *(indice) = 1;*/
  //printf("Digite seu cpf:");
  //scanf("%s", cpf);
  //getchar();
  //resp = buscar_cliente(2, clientes, cpf);
  /*printf("Digite seu login");
  fgets(login, 30, stdin);
  tam = strlen(login);
  login[tam-1] = '\0';

  resp = buscar_login(2, clientes, login);
  if(resp==-1)
  {
    printf("Login nao achado");
  }
  else
  {
    printf("Login achado");
  }*/
  //cadastro_cliente(clientes, 2, indice);
  /*resp = remover_cliente(2, clientes);
  printf("Nome: %s\nIdade: %i\nCPF: %s\nStatus: %i\n", clientes[0].dados.nome, clientes[0].dados.idade, clientes[0].dados.cpf, clientes[0].dados.status);
  resp = remover_cliente(2, clientes);
  printf("Nome: %s\nIdade: %i\nCPF: %s\nStatus: %i\n", clientes[0].dados.nome, clientes[0].dados.idade, clientes[0].dados.cpf, clientes[0].dados.status);*/

  /*printf("Digite algo");
  fgets(login, 30, stdin);
  tam = strlen(login);
  login[tam-1] = '\0';
  //limpar_buffer();*/
  /*printf("Digite o cpf:");
  fgets(cpf, 13, stdin);*/
}
