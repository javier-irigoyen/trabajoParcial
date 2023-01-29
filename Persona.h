#pragma once
#include<iostream>
#include<string>
using namespace std;
class Persona
{
protected:
	string nombre;
	string apellidos;
	string dni;
	string direccion;
	string telefono;
public:
	Persona();
	Persona(string nombre, string apellidos, string dni, string direccion, string telefono);
	~Persona();

	void setNombre(string nombre);
	void setApellidos(string apellidos);
	void setDni(string dni);
	void setDireccion(string direccion);
	void setTelefono(string telefono);

	string getNombre();
	string getApellidos();
	string getDni();
	string getDireccion();
	string getTelefono();
};
