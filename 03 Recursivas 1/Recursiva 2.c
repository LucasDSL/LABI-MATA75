#include <stdio.h>

int soma(int, int);

int main() {
	int n, m;
	printf("Informe o primeiro numero:\n");
	scanf("%d", &n);
	printf("Informe o segundo numero:\n");
	scanf("%d", &m);
	printf("%d", soma(n,m)); // chamada da fun��o soma
	return 0;
}

int soma(int n, int m){ // fun��o recursiva que calcula a soma
	if(n==m){
		return m;
	}
	return n+soma(n+1,m); //n � somado com a soma do seu sucessor at� m, com a fun��o sendo chamada at� que n = m
}
