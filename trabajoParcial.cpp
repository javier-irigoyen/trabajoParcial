#include <iostream>
#include <vector>
#include "Persona.h"
#include "Empleado.h"
#include "Secretario.h"
#include "Vendedor.h"
#include "Cliente.h"
#include "Coche.h"
using namespace std;

int main()
{
    vector<Empleado*> empleados;
    vector<Vendedor*> vendedores;
    vector<Coche*> carros;

    //carros
    Coche* carro1 = new Coche("AXB358", "Honda","Civic");
    Coche* carro2 = new Coche("QWE314", "Toyota", "Corolla");
    Coche* carro3 = new Coche("AFE324", "Nissan", "Versa");
    Coche* carro4 = new Coche("FDW324", "Audi", "A3 Sedan");
    Coche* carro5 = new Coche("GDW134", "BMW", "X3");
    Coche* carro6 = new Coche("CDA245", "Chevrolet", "Joy Sedan");
    Coche* carro7 = new Coche("AXB359", "Honda", "Civic");
    Coche* carro8 = new Coche("QWE315", "Toyota", "Corolla");
    Coche* carro9 = new Coche("AFE326", "Nissan", "Versa");
    Coche* carro10 = new Coche("FDW325", "Audi", "A3 Sedan");
    Coche* carro11 = new Coche("GDW135", "BMW", "X3");
    Coche* carro12 = new Coche("CDA246", "Chevrolet", "Joy Sedan");

    carros.push_back(carro1);
    carros.push_back(carro2);
    carros.push_back(carro3);
    carros.push_back(carro4);
    carros.push_back(carro5);
    carros.push_back(carro6);
    carros.push_back(carro7);
    carros.push_back(carro8);
    carros.push_back(carro9);
    carros.push_back(carro10);
    carros.push_back(carro11);
    carros.push_back(carro12);

    //vendedores
    Vendedor* vendedor1 = new Vendedor("Javier", "Irigoyen Matos", "48002717", "Av. Benavides 560", "4432345", 2200, 3, carro1, "993994620", 2, 5);
    Vendedor* vendedor2 = new Vendedor("Daniel", "qw we", "4356437", "Av. rq 525", "3456425", 2500, 1, carro3, "993994621", 2, 6);
    Vendedor* vendedor3 = new Vendedor("Francisco", "as as", "5468435", "Av. gs 567", "4567424", 2700, 4, carro2, "993994622", 2, 7);
    Vendedor* vendedor4 = new Vendedor("Shirley", "ew ew", "3789543", "Av. hd 356", "1111111", 2900, 2, carro5, "993994623", 2, 8);
    Vendedor* vendedor5 = new Vendedor("Lorena", "tr tr", "7890563", "Av. sh 853", "2222222", 3000, 4, carro6, "993994624", 2, 1);
    Vendedor* vendedor6 = new Vendedor("Andre", "er er", "2457896", "Av. wr 145", "3333333", 3200, 1, carro4, "993994625", 2, 2);
    Vendedor* vendedor7 = new Vendedor("Pier", "uy uy", "2468975", "Av. ut 986", "4444444", 3500, 3, carro7, "993994626", 2, 3);
    Vendedor* vendedor8 = new Vendedor("Victor", "qr qr", "4789033", "Av. jg 345", "5555555", 4000, 4, carro9, "993994627", 2, 4);
    vendedores.push_back(vendedor1);
    vendedores.push_back(vendedor2);
    vendedores.push_back(vendedor3);
    vendedores.push_back(vendedor4);
    vendedores.push_back(vendedor5);
    vendedores.push_back(vendedor6);
    
    //empleados.push_back(vendedores);

    for (int i = 0; i < vendedores.size(); i++) {
        vendedores[i]->imprimir();
    }
}
