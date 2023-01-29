#include "Empleado.h"
Empleado::Empleado() : Persona() {}
Empleado::~Empleado() {}
Empleado::Empleado(string nombre, string apellidos, string dni, string direccion, string telefono, double salario, char tipo)
	: Persona(nombre, apellidos, dni, direccion, telefono) {
	if (salario >= 12000)
	{
		this->salario = salario;
	}

	else {
		cout << "Error: El salario ingresado es menor al sueldo minimo anual. Se le asignara el sueldo minimo anual (12000)\n";
		this->salario = 12000;
	}

	if (tipo == Empleado::SECRETARIO ||
		tipo == Empleado::VENDEDOR ||
		tipo == Empleado::JEFE_ZONA)
	{
		this->tipo = tipo;
	}
}
char Empleado::getTipo() { return this->tipo; }

double Empleado::calcularSalario() {
	double s = this->salario;
	if (this->tipo == SECRETARIO)
		return s *= 1.05;
	if (this->tipo == VENDEDOR)
		return s *= 1.1;
	if (this->tipo == JEFE_ZONA)
		return s *= 1.2;
}

void Empleado::imprimir() {
	cout << "Nombre(s):                   \t" << this->nombre << endl;
	cout << "Apellido(s):                 \t" << this->apellidos << endl;
	cout << "DNI:                         \t" << this->dni << endl;
	cout << "Direccion:                   \t" << this->direccion << endl;
	cout << "Telefono:                    \t" << this->telefono << endl;
	cout << "Salario Anual Inicial:    \tS/." << this->salario << endl;
	cout << "Salario Anual Con Bonus:  \tS/." << calcularSalario() << endl;
}