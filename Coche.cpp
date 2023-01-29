#include "Coche.h"

Coche::Coche() {
	this->matricula = "DEFAULT";
	this->marca = "DEFAULT";
	this->modelo = "DEFAULT";
};
Coche::Coche(string matricula, string marca, string modelo) {
	this->matricula = matricula;
	this->marca = marca;
	this->modelo = modelo;
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

string Coche::getMatricula() { return this->matricula; }
string Coche::getMarca() { return this->marca; }
string Coche::getModelo() { return this->modelo; }

void Coche::mostrar() {
	cout << "----------------------------------------------" << endl;
	cout << "|Matricula\t|Marca\t\t|Modelo" << endl;
	cout << getMatricula() << "\t\t|" << getMarca() << "\t\t|" << getModelo() << endl;
}