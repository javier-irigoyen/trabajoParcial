#include "JefeDeZona.h"
#include "Coche.h"
//JefeDeZona::JefeDeZona() : Empleado() {}
JefeDeZona::JefeDeZona(string nombre, string apellidos,
	string dni, string direccion,
	string telefono, double salario, char tipo, int aniosLaboral,
	bool despacho, Secretario* secretario, Coche* carro) : Empleado(nombre, apellidos, dni,
		direccion, telefono, aniosLaboral, salario, tipo) {
	this->bonoAnual = 20;
	this->numeroVendedores = 0;
	this->vendedores = nullptr;
	this->secretario = secretario;
	this->carro = carro;

	if (despacho == true || despacho == false)
	{
		this->despacho = despacho;
	}
	else {
		cout << "Error: El despacho ingresado no es valido. Se asignara como NO";
		this->despacho = false;
	}
}
JefeDeZona::~JefeDeZona() {
	if (this->vendedores != nullptr) {
		delete[] this->vendedores;
	}
	if (this->carro != nullptr) {
		delete[] this->carro;
	}
	if (this->secretario != nullptr) {
		delete[] this->secretario;
	}
}

Coche* JefeDeZona::getCarro() { return this->carro; }
Secretario* JefeDeZona::getSecretario() { return this->secretario; }

void JefeDeZona::cambiarSecretario(Secretario* secretario) { this->secretario = secretario; }
void JefeDeZona::cambiarCarro(Coche* carro) { this->carro = carro; }

void JefeDeZona::agregarVendedor(Vendedor* aVendedor) {
	Vendedor** Aux = new Vendedor * [this->numeroVendedores + 1];  // se define un arreglo temporal
	for (int i = 0; i < this->numeroVendedores; i++)   // la primera vez no ingresa al ciclo porque el arreglo est  vac o
		Aux[i] = this->vendedores[i];  // a partir de la segunda vez el ciclo permite recorrer el arreglo hasta el final
	if (this->vendedores != nullptr) {
		delete[] this->vendedores;
	}// liberar la memoria utilizada por el anterior vector
	Aux[this->numeroVendedores] = aVendedor; // se agrega Numero al final del arreglo
	this->numeroVendedores++;  	// El tama o del arreglo se incrementa en 1 
	this->vendedores = Aux; //return Aux;}
}
void JefeDeZona::eliminarVendedor(string dni) {
	Vendedor** v_aux = new Vendedor * [this->numeroVendedores - 1];
	int i = 0;
	//copiar elementos a la izquierda del vendedor a eliminar
	for (; i < this->numeroVendedores; i++) {
		if (vendedores[i]->getDni() == dni)
			break;
		if (i == this->numeroVendedores - 1) {//no se encontro al vendedor
			delete[] v_aux;
			cout << "Error: No se encontro el DNI del vendedor ingresado" << endl;
			return;
		}
		v_aux[i] = vendedores[i];
	}
	//copiar elementos a la derecha
	for (; i < this->numeroVendedores - 1; i++) {
		v_aux[i] = vendedores[i + 1];
	}
	if (this->vendedores != nullptr) {
		delete[] this->vendedores;
	}
	this->numeroVendedores--; // El tama o del arreglo se resta en 1 
	this->vendedores = v_aux; //return Aux;
}

void JefeDeZona::imprimir() {
	cout << endl;
	cout << "Jefe de Zona" << endl;
	cout << "===========================================================" << endl;
	Empleado::imprimir();
	cout << "Despacho:                    \t" << (this->despacho ? "SI" : "NO") << endl;
	cout << " Secretario a su cargo:" << endl;
	if (this->secretario != nullptr)
	{
		cout << "  DNI:\t\t\t" << this->secretario->getDni() << endl;
		cout << "  Nombre:\t\t\t" << this->secretario->getNombre() << endl;
	}
	else
	{
		cout << "  Ninguno" << endl;
	}
	cout << " Vendedores a su cargo:" << endl;
	if (this->vendedores != nullptr)
	{
		for (int i = 0; i < this->numeroVendedores; i++)
		{
			cout << "  DNI:\t\t\t" << this->vendedores[i]->getDni() << endl;
			cout << "  Nombre:\t\t\t" << this->vendedores[i]->getNombre() << endl;
		}
	}
	else
	{
		cout << "  Ninguno" << endl;
	}

	cout << " Auto:" << endl;
	if (this->carro != nullptr)
	{
		cout << "Matricula:                   \t" << this->carro->getMatricula() << endl;
		cout << "Marca:                       \t" << this->carro->getMarca() << endl;
		cout << "Modelo:                      \t" << this->carro->getModelo() << endl;
	}
	else
	{
		cout << "  Ninguno" << endl;
	}
}