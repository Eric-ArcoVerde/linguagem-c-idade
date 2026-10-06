#include<stdio.h>

char nome[30];
int idade;
int valor;

int main (){
	printf("=====BEM VINDO======\n");
	
	printf("\nQual o seu nome? ");
	scanf("%s", &nome);
	
	printf("\nQual a sua idade? ");
	scanf("%d", &idade);
	
	if (idade >= 18){
		printf("\nBem vindo, %s\nVoce pode entrar", nome);
	}else{
		printf("\nLamento %s, voce nao pode entrar", nome);
	}
	
	printf("\nAcerto o numero para poder sair do sistema: ");
	scanf("%d", &valor);
	
	while(valor != 0){
		printf("\nContinue tentando: ");
		scanf("%d", &valor);
	}
	
	
	return 0;
}
