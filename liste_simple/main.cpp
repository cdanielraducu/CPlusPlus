#include <iostream>
#include <bits/stdc++.h>

using namespace std;

typedef struct nod{
    int x;
    nod *next;
}nod;

void inserareLaFinal(nod* &head, nod* &feet, int valoare) {
    nod *a = new nod();
    a->x = valoare;
    a->next = 0;

    if(head == 0){
        head = a;
        feet = a;
        return;
    }

    feet->next = a;
    feet = a;
    return;
}

void inserareLaInceput(nod* &head, nod* feet, int valoare) {
    nod *a = new nod();
    a->x = valoare;
    if(head == 0){
        a->next = 0;
        head = a;
        feet = a;
        return;
    }
    a->next = head;
    head = a;
    return;
}

void inserareOrdonata(nod* &head, nod* &feet, int valoare){
    nod *aux;
    aux = head;
    nod *a = new nod();
    a->x = valoare;

    if(head->x > a->x){
        a->next = head;
        head = a;
        return;
    }

    while(aux != NULL){
        if(aux->next->x > a->x){
            a->next= aux->next;
            aux->next = a;
            return;
        }
        aux = aux->next;
    }
}

void afisare(nod *head) {
     nod *a;
     a = head;
     while (a != NULL){
        cout<<a->x<<" ";
        a = a->next;
     }
}


int main()
{
    nod *head = new nod();
    nod *feet = new nod();
    head = feet = 0;
    inserareLaInceput(head,feet,5);
    inserareLaInceput(head,feet,3);
    inserareLaInceput(head,feet,2);
    inserareOrdonata(head,feet,4);
    inserareOrdonata(head,feet,1);
    inserareOrdonata(head,feet,6);
    afisare(head);

    return 0;
}
