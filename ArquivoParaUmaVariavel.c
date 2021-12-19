#include <stdio.h>
#include <string.h>

typedef struct Pessoa
{
  char nome[30];
  int idade;
}Pessoa;

void salvar(char* caminho)
{
  FILE* arquivo = fopen(caminho, "w");

  Pessoa p;
  strcpy(p.nome, "pericles");
  p.idade = 31;

  fwrite(&p, sizeof(Pessoa), 1, arquivo);

  fclose(arquivo);
}

void ler(char* caminho, Pessoa* pessoa)
{
  FILE* arquivo = fopen(caminho, "r");

  fread(pessoa, sizeof(Pessoa), 1, arquivo);

  fclose(arquivo);
}

int main(void) {
  
  Pessoa p;

  ler("pessoas.txt", &p);
  printf("%s possui %i anos", p.nome, p.idade);
  //salvar("pessoas.txt");

  

  return 0;
}
