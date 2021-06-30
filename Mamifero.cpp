#include "Mamifero.h"

    
Mamifero::Mamifero(string nome, int numerodePatas, string habitat, float velMedia, string alimento):Animal(nome,numerodePatas,habitat,velMedia){
		this-> alimento = alimento;
}

string Mamifero::getAlimento() const{
	return alimento;
}

void Mamifero::setAlimento(string alimento){
	this-> alimento = alimento;
}

void Mamifero::dadosMamifero() const{
	Animal::dados();
	cout << " alimento do  mamifero: " << alimento << endl;
}