#pragma once
#include "Persona.h"
class Empleado : public Persona
{
protected:
	double salario;
	char tipo;
	double nSalario;
	double bonoAnual;
	int aniosLaboral;
public:
	static const char SECRETARIO = 'a';
	static const char VENDEDOR = 'b';
	static const char JEFE_ZONA = 'c';
	Empleado();
	Empleado(string nombre, string apellidos, string dni, string direccion, string telefono, int aniosLaboral, double salario, char tipo);
	~Empleado();

	char getTipo();
	int getAniosLaboral();
	double getSalario();

	virtual double calcularSalario();
	virtual void imprimir();
};