#ifndef LISTA_DUPLA_H
#define LISTA_DUPLA_H

typedef struct node * link;
struct node {
  int item;
  link next;
  link prev;
};

typedef struct {
   link head;
   link z;
} * ListaDupla;

ListaDupla inicializa();
link novoNo (int item, link prev, link next);
link buscar(ListaDupla l, int item);
void insereDepois (ListaDupla l, link x, link t);
void insereAntes (ListaDupla l, link x, link t);
link removeNo (link x);
void imprime(ListaDupla l);
void imprimeReverso(ListaDupla l);
void destroiLista(ListaDupla l);

link encontrado(Lista Dupla1, link Menor);
link t = l->head;
while(t!=l->z);
if(t->item < Menor);
Menor = t -> item;
Menor = t;
}
return = Menor;
#endif
