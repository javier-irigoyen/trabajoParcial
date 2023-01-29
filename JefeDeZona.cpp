#include "JefeDeZona.h"
#include "Coche.h"
//JefeDeZona::JefeDeZona() : Empleado() {}
JefeDeZona::JefeDeZona(string nombre, string apellidos,
	string dni, string direccion,
	string telefono, double salario, char tipo,
	bool despacho, Secretario* secretario, Coche* carro, Vendedor* vendedor) : Empleado(nombre, apellidos, dni,
		direccion, telefono, salario, tipo) {
	this->secretario = secretario;
	this->carro = carro;
	this->vendedor = vendedor;

	if (despacho == true || despacho == false)
	{
		this->despacho = despacho;
	}
	else {
		cout << "Error: El despacho ingresado no es valido. Se asignara como falso";
		this->despacho = false;
	}
}
JefeDeZona::~JefeDeZona() {}

Coche* JefeDeZona::getCarro() { return this->carro; }
Secretario* JefeDeZona::getSecretario() { return this->secretario; }

void JefeDeZona::cambiarSecretario(Secretario* secretario) { this->secretario = secretario; }
void JefeDeZona::cambiarCarro(Coche* carro) { this->carro = carro; }

void JefeDeZona::agregarVendedor(Vendedor* vendedor) {}
void JefeDeZona::eliminarVendedor(string dni) {}

void JefeDeZona::imprimir() {
	cout << endl;
	cout << "Jefe de Zona" << endl;
	cout << "===========================================================" << endl;
	Empleado::imprimir();
	cout << "Despacho:                    \t" << (this->despacho ? "SI" : "NO") << endl;
	cout << "Secretario a su cargo:       \t" << this->secretario->getNombre() << " " << this->secretario->getApellidos() << endl;
	cout << "Vendedor a su cargo:         \t" << this->vendedor->getNombre() << " " << this->vendedor->getApellidos() << endl;
	cout << "Auto asignado:" << endl;
	cout << "Matricula:                   \t" << this->carro->getMatricula() << endl;
	cout << "Marca:                       \t" << this->carro->getMarca() << endl;
	cout << "Modelo:                      \t" << this->carro->getModelo() << endl;
}