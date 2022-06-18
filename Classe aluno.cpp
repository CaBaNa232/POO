#include<iostream>
#include<string.h>

using namespace std;

class Aluno{
	
	private:
		const int RA;
		string nome;
		int nota1, nota2;
	
	public:
		
		//Construtor
		Aluno(int, string, int, int);
		
		//Métodos Sets
		void set_Nome(string);
		void set_Nota1(int);
		void set_Nota2(int);
		
		
		//Métodos gets
		int get_Ra() const;
		string get_Nome() const;
		int get_Nota1() const;
		int get_Nota2() const;
	
		
		
		
};

Aluno::Aluno(int ra, string name, int n1, int n2) : RA(ra){ 
	
	set_Nome(name);
	set_Nota1(n1);
	set_Nota2(n2);
	
}

//Sets
void Aluno::set_Nome(string name) {
	nome = name;
}

void Aluno::set_Nota1(int n1){
	
	if(n1 >= 0 && n1 <= 10){
		nota1 = n1;	
	}else{
		nota1 = 0;
	}
	
}

void Aluno::set_Nota2(int n2){
	
	if(n2 >= 0 && n2 <= 10){
		nota2 = n2;	
	}else{
		nota2 = 0;
	}
	
}



//Gets
int Aluno::get_Ra() const{
	return RA;
}

string Aluno::get_Nome() const{
	return nome;
}

int Aluno::get_Nota1() const {
	return nota1;
}

int Aluno::get_Nota2() const {
	return nota2;
}



int main() {
	
	int ra, n1, n2;
	string nome;
	
	cout<<"Digite o RA: ";
	cin>>ra;
	cout<<"\nDigite o nome:";
	cin.ignore();
    getline(cin, nome);
	cout<<"\nDigite a primeira nota: ";
	cin>>n1;
	cout<<"\nDigite a segunda nota: ";
	cin>>n2;
	
	cout<<"\n-------Ficha Aluno-------\n";
	
	Aluno al1(ra, nome, n1, n2);
	
	cout<<"\n";
	cout<<"RA: "<<al1.get_Ra()<<endl;
	cout<<"Nome: "<<al1.get_Nome()<<endl;
	cout<<"Nota 1: "<<al1.get_Nota1()<<endl;
	cout<<"Nota 2: "<<al1.get_Nota2()<<endl;

	
	
	
	return 0;
}
