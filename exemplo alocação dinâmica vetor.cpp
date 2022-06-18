#include<stdio.h>
#include<stdlib.h>


int main() {
	
	int i;
	//Ponteiro
	int *p;
	//Aloca��o dinamica de um vetor
	p = (int *)malloc(10 * sizeof(int));
	
	//Inicializa��o
	for(i = 0; i < 10; i++){
		p[i] = i + 1;
	}
	//Printando o vetor
	for(i = 0; i < 10; i++){
		printf("%d ", *p); //ou printf("%d ", p[i];
		p++;
	}
	
	//Libera a mem�ria
	free(p);
	
	return 0;
}
