#include "Empleado.h"
#include <math.h>
Empleado::Empleado() : Persona() {
	this->bonoAnual = 0;
	this->nSalario = 0;
	this->aniosLaboral = 0;
	this->salario = 0;
	this->tipo = NULL;
}
Empleado::~Empleado() {}
Empleado::Empleado(string nombre, string apellidos, string dni, string direccion, string telefono, int aniosLaboral, double salario, char tipo)
	: Persona(nombre, apellidos, dni, direccion, telefono) {
	this->bonoAnual = 0;
	this->nSalario = 0;
	if (aniosLaboral >= 0 && aniosLaboral <= 70)
	{
		this->aniosLaboral = aniosLaboral;
	}
	else {
		cout << "Error: Los anios laborales ingresados no son validos. Se le asignara 0 anio laboral.";
		this->aniosLaboral = 0;
	}

	if (salario >= 1000)
	{
		this->salario = salario;
	}
	else {
		cout << "Error: El salario ingresado no es menor al sueldo minimo. Se le asignara el sueldo minimo (1000)";
		this->salario = 1000;
	}

	if (tipo == Empleado::SECRETARIO ||
		tipo == Empleado::VENDEDOR ||
		tipo == Empleado::JEFE_ZONA)
	{
		this->tipo = tipo;
	}
}

char Empleado::getTipo() { return this->tipo; }
int Empleado::getAniosLaboral() { return this->aniosLaboral; }
double Empleado::getSalario() { return this->salario; }

double Empleado::calcularSalario() {
	return nSalario = this->salario * pow(1 + this->bonoAnual / 100, this->aniosLaboral);
}

void Empleado::imprimir() {
	cout << "Nombre(s):                     \t" << getNombre() << endl;
	cout << "Apellido(s):                   \t" << getApellidos() << endl;
	cout << "DNI:                           \t" << getDni() << endl;
	cout << "Direccion:                     \t" << getDireccion() << endl;
	cout << "Telefono:                      \t" << getTelefono() << endl;
	cout << "Anios Laboral:                 \t" << getAniosLaboral() << endl;
	cout << "Salario Inicial:    \tS/." << getSalario() << endl;
	cout << "Salario Anual actual Con Bonus:\tS/." << calcularSalario() << endl;
}