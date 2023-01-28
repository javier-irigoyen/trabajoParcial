#include "Empleado.h"
#include <math.h>
//Empleado::Empleado() : Persona(){
//}
Empleado::Empleado(string nombre, string apellidos, string dni, string direccion, string telefono, int aniosLaboral, double salario)
	: Persona(nombre, apellidos, dni, direccion, telefono) {
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
}

void Empleado::calcularSalario(double salario, double bonificacion, int aniosLaboral) {
	this->salario = salario * pow(1 + bonificacion / 100, aniosLaboral);
}
void Empleado::imprimir(){
	cout << "Nombre:\t\t\t" << this->nombre << endl;
	cout << "Apellidos:\t" << this->apellidos << endl;
	cout << "DNI:\t" << this->dni << endl;
	cout << "Direccion:\t" << this->direccion << endl;
	cout << "Telefono:\t" << this->telefono << endl;
	cout << "Anios Laboral:\t" << this->aniosLaboral << endl;
	cout << "Salario:\t" << this->salario << endl;
}