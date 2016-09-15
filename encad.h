#include <stdio.h>

struct encad {
   int cel;
   struct encad *prox;
};

typedef struct encad List;

List *fim;

List *init (void);
void insere (int b);
void imprimeR (List *p);
void imprime (List *p);
void removeFim (List *p);
void insereIdc (int n, int a, List *p);
void removeIni (List *p);
void insereIni (List *p, int n);
void removeIdc (int n, List *p);
void limpa (List *p);
int busca (List *p, int n);

