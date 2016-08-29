#include <stdio.h>
#include <stdlib.h>
#include "listaDupla.h"


int main () {
  ListaDupla l = inicializa();
  link aux, aux2;
  insereDepois(l, l->head, aux= novoNo(12, NULL, NULL));
  aux2 = novoNo(21, NULL, NULL);
  insereDepois(l,aux,aux2);
  aux = novoNo(42, NULL, NULL); 
  insereDepois(l, aux2, aux);
  imprime(l);
  imprimeReverso(l);
  printf ("\nremovendo %d \n", aux2->item);
  if((aux2 = buscar(l, 21) ) != NULL) 
    removeNo(aux2);
  imprime(l);
  destroiLista(l);
  
  link buscar(ListaDupla1, int  item){
    link t = l->head;
    while(t!=l->z){
      if(t->item==item)
      return t;
      t=t->next;
    }
    return Null;
    
  }
void ordenar(ListaDupla1)
Link aux,aux2;
aux=item;
for(aux=item;aux!=NULL;aux=aux->next){
aux2=(ListaDupla1*)malloc(1*sizeof(ListaDupla1));
if(aux -> t-> aux -> next -> t){
aux2->t = aux->t;
aux->t = aux->next->t;
aux->next->t = aux2->t;
}
free(aux2);
} 

  return 0;
}
