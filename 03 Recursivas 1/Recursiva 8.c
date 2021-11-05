#include <stdio.h>
#include <string.h>

void inverter(char *, int, int);

int main(){
	int len;
	char s[100];
	printf("Informe a frase:\n");
	scanf(" %[^\n]", &s);
	len=strlen(s); // armazena o tamanho da frase
	inverter(s, len, 0); //chama a fun��o de inverter
	printf("Frase invertida:\n");
	printf("%s", s);
	return 0;
}

void inverter(char * s, int len, int i){//fun��o que inverte a frase
	char aux;
	aux=s[i]; // a variavel auxiliar armazena a letra na posi��o i
	s[i]=s[len-i-1]; // a letra na posi��o i � trocada pela letra na posi��o oposta
	s[len-i-1]=aux;
	if(i<(len/2) - 1){ //at� metade da frase a fun��o de inverter � chamada
		return inverter(s, len, i+1);
	}
}
