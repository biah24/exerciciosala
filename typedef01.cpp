#include<stdio.h>

//typedef - reescrever o tipo de dado

int main(){
	
	typedef float prova; 
	prova prova1;
	
	printf("Nota: ");
	scanf("%f", &prova1);
	printf("Prova: %.2f", prova1);
	
	
	return 0;
}
