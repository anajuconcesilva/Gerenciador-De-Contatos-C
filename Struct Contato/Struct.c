#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Estrutura para um contato
typedef struct Contato {
    char nome[50];
    char celular[15];
    struct Contato* esquerda;
    struct Contato* direita;
} Contato;

// Protótipos de funções
Contato* inserir(Contato* raiz, Contato* novo);
Contato* buscar(Contato* raiz, const char* nome);
Contato* remover(Contato* raiz, const char* nome);
void ImprimirArvoreDeContatos(Contato* raiz);
void menu();