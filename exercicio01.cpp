#include<stdio.h>

struct Funcionario{
	char nome[50];
	float vendas[3];
};

int main(){
	
	float soma = 0;
	float valores = 0;
	typedef struct Funcionario Funcionario;
	Funcionario funcionario[2];
	
	
	for (int i = 0; i < 2; i++){
		
		printf("Nome funcionario: ");
		getchar();
		fgets(funcionario[i].nome, 50, stdin);

		printf("\n");
		
	for (int j = 0; j < 3; j++){
		
		printf("Vendas (nov, dez, jan)\n");
		
		printf("Vendas no mes: ");
		scanf("%f", &funcionario[i].vendas[j]);
		
		valores = funcionario[i].vendas[j];
		soma = soma + valores;
	
		//printf("\n");
		
		
		}
		printf("%.2f\n", soma);
	}
	
		
	
}



