#ifndef ANIMAL_H
#define ANIMAL_H

class Animal{
	private:
		string nome;
		int numerodePatas;
		string habitat;
		float velMedia;
    public:
    	Animal(string nome, int numerodePatas, string habitat, float velMedia);
    	string getNome() const;
    	int getNumerodepatas() const;
    	string getHabitat() const;
    	float getVelmedia() const;
    	void setNome(string) ;
    	void setNumerodepatas(int);
    	void setHabitat(string);
    	void setVelmedia(float);
    	void dados()const;
    	
};

#endif