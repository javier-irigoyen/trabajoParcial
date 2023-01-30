#include "Cliente.h"

Cliente::Cliente(string nombre, string apellidos, string dni, string direccion, string telefono)
	: Persona(nombre, apellidos, dni, direccion, telefono) {}
Cliente::~Cliente() {}
void Cliente::mostrar() {
	cout << "---------------------------------------------------------" << endl;
	cout << "Nombre(s):                   \t" << this->nombre << endl;
	cout << "Apellido(s):                 \t" << this->apellidos << endl;
	cout << "DNI:                         \t" << this->dni << endl;
	cout << "Direccion:                   \t" << this->direccion << endl;
	cout << "Telefono:                    \t" << this->telefono << endl;
}