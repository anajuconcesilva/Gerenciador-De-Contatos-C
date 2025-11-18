# 🌳 Gerenciador de Contatos com Árvore Binária de Busca (C)

Um sistema de console desenvolvido em **C** para gerenciar contatos telefônicos utilizando uma **Árvore Binária de Busca (ABB)**. Os contatos são organizados e buscados de forma eficiente, tendo o **nome** como chave de ordenação.
***(ATIVIDADE DA DISCIPLINA DE ESTRUTURA E RECUPERAÇÃO DE DADOS DA PUC CAMPINAS)***

---

## ✨ Estrutura e Funcionalidades

Este projeto implementa as operações fundamentais de uma Árvore Binária de Busca para gerenciamento de dados:

### Estrutura de Dados

O projeto utiliza a seguinte estrutura para representar cada nó (contato) na árvore:

```c
typedef struct Contato {
    char nome[50]; // Chave de ordenação (key)
    char celular[15]; 
    struct Contato* esquerda;
    struct Contato* direita;
} Contato;
```

---

### Funcionalidades Implementadas
| Função                | Descrição                                                             |
| --------------------- | --------------------------------------------------------------------- |
| **Inserir_Contato**   | Insere um novo contato na árvore conforme ordem alfabética.           |
| **Buscar_Contato**    | Procura um contato pelo nome.                                         |
| **Remover_Contato**   | Remove um contato da árvore (três casos: folha, 1 filho ou 2 filhos). |
| **Imprimir_Contatos** | Lista todos os contatos em ordem alfabética (percurso in-order).      |

---

### 📜 Menu Interativo
1. Adicionar contato
2. Buscar contato
3. Remover contato
4. Listar contatos
5. Sair

---
