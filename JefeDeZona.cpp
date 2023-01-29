#include "JefeDeZona.h"
JefeDeZona::JefeDeZona() : Empleado() {}
JefeDeZona::JefeDeZona(string nombre, string apellidos,
	string dni, string direccion,
	string telefono, double salario, char tipo,
	bool despacho, Secretario* secretario, Coche* carro, Vendedor** vendedores) : Empleado(nombre, apellidos, dni,
		direccion, telefono, salario, tipo) {
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

void JefeDeZona::cambiarSecretario() {}
void JefeDeZona::cambiarCoche() {}
void JefeDeZona::agregarVendedor(Vendedor* vendedor) {}
void JefeDeZona::eliminarVendedor(string dni) {}
void JefeDeZona::imprimir() {
	cout << endl;
	cout << "Jefe de Zona" << endl;
	cout << "===========================================================" << endl;
	Empleado::imprimir();
	cout << "Despacho:                    \t" << (this->despacho ? "SI" : "NO") << endl;

	cout << "Auto:" << endl;
	cout << "Matricula:                 \t" << this->carro->getMatricula() << endl;
	cout << "Marca:                     \t" << this->carro->getMarca() << endl;
	cout << "Modelo:                    \t" << this->carro->getModelo() << endl;
}
