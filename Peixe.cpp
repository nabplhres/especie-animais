#include "Peixe.h"


Peixe::Peixe(string nome, int numerodePatas, string habitat, float velMedia, string caracteristica):Animal(nome, numerodePatas, habitat, velMedia){
		this-> caracteristica = caracteristica;
}

string Peixe::getCaracteristica()const{
	return caracteristica;
}

void Peixe::setCaracteristica(string){
	this-> caracteristica = caracteristica;
}

void Peixe::dadosPeixe()const{
	Animal::dados();
	cout << " caracteristicas fisica: " << caracteristica << endl;
}
