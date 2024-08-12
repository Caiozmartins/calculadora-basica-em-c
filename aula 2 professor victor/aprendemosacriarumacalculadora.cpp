#include <stdio.h>
int n1=0;
int n2=0;
int somaresult=0;
int subtracaoresult=0;
int divisaoresult=0;
int multiplicacaoresult=0;
int main(){
	printf("Digite o primeiro numero para somar:\n");
	scanf("%d", &n1);

	printf("digite o segundo numero para somar:\n");
	scanf("%d", &n2);
	
	 somaresult= n1+n2;
	 
	 printf("resultado da soma: %d\n", somaresult);
	 //
	 printf("Digite o primeiro numero para subtrair:\n");
	scanf("%d", &n1);
	
	printf("digite o segundo numero para subtrair:\n");
	scanf("%d", &n2);
	
	 subtracaoresult= n1-n2;
	  printf("resultado da subtracao: %d\n", subtracaoresult);

	 //
	 printf("Digite o primeiro numero para dividir:\n");
	scanf("%d", &n1);
	
	printf("digite o segundo numero para dividir:\n");
	scanf("%d", &n2);
	
	 divisaoresult= n1/n2;
	 
	  printf("resultado da divisao: %d\n", divisaoresult);
	 	 
	 //
	 printf("Digite o primeiro numero para multiplicar:\n");
	scanf("%d", &n1);
	
	printf("digite o segundo numero para multiplicar:\n");
	scanf("%d", &n2);
	
	 multiplicacaoresult= n1*n2;
	 
	 printf("resultado da multiplicacaco: %d\n", multiplicacaoresult);

}
