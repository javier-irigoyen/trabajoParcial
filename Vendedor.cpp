#include "Vendedor.h"
#include <vector>
//Vendedor::Vendedor() : Empleado() {
//}
Vendedor::Vendedor(string nombre, string apellidos, string dni, string direccion, string telefono, double salario, char tipo,
	Coche* carro, string telefonoMovil,
	int areaVenta, double porcentajeComisiones) : Empleado(nombre, apellidos, dni,
		direccion, telefono, salario, tipo) {
	this->porcentajeComisiones = porcentajeComisiones;
	this->telefonoMovil = telefonoMovil;
	this->carro = carro;
	if (areaVenta == Vendedor::DIRECTOR_GERENCIAL ||
		areaVenta == Vendedor::GERENTE_COMERCIAL ||
		areaVenta == Vendedor::VENDEDOR ||
		areaVenta == Vendedor::ASISTENTE_COMERCIAL ||
		areaVenta == Vendedor::EJECUTIVO_COMERCIAL) {
		this->areaVenta = areaVenta;
	}
	else {
		cout << "Error: Area de Venta invalida. El Area de Venta sera establecida como NINGUNA." << endl;
		this->areaVenta = Vendedor::NINGUNA;
	}
}
Vendedor::~Vendedor() {
	if (this->clientes != nullptr) {
		delete[] this->clientes;
	}
	if (this->carro != nullptr) {
		delete[] this->carro;
	}
}

void Vendedor::agregarCliente(Cliente* aCliente) {}
void Vendedor::eliminarCliente(string dni) {}

Coche* Vendedor::getCarro() { return this->carro; }
void Vendedor::cambiarCoche(Coche* c) { this->carro = c; }

void Vendedor::imprimir() {
	cout << endl;
	cout << "Vendedor" << endl;
	cout << "===========================================================" << endl;
	Empleado::imprimir();
	cout << "Telefono Movil:              \t" << this->telefonoMovil << endl;
	cout << "Area de Venta:               \t";
	switch (this->areaVenta) {
	case DIRECTOR_GERENCIAL: cout << "Director Gerencial" << endl;
		break;
	case GERENTE_COMERCIAL: cout << "Gerente Comercial" << endl;
		break;
	case VENDEDOR: cout << "Vendedor" << endl;
		break;
	case ASISTENTE_COMERCIAL: cout << "Asistente Comercial" << endl;
		break;
	case EJECUTIVO_COMERCIAL: cout << "Ejecutivo Comercial" << endl;
		break;
	case NINGUNA: cout << "Ninguna" << endl;
		break;
	};
	cout << "Su Porcentaje De Comisiones: \t%" << this->porcentajeComisiones << endl;

	cout << "Auto asignado:" << endl;
	cout << "Matricula:                   \t" << this->carro->getMatricula() << endl;
	cout << "Marca:                       \t" << this->carro->getMarca() << endl;
	cout << "Modelo:                      \t" << this->carro->getModelo() << endl;
}