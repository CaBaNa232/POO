#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<math.h>



using namespace std;

class Aposta{
	
	private:
		
		const int id;
		string nome_apostador;
		int qtd_apostados;
		
			
	public:
		
		int *numeros;
		int tam;
		Aposta(int, string); //Métodos
		Aposta(int, string, int); //Métodos
		
		//Métodos set
		int set_numero(int); //Numeros apostados
		
		//Métodos get
		int get_id() const;
		int valor_total(int);
		int get_apostas() const;
		string get_nome() const;
		void imprime_vetor();
	
			
};

Aposta::Aposta(int ID, string nome) : id(ID) { //Construtor
	nome_apostador = nome;
	qtd_apostados = 5;
}

Aposta::Aposta(int ID, string nome, int numero_apostas) : id(ID) { //Construtor

	nome_apostador = nome;
	
	if(numero_apostas > 5) {
		qtd_apostados = numero_apostas;
		
	}else if(numero_apostas > 5 && numero_apostas <= 25) {
		qtd_apostados = numero_apostas;
	}else if(numero_apostas < 5 || numero_apostas > 25) { //Valor inválido
		qtd_apostados = 5; //Atribuindo o valor minimo de aposta
	}
}

int Aposta::set_numero(int num_apostado) { //Recebe os numeros da aposta
	
	int i, *p;
	if(num_apostado > 0 && num_apostado < 100){
		
		p = new int [25];
	
		for(i = 0; i < tam; i++){
			p[i] = 0;
		}
		for(i = 0; i < tam; i++){
			p[i] = num_apostado;
		}
	
	}

	return *p;
}



int Aposta::valor_total(int num_apostas) { //Valor R$ total de aposta
	
	int cont = 0, n = 0;
	n = num_apostas - 5;
	return cont +=  pow(2, n);
}

int Aposta::get_id() const{
	
	return id;
}

string Aposta::get_nome() const{
	return nome_apostador;
}

int Aposta::get_apostas() const{
	return qtd_apostados;
}

int main(){
	
	int qtd_apostas = 0;
	
   	cout << "Apostas ate o momento: " <<qtd_apostas<<endl<< endl;
	cout << "Arrecadado ate o momento: $0"<< endl << endl;
  
    Aposta a1(1, "Joao");
    a1.set_numero(25);
    a1.set_numero(2);
    a1.set_numero(7);
    a1.set_numero(24);
    a1.set_numero(8); 
    qtd_apostas++;
    
    cout<<"Nome: "<<a1.get_nome()<<endl;
    cout<<"ID: "<<a1.get_id()<<endl;
    cout<<"Qtd Numeros: "<<a1.get_apostas()<<endl;
    cout<<"Valor: "<<a1.valor_total(5)<<endl;
    cout<<"Numero: ";
   
    cout<<"\n";
    
    Aposta a2(1, "Pedro",5);
    a2.set_numero(5);
    a2.set_numero(21);
    a2.set_numero(4);
    a2.set_numero(51);
    a2.set_numero(63); 
    qtd_apostas++;
    
	
	cout<<"\n";
	cout<<"\n";
	cout<<"Nome: "<<a2.get_nome()<<endl;
    cout<<"ID: "<<a2.get_id()<<endl;
    cout<<"Qtd Numeros: "<<a2.get_apostas()<<endl;
    cout<<"Valor: "<<a2.valor_total(7)<<endl;
    cout<<"Numero: ";
	
	return 0;
}
