#pragma once
#include "Empleado.h"
class Secretario : public Empleado
{
private:
	int puesto;
	string num_fax;

public:
	static const int DIRECCION = 1;
	static const int ALTA_DIRECCION = 2;
	static const int GERENCIA = 3;
	static const int NINGUNA = 0;

	Secretario();
	Secretario(string nombre, string apellidos, string dni, string direccion, string telefono, double salario, int aniosLaboral, char tipo,
		int puesto, string num_fax);
	~Secretario();

	//setting y getting
	int getPuesto();
	string getNum_fax();
	void imprimir();
};

