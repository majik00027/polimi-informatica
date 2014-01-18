#include <stdio.h>

struct s_elem{
    char codice;
    int quantita;
    struct s_elem * next;
};

typedef struct s_elem s_elem;

void stampalista(s_elem * root){
    while(root != NULL){
        printf("[%c,%d]->", root->codice, root->quantita);
        root = root->next;}
    printf("NULL");
    return;
}

s_elem * inseriscitesta(s_elem * root, char c, int q){
    s_elem * new_el;
    new_el = malloc(sizeof(s_elem)); //suppose enough memory
    new_el->codice = c;
    new_el->quantita = q;
    new_el->next = root;
    return new_el;
}

s_elem * inseriscicoda(s_elem * root, char c, int q){
    s_elem * new_el;
    new_el = malloc(sizeof(s_elem)); //suppose enough memory
    new_el->codice = c;
    new_el->quantita = q;
    new_el->next = NULL;
    s_elem * temp = root;
    if (temp == NULL)
        return new_el;
    while(temp->next != NULL)
        temp = temp->next;
    temp->next = new_el;
    return root;
}

s_elem * cercael(s_elem * root, char c){
    while(root != NULL){
        if (root->codice == c)
            return root;
        root = root->next;
    }
    return NULL;
}

s_elem * filtralista(s_elem * root, char c){
    if (root == NULL)
        return NULL;
    if (root->codice == c)
        return filtralista(root->next, c);
    else
        return inseriscitesta(filtralista(root->next, c), root->codice, root->quantita);
}

void dividilista(s_elem * root, s_elem ** pari, s_elem ** dispari){
    s_elem *tmp;
    s_elem *testa_pari, *testa_dispari;
    while(root != NULL){
        tmp = root;
        root = root->next;
        if ( ( (tmp->quantita) % 2 ) == 0 ){
                printf("pari %d \n", tmp->quantita);
            if (*pari != NULL){
                (*pari)->next = tmp;
                (*pari) = (*pari)->next;}
            else{
                *pari = tmp;
                testa_pari = tmp;}
            }
        else {
            printf("dispari %d \n", tmp->quantita);
            if (*dispari != NULL){
                (*dispari)->next = tmp;
                (*dispari) = tmp;}
            else{
                *dispari = tmp;
                testa_dispari = tmp;}
            }
    }
    (*pari)->next = NULL;
    (*dispari)->next = NULL;
    (*pari) = testa_pari;
    (*dispari) = testa_dispari;

}

int main(){
    s_elem * root, * pari, * dispari;
    root = NULL;
    pari = NULL;
    dispari = NULL;
    root = inseriscicoda(root, 'a', 1);
    root = inseriscicoda(root, 'b', 2);
    root = inseriscicoda(root, 'c', 3);
    root = inseriscicoda(root, 'd', 4);
    root = inseriscicoda(root, 'e', 5);
    root = inseriscicoda(root, 'f', 6);
    stampalista(root);
    printf("\n");
    dividilista(root, &pari, &dispari);
    printf("\n");
    stampalista(pari);
    printf("\n");
    stampalista(dispari);
    //stampalista(testa_dispari);
}
