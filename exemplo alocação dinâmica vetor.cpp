#include<stdio.h>
#include<stdlib.h>


int main() {
	
	int i;
	//Ponteiro
	int *p;
	//Alocação dinamica de um vetor
	p = (int *)malloc(10 * sizeof(int));
	
	//Inicialização
	for(i = 0; i < 10; i++){
		p[i] = i + 1;
	}
	//Printando o vetor
	for(i = 0; i < 10; i++){
		printf("%d ", *p); //ou printf("%d ", p[i];
		p++;
	}
	
	//Libera a memória
	free(p);
	
	return 0;
}
