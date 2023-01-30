#include "Coche.h"
Coche::Coche() {
	this->matricula = "DEFAULT";
	this->marca = "DEFAULT";
	this->modelo = "DEFAULT";
};
Coche::Coche(string matricula, string marca, string modelo, bool asignado) {
	this->matricula = matricula;
	this->marca = marca;
	this->modelo = modelo;
	this->asignado = asignado;
}
Coche::~Coche() {}

void Coche::setMatricula(string matricula) {
	this->matricula = matricula;
}
void Coche::setMarca(string marca) {
	this->marca = marca;
}
void Coche::setModelo(string modelo) {
	this->modelo = modelo;
}

void Coche::setAsignado(bool asignado) { this->asignado = asignado; }
bool Coche::getAsignado() { return this->asignado; }

string Coche::getMatricula() { return this->matricula; }
string Coche::getMarca() { return this->marca; }
string Coche::getModelo() { return this->modelo; }

void Coche::mostrar() {
	cout << "--------------------------------------------------------------------" << endl;
	cout << "|Matricula\t|Marca\t\t|Modelo\t\t|Asignacion" << endl;
	cout << getMatricula() << "\t\t|" << getMarca() << "\t\t|" << getModelo();
	if (getAsignado() == true)
		cout << "\t\t|TOMADO" << endl;
	else
		cout << "\t\t|DISPONIBLE" << endl;
}
