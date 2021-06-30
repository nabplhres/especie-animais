#include "Animal.h"


Animal::Animal(string nome, int numerodePatas, string habitat, float velMedia){
	this-> nome = nome;
	this-> numerodePatas = numerodePatas;
	this-> habitat = habitat;
	this-> velMedia = velMedia;
}

string Animal::getNome() const{
	return nome;
}

int Animal::getNumerodepatas() const{
	return numerodePatas;
}

string Animal::getHabitat()const{
	return habitat;
}

float Animal::getVelmedia() const{
	return velMedia;
}

void Animal::setNome(string nome){
	this-> nome = nome;
}

void Animal::setNumerodepatas(int numerodePatas){
	this-> numerodePatas = numerodePatas;
}

void Animal::setHabitat(string habitat){
	this-> habitat = habitat;
}

void Animal::setVelmedia(float velMedia){
	this -> velMedia = velMedia;
}

void Animal::dados() const{
	cout << " nome do animal: " << nome << endl;
	cout << " numero de patas: " << numerodePatas << endl;
	cout << " habitat natural: " << habitat << endl;
	cout << " velocidade media: " << velMedia << endl;
	
}


