//C�lculo da m�dia de 3 notas em C++
#include<iostream>

using namespace std;

int main(){
	
	//Declara��es locais;
	float nota, media, soma;
	int i;
	soma = 0;
	
	//Entrada das notas
	for(i = 1; i <= 3; i++){
		cout<<"Digite a nota "<<i<<": ";
		cin>> nota;
		soma += nota;
	}
	
	//C�lculo da m�dia
	media = soma / 3;
	//Exibindo a m�dia
	cout<<"Media = "<<media<<endl;
	
	
	
	return 0;
}
