//Cálculo da média de 3 notas em C++
#include<iostream>

using namespace std;

int main(){
	
	//Declarações locais;
	float nota, media, soma;
	int i;
	soma = 0;
	
	//Entrada das notas
	for(i = 1; i <= 3; i++){
		cout<<"Digite a nota "<<i<<": ";
		cin>> nota;
		soma += nota;
	}
	
	//Cálculo da média
	media = soma / 3;
	//Exibindo a média
	cout<<"Media = "<<media<<endl;
	
	
	
	return 0;
}
