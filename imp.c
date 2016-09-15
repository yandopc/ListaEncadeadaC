#include <stdio.h>
#include <stdlib.h>
#include "encad.h"

List *init (void) {
   List *new;
   new = malloc (sizeof(List));
   new->prox = NULL;
   fim = new;
   return new;
}

void insere (int b) {
   List *new = malloc (sizeof(List));
   fim->prox = new;
   new->cel = b;
   new->prox = NULL;
   fim = new;
}

void imprimeR (List *p) {
   if (p->prox == NULL) {
      printf("%d ", p->cel);
      return;
   }
   printf("%d ", p->cel);
   imprime (p->prox);
}

void removeFim (List *p) { 
   if (p->prox->prox == NULL) { 
      List *aux = fim;
      p->prox = NULL;
      fim = p->prox;
      free(aux);
      return;     
   }      
   removeFim (p->prox);   
}

void removeIni (List *p) {
   List *aux = p->prox;
   p->prox = p->prox->prox;
   free(aux);
}

void insereIni (List *p, int n) {
   List *new = malloc (sizeof(List));
   new->cel = n;
   new->prox = p->prox;
   p->prox = new;
}

void imprime (List *p) {
   printf("[ ");
   p = p->prox;
   while (p->prox != NULL) {
      printf("%d ", p->cel);
      p = p->prox;
   }
   printf("]\n");
}

void insereIdc (int n, int a, List *p) {
   for (int i = 0; i < n-1; i++, p = p->prox);
   List *new = malloc(sizeof(List));
   new->cel = a; 
   new->prox = p->prox;
   p->prox = new;
}

void removeIdc (int n, List *p) {
   for (int i = 0; i < n-1; i++, p = p->prox);
   List *aux = p->prox; 
   p->prox = p->prox->prox;
   free(aux);
}

void limpa (List *p) {
   List *a; p = p->prox;
   while (p->prox != NULL) {
      removeIni(p);
   }
}

int busca (List *p, int n) {
   while (p->prox != NULL) {
      if (p->cel == n) return p->cel;
      p = p->prox;
   }
   return -1;
}

