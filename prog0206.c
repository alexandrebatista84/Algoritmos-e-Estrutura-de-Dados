#include <stdio.h>

main()
{
	short int idade;
	int montante;
	long int conta;
	
	printf("Introduza a idade: ");
	scanf("%hd", &idade);
	printf("Introduza o montante: ");
	scanf("%d", &montante);
	printf("Introduza o numero de conta: ");
	scanf("%ld", &conta);
	
	printf("Uma pessoa com %hd anos depositou %d €, na conta numero %ld.\n",idade, montante,conta);
	return(0);
}