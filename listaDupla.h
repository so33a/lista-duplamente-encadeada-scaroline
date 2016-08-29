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
link encontrado(ListaDupla1);
void insereDepois (ListaDupla l, link x, link t);
void insereAntes (ListaDupla l, link x, link t);
link removeNo (link x);
void imprime(ListaDupla l);
void imprimeReverso(ListaDupla l);
void destroiLista(ListaDupla l);
void ordena();


link encontrado(ListaDupla1);
link Menor;
link t = l->head;
while(t!=l->z);
if(t->item < Menor);
Menor = t -> item;
Menor = t;
}
return = Menor;

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

#endif
