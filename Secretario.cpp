#include "Secretario.h"

Secretario::Secretario() {
	this->puesto = Secretario::NINGUNA;
	this->num_fax = "";
}
Secretario::Secretario(string nombre, string apellidos, string dni, string direccion, string telefono, double salario, char tipo,
	int puesto, string num_fax) : Empleado(nombre, apellidos, dni,
		direccion, telefono, salario, tipo) {
	this->puesto = puesto;
	this->num_fax = num_fax;

	if (puesto == Secretario::DIRECCION || puesto == Secretario::ALTA_DIRECCION
		|| puesto == Secretario::GERENCIA) {
		this->puesto = puesto;
	}
	else {
		cout << "Error: Puesto no valido. El puesto se establecera como NINGUNA." << endl;
		this->puesto = Secretario::NINGUNA;
	}
}
Secretario::~Secretario() {}
int Secretario::getPuesto() {
	return this->puesto;
}
string Secretario::getNum_fax() {
	return this->num_fax;
}
void Secretario::imprimir() {
	cout << endl;
	cout << " Secretario" << endl;
	cout << "===========================================================" << endl;
	Empleado::imprimir();
	cout << "Numero de Fax:               \t" << this->num_fax << endl;
	cout << "Puesto:                      \t";
	switch (this->puesto) {
	case Secretario::DIRECCION: cout << "Secretario de Direccion" << endl;
		break;
	case Secretario::ALTA_DIRECCION: cout << "Secretario de alta direccion" << endl;
		break;
	case Secretario::GERENCIA: cout << "Secretario de gerencia" << endl;
		break;
	case Secretario::NINGUNA: cout << "No tiene puesto" << endl;
		break;
	};
}