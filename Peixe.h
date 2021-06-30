#ifndef PEIXE_H
#define PEIXE_H

class Peixe: public Animal{
		string caracteristica;
	public:
		Peixe(string nome, int numerodePatas, string habitat, float velMedia, string caracteristica);
		string getCaracteristica()const;
		void setCaracteristica(string);
		void dadosPeixe()const;
};

#endif