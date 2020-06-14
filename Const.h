#pragma once
#include "Clases.h"
using namespace std;

LinkedList::LinkedList(int p_nuevo_elemento) {//Creacion del primer nodo
    head = new Node(p_nuevo_elemento);
    size = 1;
}
LinkedList::~LinkedList() {
    Node* cursor;
    while (head) {
        cursor = head;
        cursor = head->accederNext();
        delete cursor;
    }
}
void LinkedList::Insert(int p_nuevo_elemento) {
    Node* nuevoNodo = new Node(p_nuevo_elemento);
    if (Vazia())
        head = nuevoNodo;
    else {
        Node* cursor = head;
        while (cursor->accederNext())
            cursor = cursor->accederNext();
        cursor->modificarNext(nuevoNodo);
    }
    size++;
}

void  LinkedList::remove(int  posIndice) {
    if ((posIndice < 0) || (posIndice >= size))
        printf("\nFuera de Rango");
    Node* auxborrar = head;
    if (posIndice != 0) {
        for (int i = 0; i < posIndice - 1; i++) {
            auxborrar = auxborrar->accederNext();
        }
        Node* nodoEliminar = auxborrar->accederNext();
        auxborrar->modificarNext(nodoEliminar->accederNext());
        auxborrar = nodoEliminar;
    }
    else
        head = head->accederNext();
    delete auxborrar;
    size--;
}

void LinkedList::Mostrar() {
    Node* cursor = head;
    for (int i = 0; i <= size - 1; i++) {
        cout<<cursor->AccederElem()<<",";
        cursor = cursor->accederNext();
    }
}


