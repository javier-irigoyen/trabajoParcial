#pragma once
#include "Empleado.h"
#include "Coche.h"
#include "Cliente.h"
class Vendedor : public Empleado
{
private:
	Coche* carro;
	string telefonoMovil;
	int areaVenta;
	Cliente** clientes;
	int numeroClientes;
	double porcentajeComisiones;

public:
	static const int DIRECTOR_GERENCIAL = 5;
	static const int GERENTE_COMERCIAL = 4;
	static const int EJECUTIVO_COMERCIAL = 3;
	static const int VENDEDOR = 2;
	static const int ASISTENTE_COMERCIAL = 1;
	static const int NINGUNA = 0;

	Vendedor();
	Vendedor(string nombre, string apellidos,
		string dni, string direccion,
		string telefono, double salario, int aniosLaboral,
		Coche* carro, string telefonoMovil,
		int areaVenta, double porcentajeComisiones);
	~Vendedor();
	void agregarCliente(Cliente* aCliente);
	void eliminarCliente(string dni);
	void cambiarCoche(string matricula);
	void imprimir();
};

