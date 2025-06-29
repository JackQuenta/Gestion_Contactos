/*1. Gestión de Contactos
Crear una estructura llamada contactoEmail que tenga las siguientes características: nombres completos, sexo, edad,
teléfono, email, nacionalidad
El programa debe constar de un menú que permita:
a) Agregar un contacto
b) Eliminar un contacto
c) Mostrar listado general de contactos registrados hasta ese momento.
d) Mostrar listado de contactos existentes, ordenado por servidor de correo de las cuentas (gmail.com, outlook.com,
yahoo.com, etc.)
e) Salir del programa
El programa debe mantenerse en ejecución continuamente hasta que usuario indique que desea salir del mismo*/

#include <iostream>
#include <string>
using namespace std;

struct contactoEmail {
    string nombreCompleto;
    char sexo;
    int edad;
    string telefono;
    string email;
    string nacionalidad;
};

contactoEmail contactos[100];
int numContactos = 0;

void agregarContacto() {
    cout << "\n=== AGREGAR CONTACTO ===" << endl;
    cin.ignore();
    cout << "Nombre completo: ";
    getline(cin, contactos[numContactos].nombreCompleto);
    
    cout << "Sexo (m para masculino/f para femenino): ";
    cin >> contactos[numContactos].sexo;
    
    cout << "Edad: ";
    cin >> contactos[numContactos].edad;
    
    cin.ignore();
    cout << "Telefono: ";
    getline(cin, contactos[numContactos].telefono);
    
    cout << "Email: ";
    getline(cin, contactos[numContactos].email);
    
    cout << "Nacionalidad: ";
    getline(cin, contactos[numContactos].nacionalidad);
    
    numContactos++;
    cout << "Contacto agregado exitosamente!" << endl;
}



int main() {
	int salir = 0;
    do {
        cout << "\n=== GESTION DE CONTACTOS ===" << endl;
        cout << "a) Agregar un contacto" << endl; 
		cout << "b) Salir del programa" << endl;
		char op;
        cin >> op;
        
        switch(op) {
            case 'a':
                agregarContacto();
                break;
            case 'b':
                salir = 1;
                break;
            default:
                cout << "Opcion no valida." << endl;
        }
    } while(salir == 0);
    
    return 0;
}
