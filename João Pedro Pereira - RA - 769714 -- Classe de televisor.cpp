// PROGRAMAÇÃO ORIENTADA A OBJETOS
//Informações do estudante
// Nome: João Pedro Pereira
// Curso: BCC
// RA: 769714

#include<iostream>
#include<string.h>

using namespace std;

class televisor{ //Classe televisor
	
	private: //Atributos privados	
		string cor;
		string tipo;
		int voltagem;
		bool smart;
	
	public: //Atributos publicos
	
		//Construtor sem parametros
		televisor();  
		//Construtor com parametros
		televisor(string, string, int, bool); 
		
		//Declarações locais
		bool ligado_desligado;
		int volume;
		int canal;
		
		//Métodos
		void set_color(string); 
		void set_type(string); 
		void set_volt(int); 
		void set_sma(bool);
		void print_about(); 
		void controla_volume(int vol);
		void on_of(bool estado);
		void set_canal(int channel);
};

//Construtor sem parametros, atribui valores padrao
televisor::televisor(){ 
	cor = "Preto";
	tipo = "Plasma";
	voltagem = 110;
	smart = true;
	ligado_desligado = false;		
}

//Construtor com parametros
televisor::televisor(string color, string type, int volt, bool sma){ 
	cor = color; 
	tipo = type; 
	voltagem = volt;
	smart = sma;
}

void televisor::set_color(string color){ //Obter cor
	cor = color;
}

void televisor::set_type(string type){ //Obter tipo (Led, LCD, Plasma etc;
	tipo = type;
}

void televisor::set_volt(int volt){ //Obter voltagem
	if( volt == 110 || volt == 220){
		voltagem = volt;
	}else{
		voltagem = 110;
	}	
}

void televisor::set_sma(bool sma){ //Smart ?
	smart = sma;		
}

void televisor::on_of(bool estado){ //Ligado ou desligado
	if(estado == true){
		ligado_desligado = true;
		cout<<"Ligado: 1";

		
	}else{
		ligado_desligado = false;
		cout<<"Ligado: 0";	
	}
}

void televisor::controla_volume(int vol){ //Controla volume
	if(vol >= 80 && vol <= 100){
		volume = vol;
		cout<<"Volume em: "<<volume<<"% possiveis danos auditivos";
	}else if(vol){
		volume = vol;
		cout<<"Volume em: "<<volume<<"%";	
	}
}


void televisor::print_about(){ 
	cout<<"Cor: "<<cor<<endl;
	cout<<"Tipo: "<<tipo<<endl;
	cout<<"Voltagem: "<<voltagem<<endl;
	cout<<"Smart: "<<smart<<endl;	
}

void televisor::set_canal(int channel){
	if(channel == 1){
		canal = channel;
		cout<<"Canal: Record";
		
	}else if(channel == 2){
		canal = channel;
		cout<<"Canal: Globo";
		
	}else if(channel == 3){
		canal = channel;
		cout<<"Canal: Globo";
		
	}else{
		cout<<"Canal invalido";
	}	
}


int main(){
	televisor nova_tv; //Novo objeto
	string cor, tipo;
	int voltagem, op, volume, canal;
	bool smart, ligar;
	
	//Obtem informações do objeto
	cout<<"----------------------------------------"<<endl;
	cout<<"Cor: ";
	cin>> cor;
	cout<<"Tipo: ";
	cin>>tipo;
	cout<<"Voltagem: ";
	cin>>voltagem;
	cout<<"Smart: ";
	cin>>smart;
	cout<<"\n----------------------------------------"<<endl;
	cout<<"Informacoes sobre o televisor";
	cout<<"\n----------------------------------------"<<endl;
	printf("\n");
	//Imprime informações do objeto nova_tv
	nova_tv.set_color(cor);
	nova_tv.set_type(tipo);
	nova_tv.set_volt(voltagem);
	nova_tv.set_sma(smart);
	nova_tv.print_about();
	cout<<"Ligado: 0";
	//Opções da TV (métodos)
	printf("\n");
	cout<<"\n-----------------Opcoes------------------"<<endl;
	cout<<"\n1 - Ligar/Desligar"<<endl;
	cout<<"2 - Trocar de canal"<<endl;
	cout<<"3 - Aumentar volume"<<endl;
	//Opções (métodos)
	cout<<"\nDigite uma opcao: ";
	cin>>op;
	cout<<"\n----------------------------------------";
	
	switch(op){
		case 1:
			cout<<"\nAperte o botao de power: ";
			cin>> ligar;
			cout<<"----------------------------------------"<<endl;
			cout<<"\n";
			nova_tv.print_about();
			nova_tv.on_of(ligar);
			break;
		case 2:
			cout<<"\nCanais: "<<endl;
			cout<<"----------------------------------------"<<endl;
			cout<<"\n1 - Record"<<endl;
			cout<<"2 - Globo"<<endl;
			cout<<"3 - Bandeirantes"<<endl;
			cout<<"\n";
			cout<<"Digite uma canal: ";
			cin>> canal;
			cout<<"\n----------------------------------------"<<endl;
			cout<<"\n";
			nova_tv.print_about();
			nova_tv.set_canal(canal);
			break;	
		case 3:
			cout<<"\nAperte o botao de volume: ";
			cin>> volume;
			cout<<"----------------------------------------"<<endl;
			cout<<"\n";
			nova_tv.print_about();
			nova_tv.controla_volume(volume);
			break;
		default:
			cout<<"Opcao invalida";
	}
	return 0;
}
