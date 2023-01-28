#pragma once
#include "Persona.h"
class Empleado : public Persona
{
protected:
	double salario;
	double bonificacion;
	int aniosLaboral;
public:
	//Empleado();
	Empleado(string nombre, string apellidos, string dni, string direccion, string telefono, int aniosLaboral, double salario);
	void calcularSalario(double salario, double bonificacion, int aniosLaboral);
	virtual void imprimir();
};