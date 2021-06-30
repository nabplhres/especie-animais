#ifndef MAMIFERO_H
#define MAMIFERO_H

class Mamifero: public Animal{
		string alimento;
	public:
		Mamifero(string nome, int numerodePatas, string habitat, float velMedia, string alimento);
		string getAlimento()const;
		void setAlimento(string);
		void dadosMamifero()const;
};

#endif