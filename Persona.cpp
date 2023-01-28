#include "Persona.h"
Persona::Persona(){}
Persona::Persona(string nombre, string apellidos, string dni, string direccion, string telefono){
	this->nombre = nombre;
	this->apellidos = apellidos;
	this->dni = dni;
	this->direccion = direccion;
	this->telefono = telefono;
}
Persona::~Persona(){}

void Persona::setNombre(string nombre) { this->nombre = nombre; }
void Persona::setApellidos(string apellidos){ this->apellidos = apellidos; }
void Persona::setDni(string dni){ this->dni = dni; }
void Persona::setDireccion(string direccion){ this->direccion = direccion; }
void Persona::setTelefono(string telefono){ this->telefono = telefono; }

string Persona::getNombre() { return this->nombre; }
string Persona::getApellidos(){ return this->apellidos; }
string Persona::getDni(){ return this->dni; }
string Persona::getDireccion(){ return this->direccion; }
string Persona::getTelefono(){ return this->telefono; }