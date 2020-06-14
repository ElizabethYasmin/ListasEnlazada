#include "Clases.h"
#include "Const.h"
#include <conio.h>
void menu() {
    int dato;
    LinkedList* Lista = new LinkedList();
    int opc;
    do {
        cout << "MENU" << endl;
        cout << "1.Insertar" << endl;
        cout << "2.Quitar" << endl;
        cout << "3.Imprimir" << endl;
        cout << "Seleccione opcion->";cin >> opc;

        switch (opc)
        {
        case 1:cout << "Insertar un elemento->";
            cin >> dato;
            Lista->Insert(dato);
            system("pause");
            break;
        case 2:cout << "Eliminar un elemento de la posicion->";
            cin >> dato;
            Lista->remove(dato);
            system("pause");
            break;
        case 3:cout << "Imprimir lista->";
            Lista->Mostrar();
            system("pause");
            break;

        }
        system("cls");
    } while (opc != 4);
}
int main(){
    menu();
    return 0;
};