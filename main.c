#include <stdio.h>
#include "encad.h"

int main () {

   List *a;
   a = init();
   insere(10);
   insere(20);
   insere(30);
   insere(40);
   insere(50);
   insere(60);
   imprime(a);
   insereIdc(3,70,a);
   imprime(a);
   removeIdc(3,a);
   imprime(a);
   printf("%d\n",busca(a, 40));
   limpa(a);
   imprime(a);

   printf("\n");
}
