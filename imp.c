#include <stdio.h>
#include <stdlib.h>
#include "encad.h"

/* Estrutura de lista Encadeada. Uma variável com o
 * tipo de dado que a lista armazena e um ponteiro
 * para o próximo item da lista. */

struct encad {
   int cel;
   struct encad *prox;
};

/* Variável que guarda a posição do último elemento
 * inserido na lista, evitando o uso de estruturas de
 * repetição nas funções. */

List *fim;

/* Função de início da lista, não recebe parâmetros
 * e retorna um tipo List. */

List *init (void) {
   List *new;
   new = malloc (sizeof(List));
   new->prox = NULL;
   fim = new;
   return new;
}

/* Função que insere um item no fim da lista. Recebe
 * como parâmetro o valor a ser inserido na lista. */

void insere (int b) {

   List *new = malloc (sizeof(List));
   fim->prox = new;
   new->cel = b;
   new->prox = NULL;
   fim = new;

}

/* Função recursiva que imprime os itens da lista e
 * recebe como parâmetro a variável com o início da
 * lista. */

void imprime (List *p) {
   if (p->prox == NULL) {
      printf("%d\n", p->cel);
      return;
   }

   printf("%d\n", p->cel);
   imprime (p->prox);
}
