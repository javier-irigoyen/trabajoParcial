#pragma once
#include "Empleado.h"
#include "Secretario.h"
#include "Vendedor.h"
#include "Coche.h"

class JefeDeZona : public Empleado
{
private:
	bool despacho;
	Secretario* secretario;
	Coche* carro;
	Vendedor** vendedores;
	int numeroVendedores;
public:
	JefeDeZona();
	JefeDeZona(string nombre, string apellidos,
		string dni, string direccion,
		string telefono, double salario, char tipo, int aniosLaboral,
		bool despacho, Secretario* secretario, Coche* carro);
	~JefeDeZona();
	Coche* getCarro();
	Secretario* getSecretario();
	void cambiarSecretario(Secretario* secretario);
	void cambiarCarro(Coche* carro);
	void agregarVendedor(Vendedor* vendedor);
	void eliminarVendedor(string dni);
	void imprimir();
};
