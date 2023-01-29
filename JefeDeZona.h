#pragma once
#include "Empleado.h"
#include "Secretario.h"
#include "Vendedor.h"
#include "Coche.h"

class JefeDeZona : public Empleado
{
private:
	bool despacho;
	//Secretario* secretario;
	Coche* carro;
	Vendedor** vendedores;
public:
	JefeDeZona();
	JefeDeZona(string nombre, string apellidos,
		string dni, string direccion,
		string telefono, double salario, char tipo,
		bool despacho, Secretario* secretario, Coche* carro, Vendedor** vendedores);
	~JefeDeZona();

	void cambiarSecretario();
	void cambiarCoche();
	void agregarVendedor(Vendedor* vendedor);
	void eliminarVendedor(string dni);
	void imprimir();
};

