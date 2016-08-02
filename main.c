#include <stdio.h>
#include "encad.h"

int main () {

   List *a;

   a = init();
   insere(10);
   insere(20);
   insere(30);
   imprime(a);
   removeFim(a);
   imprime(a);

}
