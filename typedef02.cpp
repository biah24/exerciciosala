#include<stdio.h>


struct Livro{
	char titulo[40];
	char autor[50];
	int anoPublicacao;
	
};
//typedef - reescrever o tipo de dado

int main(){
	
	typedef struct Livro Livro;
	
	Livro livro1, livro2;
	
	printf("Cadastro 1\n");
	printf("Titulo: ");
	fgets(livro1.titulo, 40, stdin);
	printf("Autor: ");
	fgets(livro1.autor, 40, stdin);
	printf("Ano da publicacao: ");
	scanf("%i", &livro1.anoPublicacao);
	
	
	
	return 0;
}
