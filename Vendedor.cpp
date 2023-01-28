#include "Vendedor.h"
#include <vector>
//Vendedor::Vendedor() : Empleado() {	
//}
Vendedor::Vendedor(string nombre, string apellidos,
	string dni, string direccion,
	string telefono, double salario, int aniosLaboral,
	Coche* carro, string telefonoMovil,
	int areaVenta, double porcentajeComisiones) : Empleado(nombre, apellidos,dni,
		direccion, telefono, aniosLaboral, salario) {
	this->telefonoMovil = telefonoMovil;
	this->bonoAnual = 10;
	this->numeroClientes = 0;
	this->clientes = nullptr;
	this->carro = carro;
	if (areaVenta == Vendedor::DIRECTOR_GERENCIAL ||
		areaVenta == Vendedor::GERENTE_COMERCIAL ||
		areaVenta == Vendedor::VENDEDOR ||
		areaVenta == Vendedor::ASISTENTE_COMERCIAL) {
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
void Vendedor::agregarCliente(Cliente* aCliente){
	Cliente** Aux = new Cliente * [this->numeroClientes + 1];  // se define un arreglo temporal
	for (int i = 0; i < this->numeroClientes; i++)   // la primera vez no ingresa al ciclo porque el arreglo est  vac o
		Aux[i] = this->clientes[i];  // a partir de la segunda vez el ciclo permite recorrer el arreglo hasta el final
	if (this->clientes != nullptr) {
		delete[] this->clientes;
	}// liberar la memoria utilizada por el anterior vector
	Aux[this->numeroClientes] = aCliente; // se agrega Numero al final del arreglo
	this->numeroClientes++;  	// El tama o del arreglo se incrementa en 1 
	this->clientes = Aux; //return Aux;
}
void Vendedor::eliminarCliente(string dni){
	Cliente** v_aux = new Cliente * [this->numeroClientes - 1];
	int i = 0;
	//copiar elementos a la izquierda del cliente a eliminar
	for (; i < this->numeroClientes; i++) {
		if (clientes[i]->getDni() == dni)
			break;
		if (i == this->numeroClientes - 1) {//no se encontro al cliente
			delete[] v_aux;
			cout << "Error: No se encontro al cliente del vendedor con el DNI ingresado" << endl;
			return;
		}
		v_aux[i] = clientes[i];
	}
	//copiar elementos a la derecha
	for (; i < this->numeroClientes - 1; i++) {
		v_aux[i] = clientes[i + 1];
	}
	if (this->clientes != nullptr) {
		delete[] this->clientes;
	}
	this->numeroClientes--; // El tama o del arreglo se resta en 1 
	this->clientes = v_aux; //return Aux;
}
void Vendedor::cambiarCoche(string matricula) {
	//vector<Coche*> coches_aux;
	//int i = 0;
	////copiar elementos a la izquierda del cliente a eliminar
	//for (; i < coches_aux.size(); i++) {
	//	if (carros[i]->getDni() == dni)
	//		break;
	//	if (i == this->numeroClientes - 1) {//no se encontro al cliente
	//		delete[] v_aux;
	//		cout << "Error: No se encontro al cliente del vendedor con el DNI ingresado" << endl;
	//		return;
	//	}
	//	v_aux[i] = clientes[i];
	//}
	////copiar elementos a la derecha
	//for (; i < this->numeroClientes - 1; i++) {
	//	v_aux[i] = clientes[i + 1];
	//}
	//if (this->clientes != nullptr) {
	//	delete[] this->clientes;
	//}
	//this->numeroClientes--; // El tama o del arreglo se resta en 1 
	//this->clientes = v_aux; //return Aux;
}
void Vendedor::imprimir() {
	cout << endl;
	cout << "Vendedor" << endl;
	cout << "============================================" << endl;
	Empleado::imprimir();
	cout << "Telefono Movil:\t\t" << this->telefonoMovil << endl;
	cout << "Area de Venta:\t\t";
	switch (this->areaVenta) {
	case DIRECTOR_GERENCIAL: cout << "Director Gerencial" << endl;
		break;
	case GERENTE_COMERCIAL: cout << "Gerente Comercial" << endl;
		break;
	case VENDEDOR: cout << "Vendedor" << endl;
		break;
	case ASISTENTE_COMERCIAL: cout << "Asistente Comercial" << endl;
		break;
	case NINGUNA: cout << "Ninguna" << endl;
		break;
	};
	cout << " Auto:" << endl;
	cout << "  Matricula:\t\t" << this->carro->getMatricula() << endl;
	cout << "  Marca:\t\t" << this->carro->getMarca() << endl;
	cout << "  Modelo:\t\t" << this->carro->getModelo() << endl;
}
