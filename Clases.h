#pragma once
#include <iostream>

class Node {
protected:
    int elem;
    Node* next;
public:
    Node(int dato) {
        elem = dato;
        next = NULL; 
    };
    ~Node() {};

    //Acceso y modificacion de elem
    int AccederElem() {
        return elem;
    };
    void modificarElem(int dato) { 
        elem = dato;
    };

    //Acceso y modificacion de Next
    Node* accederNext() {
        return next;
    };
    void modificarNext(Node* siguiente){
        next = siguiente;
    };
};





class LinkedList {
private:
    Node *head;
    int size;
public:
    LinkedList() {
        head = NULL;
        size = 0; 
    }; 
    LinkedList(int p_nuevo_elemento);  //Creacion de un nuevo elemento *
    ~LinkedList(); //Destructor
    int Size() { //Retorna(envia) el tamaño del Nodo->0
        return size;
    };
    bool Vazia() { 
        return !size; 
    };
    void Insert(int p_nuevo_elemento);
    void remove(int posIndice);
    void Mostrar();
};

