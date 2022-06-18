#include<iostream>

using namespace std;

class horario{
	
	private:
	int hora, minuto, segundo;
	
	public:
	horario();
	horario(int, int, int);
	void ajusta_hora(int);
	void ajusta_minuto(int);
	void ajusta_segundo(int);	
	void imprime();
		
};

 horario::horario(){
	hora = 0;
	minuto = 0;
	segundo = 0;
}

horario::horario(int h, int m, int s){
	if(h>= 0 && h <= 24 && m >= 0 && m <= 59 && s >= 0 && s <= 59)
	hora = h;
	minuto = m;
	segundo = s;
}

void horario::ajusta_hora(int nova_hora){
	
	if(nova_hora >=0 && nova_hora <= 24){
		hora = nova_hora;
	}else{
		hora = 0;
	}
}

void horario::ajusta_minuto(int novo_minuto){
	
	if(novo_minuto >= 0 && novo_minuto <= 59){
		minuto = novo_minuto;
	}else{
		minuto = 0;
	}
}

void horario::ajusta_segundo(int novo_segundo){
	
	if(novo_segundo >= 0 && novo_segundo <= 59){
		segundo = novo_segundo;
	}else{
		segundo = 0;
	}
}

void horario::imprime(){
	
	cout<<hora<<":"<<minuto<<":"<<segundo<<endl;
}

int main(){
	
	horario x;
	x.ajusta_hora(60);
	x.ajusta_minuto(-4);
	x.ajusta_segundo(250);
	x.imprime();
	
	
	
	return 0;
}
