// PROVA FINAL - QUESTÃO 2 
// Aluna: Nábila Palhares

#include <iostream>
#include <iomanip>
#include <locale>
#include <string>

using  namespace std;

#include "Animal.cpp" // metodos das classes
#include "Peixe.cpp"
#include "Mamifero.cpp"

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	string nome, habitat, alimento, caracteristica;
	int numerodePatas;
	float  velMedia;
	cout << " insira o nome do animal: ";
	cin >> nome;
	cout << " informe o numero de patas:";
	cin >> numerodePatas;
	cout << " informe o seu habitat natural: ";
	cin >> habitat;
	cout << " qual a sua velocidade media: ";
	cin >> velMedia;
	cout << " ------------------------------ \n \n" ;
	Animal camelo(nome,numerodePatas,habitat,velMedia);	
	
	cout << " insira o nome do peixe: ";
	cin >> nome;
	cout << " informe o numero de patas: ";
	cin >> numerodePatas;
	cout << " informe o seu habitat natural: ";
	cin >> habitat;
	cout << " qual a velocidade media: ";
	cin >> velMedia;
	cout << " alguma caracteristica presente: ";
	cin >> caracteristica;
	cout << " ------------------------------  \n \n";
	Peixe tubarao(nome,numerodePatas,habitat,velMedia,caracteristica);
	
	cout << " insira o nome do mamifero: ";
	cin >> nome;
	cout << " informe o numero de patas: ";
	cin >> numerodePatas;
	cout << " informe o seu habitat natural: ";
	cin >> habitat;
	cout << " qual a velocidade media: ";
	cin >> velMedia;
	cout << " do que se alimenta: ";
	cin >> alimento;
	cout << " ------------------------------  \n \n";
	Mamifero ursoCanada(nome,numerodePatas,habitat,velMedia,alimento);
	
	camelo.dados();
	tubarao.dadosPeixe();
	ursoCanada.dadosMamifero();
	
	return 0;
	
}
