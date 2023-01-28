#pragma once
#include "Persona.h"
class Empleado : public Persona
{
protected:
	double salario;
	double nSalario;
	double bonoAnual;
	int aniosLaboral;
public:
	Empleado();
	Empleado(string nombre, string apellidos, string dni, string direccion, string telefono, int aniosLaboral, double salario);
	double calcularSalario();
	virtual void imprimir();
};